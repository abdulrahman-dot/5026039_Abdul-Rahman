#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q;
    scanf("%d",&q);
    for(int l=0; l<q; l++)
    {
        int n, k;
        scanf("%d",&n);
        scanf("%d",&k);
        int a[n], b[n];
        for(int x=0; x<n; x++)
        {
            scanf("%d",&a[x]);
        }
        for(int y=0; y<n; y++)
        {
            scanf("%d",&b[y]);
        }
        int temp1, j;
        for(int x=0; x<n; x++)
        {
        temp1=a[x];
        j=x-1;
        while((j>=0)&&(temp1<a[j]))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp1;
        }
        int temp2, i;
        for(int x=0; x<n; x++)
        {
        temp2=b[x];
        i=x-1;
        while((i>=0)&&(temp2>b[i]))
        {
            b[i+1]=b[i];
            i=i-1;
        }
        b[i+1]=temp2;
        }
        int flag=0;
        for(int j=0; j<n; j++)
        {
            if(a[j]+b[j]<k)
            {
                flag=0;
                break;
            }
            else{
                flag=1;
            }
        }
        if(flag==0){
           printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}