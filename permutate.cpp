#include <iostream>
using namespace std;
int pop=0;
void permutate(char *in ,int i)
{
    //base case
    if(in[i]=='\0')
    {
        cout<<in<<" ";
          return ;
    }
    //recursive case
    for(int j=i;in[j]!='\0';j++)
    {
        swap(in[i],in[j]);
        permutate(in,i+1);
        swap(in[i],in[j]);

    }
}
int main() {
    char in[100];
    cin>>in;
    permutate(in,0);
    return 0;
}
