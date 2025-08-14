#include<stdio.h>
#include<math.h>
int main(){
    int cases;
    scanf("%d",&cases);
    int idx,trails;
    long long unsigned int num;
    for(idx=0;idx<cases;idx++){
        scanf("%llu",&num);
        int ones = 0;
        long long unsigned int copy=num;
        while (copy != 0){
            ones++;
            copy &= copy - 1;
        }
        ones=ones-1;
        int zeros=0;
        long long unsigned int mask=1;
        while(!(num&mask)){
            zeros++;
            mask=pow(2,zeros);
        }
        if((ones+zeros)%2==0){
            printf("Richard\n");
        }
        else{
            printf("Louise\n");
        }
    }
    return 0;
}