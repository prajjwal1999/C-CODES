#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
   vector <string> s;
   char temp[1000];
    for (int i=0; i<N; i++) 
    {
    cin>>temp;
    s.push_back(temp);
    }
sort(s.begin(),s.end());
for (int i=0; i<s.size(); i++)     
        cout << s[i] << "\n";     
 return 0;
}
