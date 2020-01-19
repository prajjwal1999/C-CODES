#include<bits/stdc++.h>
using namespace std;
#define ll long long int
template<typename T>
class graph{
    map<T, list<T>> adjlist;
public:
    graph()
    {
        
    }



void add_edge(T u, T v, bool bidirec=true)
{
    adjlist[u].push_back(v);
    if(bidirec)
        adjlist[v].push_back(u);
}
void print()
{
    for(auto i:adjlist)
    {
        cout<<i.first<<"->";
        for(auto entry:i.second)
            cout<<entry<<",";
        cout<<endl;
    }
}
   void bfs(T src)
   {
      queue<T> q;
      map<T, bool> visited;

      q.push(src);
      visited[src]=true;
      while(!q.empty())
      {
        T node= q.front();
        cout<<node<<" ";
        q.pop();
        //for neigbours of cuurent node, find out nodes that have not neen visted
        for(auto neighbour: adjlist[node])
        {
          if(!visited[neighbour])
          {
            q.push(neighbour);
            visited[neighbour]=true;
          }
        }

      }
   }

   void bfs_SSSP(T src)
   {
      queue<T> q;
      map<T, int> dist;
      map<T,T> parent;
      for(auto i: adjlist)
      {
        dist[i.first]=INT_MAX;

      }
      q.push(src);
      dist[src]=0;
      parent[src]=src;
      while(!q.empty())
      {
        T node= q.front();
        cout<<node<<" ";
        q.pop();
        for(auto neighbour: adjlist[node])
        {
          if(dist[node]==INT_MAX)
          {
            q.push(neighbour);
            dist[neighbour]=dist[node]+1;
            parent[neighbour]=node;
          }
        }
      }
      //print distance of all node from src
      for(auto i:adjlist)
      {
        T node=i.first;
        cout<<"Distance of "<<node<<"from"<<src<<" is"<<dist[node];

      }
   }
   void DFS_helper(T node, map<T,bool> & visited)
   {
      //whenver we cpome to nide mark it viited

      visited[node]=true;
      cout<<node<<" ";
      //try to find out neighb or of nodee not n yet vosted
      for(auto neighbour: adjlist[node])
      {
        if(!visited[neighbour])
        {

          DFS_helper(neighbour,visited);
        }
      }
   }
   void DFS(T src){
    map<T, bool> visited;
    DFS_helper(src, visited);
    int component=1;
    cout<<endl;
    for(auto i:adjlist)
    {
        T city=i.first;
        if(!visited[city])
        {
            DFS_helper(city,visited);
            component++;
        }
    }
    cout<<"The current graph has "<<component<<" component";

    
       }
       void DFS_helper_topological(T node, map<T,bool> &visited, list<T> &ordering)
       {
            visited[node]=true;
            //with cal dfs on the visited neighbour of current node
            for(T neighbour:adjlist[node])
            {
                if(!visited[neighbour]){
                    DFS_helper_topological(neighbour, visited, ordering);
                }
            }

            ordering.push_front(node);
       }
       void dfs_topological_sort(){
        map<T,bool> visited;
        list<T> ordering;
        for(auto i:adjlist)
        {
            T node= i.first;
            if(!visited[node])
            {
                DFS_helper_topological(node, visited, ordering);
            }
        }
        //print all the elemnet of ordeing
        for(T element:ordering)
        {
            cout<<element<<"-->";
        }
       }



};
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  graph<int> g;
  g.add_edge(0,1);
  g.add_edge(2,1);
  g.add_edge(4,0);
  g.add_edge(2,4);
  g.add_edge(2,3);
  g.add_edge(3,5);
  g.add_edge(3,4);
  g.add_edge(3,4);
  g.add_edge(99,45);
  g.add_edge(5,9087);
  g.dfs_topological_sort();



  return 0;

}
