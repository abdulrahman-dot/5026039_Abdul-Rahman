#include <stdio.h>

int main() {

    
    int size,queries,idx,prime_idx=0,temp=0,loop,count=0;
    scanf("%d",&size);
    scanf("%d",&queries);
    int *nums,*primes;
    nums=(int *)malloc(sizeof(int)*size);
    primes=(int *)malloc(sizeof(int)*queries);
    for(idx=0;idx<size;idx++)
        scanf("%d",&nums[idx]);
    for(idx=2;idx<=10000;idx++)
        {
        if(prime_idx!=queries){
        for(loop=idx;loop>=1;loop--)
            {
            if(idx%loop==0)
                count++;
        }
        if(count==2)
            {
            primes[prime_idx]=idx;
          
            prime_idx++;
        }
            count=0;
        }
        else
            break;
    }
   for(idx=0;idx<queries;idx++)
        {
            if(idx%2==0)
            {
        for(loop=0;loop<size;loop++)
            {
            if((nums[loop]%primes[idx])==0&&nums[loop]!=-1)
                {
                    printf("%d\n",nums[loop]);
                    nums[loop]=-1;
                }
                }
            }
            else{
                    for(loop=size-1;loop>=0;loop--)
            {
            if((nums[loop]%primes[idx])==0&&nums[loop]!=-1)
                {
                    printf("%d\n",nums[loop]);
                    nums[loop]=-1;
                }
                }
                
            }
        }
        if(idx%2!=0)
        {
        for(idx=0;idx<size;idx++)
            {
            if(nums[idx]!=-1)
                printf("%d\n",nums[idx]);
        }
        }
        else{
                for(idx=size-1;idx>=0;idx--)
            {
            if(nums[idx]!=-1)
                printf("%d\n",nums[idx]);
        }
            
        }

        
    return 0;
}