#include<bits/stdc++.h>

using namespace std;

void print_sum(int arry[],int n)
{
    int q;
    cin>>q;

    for(int i=0; i<q; i++ )
    {
        int a,b;
        int sum=0;
        cin>>a>>b;
        while(a!=b+1)
        {
            sum = sum+arry[a];
            a++;
        }
        cout<<sum<<endl;
    }
}

int main()
{

    int n;
    cin>>n;
    int arry[n];
    for(int i=0; i<n; i++)
    {
        cin>>arry[i];
    }

    print_sum(arry,n);

}
