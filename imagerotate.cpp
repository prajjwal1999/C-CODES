#include<iostream>
using namespace std;
int main() {
    int N,i,j;
    cin>>N;
    int a[N][N],b[N][N];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            cin>>a[i][j];
        }
    }
    int k=0;
    for(i=N-1;i>=0;i--)
    {
        int c=0;
        for(j=0;j<N;j++)
        {
            b[k][c]=a[j][i];
            c++;
        }
        k++;
    }
     for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    

	return 0;
}