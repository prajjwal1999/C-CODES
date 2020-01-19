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
      while(!q.empty())
      {
        T node= q.front();
        cout<<node<<" ";
        q.pop();
        //for neigbours of cuurent node, find out nodes that have not neen visted
        for(auto neighbour: adjlist[node])
        {
          if(!visited[node])
          {
            q.push(neighbour);
            visited(neighbour)=true;
          }
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
  g.add_edge(0,1);
  g.add_edge(1,2);
  g.add_edge(0,4,);
  g.add_edge(2,4);
  g.add_edge(2,3);
  g.add_edge(3,5);
  g.add_edge(3,4);
  g.bfs(0);



  return 0;

}
