#include<bits/stdc++.h>
using namespace std;



int main()
{
    int i,j;
    char s[100010],t[100010];
    while(scanf("%s%s",s,t)!=EOF)
    {
        i=0;
        for(j=0;j<strlen(t);j++)
        {
            if(s[i]==t[j]) ++i;
        }
        if(i==strlen(s)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
