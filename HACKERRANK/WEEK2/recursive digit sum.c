#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long sum=0,temp;
    int times;
    int digit;
    do{
        digit=getchar();
        if(digit != ' ')
            sum += digit -'0'; 
    }while(digit != ' ');
    scanf("%d",&times);
    sum *= times;
    
    while(sum > 10){
        temp=0;
        while(sum > 0){
            temp+= sum %10;
            sum = sum /10;
        }
        sum =temp;
    }
    printf("%lld\n",sum);

    return 0;
}