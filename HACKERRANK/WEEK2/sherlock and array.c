#include<stdio.h>
int main()
{
    int cases,size,idx;
    scanf("%d",&cases);
    while(cases--)
        {
            int nums[100010],prefix[100010];
            int total=0;
            scanf("%d",&size);
            for(idx=1;idx<=size;idx++)
                {
                    prefix[idx]=total;
                    scanf("%d",&nums[idx]);
                    total+=nums[idx];
                }
            for(idx=1;idx<=size;idx++)
                {
                    if(prefix[idx]==total-prefix[idx]-nums[idx])
                        {
                            printf("YES\n");
                            goto FOUND;
                        }
                }
        printf("NO\n");
        FOUND:;
        }
    return(0);
    
}