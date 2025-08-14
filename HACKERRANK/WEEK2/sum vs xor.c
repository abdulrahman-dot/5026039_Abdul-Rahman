#include <stdio.h>

int main(){
    long long int num,result=1;
    scanf("%lld",&num);
    while(num>0){
        if(num%2==0)result*=2;
        num/=2;
    }
    printf("%lld\n",result);
    return 0;
}