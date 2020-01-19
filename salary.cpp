#include<iostream>
#include<algorithm>
using namespace std;
bool compare(pair<string,int>p1, pair<string,int>p2)
{
if(p1.second==p2.second)
{
return p1.first<p2.first;
}
return p2.second<p1.second;
}
int main() 
{
int x;
int N;
cin>>x;
//if(x>=1 && x<=100){
cin>>N;
pair<string,int> emp[100005];
string name;
int salary;
for(int i=0;i<N;i++)
{
cin>>name>>salary;
emp[i].first=name;
emp[i].second=salary;
}
sort(emp,emp+N,compare);
for(int i=0;i<N;i++)
{
//if(emp[i].second>x && emp[i].second<100 )
if(emp[i].second>=x )
{
cout<<emp[i].first<<" "<<emp[i].second;
cout<<endl;
}
}
return 0;
}


