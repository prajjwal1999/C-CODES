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
   
   void topo_bfs()
   {
     queue<T> q;
     map<T,bool> visited;
     map<T, int> indegree;
      for(auto i: adjlist)
      {
        T node=i.first;
        visited[node]=false;
        indegree[node]=0;
      }

      // intialise degrre of all nodes
      for(auto i:adjlist)
      {
          T u= i.first;
          for(T v:adjlist[u])
          {
            indegree[v]++;
          }
      }
      //find nodes with degree 0
      for(auto i:adjlist)
       {
          T node=i.first;
          if(indegree[node]==0)
          {
            q.push(node);
          }
       }
       //start with  algo
       while(!q.empty()){

        T node=q.front();
        q.pop();
        cout<<node<<" ";

        for(auto neighbour:adjlist[node]){

            indegree[neighbour]--;
            if(indegree[neighbour]==0)
                q.push(neighbour);

        }
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
  g.add_edge(0,1,false);
  g.add_edge(2,1,false);
  g.add_edge(0,2,false);
  
  g.topo_bfs();



  return 0;

}
