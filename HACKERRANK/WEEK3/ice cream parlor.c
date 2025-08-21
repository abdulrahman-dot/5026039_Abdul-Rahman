#include<stdio.h>
int main()
{
    int tests,sum,len,i,j,nums[20000];
    for(scanf("%d",&tests);tests>0;tests--)
    {
        scanf("%d%d",&sum,&len);
        for(i=0;i<len;i++)
        scanf("%d",&nums[i]);
        for(i=0;i<len-1;i++)
        for(j=i+1;j<len;j++)
        {
            if(nums[i]+nums[j]==sum)
            printf("%d %d\n",i+1,j+1);
        }
    }
    return 0;
}