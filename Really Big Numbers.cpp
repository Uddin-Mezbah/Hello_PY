#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int  n,s;
    cin>>n>>s;
    long long int  sum=0,big_num=n;
    while(sum<=big_num)
    {
        long long int mid_idx=sum+big_num;
        long long int x=mid_idx;
        long long int ans=0;
        while(x)
        {
            ans+=x%10;
            x/=10;
        }
        if(mid_idx-ans<s)
            sum=mid_idx+1;
        else
            big_num=mid_idx-1;
    }
    cout<<n-big_num<<endl;


    return 0;
}


//#include<bits/stdc++.h>
//using namespace std;
////typedef long long ll;
//int main()
//{
//    ll n,s;
//    cin>>n>>s;
//    ll l=0,r=n;
//    while(l<=r){
//        ll mid=l+r>>1;
//        ll t=mid,sum=0;
//        while(t){
//            sum+=t%10;
//            t/=10;
//        }
//        if(mid-sum<s)l=mid+1;
//        else r=mid-1;
//    }
//    cout<<n-r<<endl;
//}

