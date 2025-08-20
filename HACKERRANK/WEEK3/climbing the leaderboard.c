#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define ll long long int
int main()
{
    ll n,m,i,j,an[200006],am[200005],ar[200005];
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        {
        scanf("%lld",an+i);
    }
    ar[0]=1;
    for(i=1;i<n;i++)
        {
        if(an[i]==an[i-1])
            ar[i]=ar[i-1];
        else
            ar[i]=ar[i-1]+1;
    }
    ar[n]=ar[n-1]+1;
    scanf("%lld",&m);
    for(i=0;i<m;i++)
        {
        scanf("%lld",am+i);
        
    }
    i=n-1;j=0;
    while(j<m)
        {
        while(an[i]<am[j] && i>0)
            i--;
        if(an[i]==am[j])
        printf("%lld\n",ar[i]);
        else if(an[i]>am[j])
            printf("%lld\n",ar[i]+1);
            else{
            if(ar[i]==1)
              printf("1\n");
            else
                printf("%lld\n",ar[i]-1);}  
        j++;
    }
    return 0;
}