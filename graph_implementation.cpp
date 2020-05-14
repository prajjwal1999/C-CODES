#include<bits/stdc++.h>
using namespace std;
#define ll long long int

 void c_p_c()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
}
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
   map<T,bool> visited;
   q.push(src);
   visited[src]=true;
   while(!q.empty())
   {
      T node=q.front();
      cout<<node<<" ";
      q.pop();
      for(auto neigh:adjlist[node])
      {
         if(!visited[neigh])
         {
            q.push(neigh);
            visited[neigh]=true;
         }
      }
   }
}
void sssp(T src)
{
   queue<T> q;
   map<T,T> parent;
   map<T,int> dist;
   for(auto i:adjlist)
      dist[i.first]=INT_MAX;

   q.push(src);
   dist[src]=0;
   parent[src]=src;
   while(!q.empty())
   {
      T node=q.front();
      cout<<node<<" ";
      q.pop();
      for(auto neigh:adjlist[node])
      {
         if(dist[neigh]==INT_MAX)
         {
            q.push(neigh);
            dist[neigh]=dist[node]+1;
            parent[neigh]=node;
         }
      }
   }
   cout<<endl;
   for(auto i:adjlist)
   {
      T node=i.first;
      cout<<"Distance of " <<node <<" from "<<src<<" is "<<dist[node]<<endl;
   }
}
void dfs_helper(T node, map<T,bool> &visited)
{
   visited[node]=true;
   cout<<node<<" ";
   for(auto neigh:adjlist[node])
   {
      if(!visited[neigh])
      {
         dfs_helper(neigh,visited);
      }
   }
}
void dfs(T src)
{
   map<T,bool> visited;
   dfs_helper(src,visited);
}


};

int32_t main()
{
   c_p_c();
   graph<int> g;

   g.add_edge(0,1);
   g.add_edge(1,2);
   g.add_edge(0,4);
   g.add_edge(2,4);
   g.add_edge(2,3);
   g.add_edge(3,5);
   g.add_edge(3,4);

   g.dfs(0);



   return 0;
}