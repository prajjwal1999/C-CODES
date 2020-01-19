#include <iostream>
using namespace std;
void prime(int *p, int n)
{
    p[0]=0; p[1]=0;
    p[2]=1;
    //let us make all odd nmbers as prime
    for(int i=3;i<=n;i+=2)
    p[i]=1;

    //sieve logic to make all non prime number as 0
    //1.optimization-iterate over only odd numbers
    for(int i=3;i<=n;i+=2)
    {
        if (p[i]){
            //mark all mutiples of that number as not prime
                for(int j=i*i;j<=n;j+=2*i)
                {
                    p[j]=0;
                }
        }
    }
    return ;

}
int main() {
    int N;
int p[N]={0};
    cin>>N;
    prime(p,N);
    for(int i=0;i<N;i++)
    {
        if(p[i]){
        cout<<i<<endl;
        }
    }
    return 0;

}
