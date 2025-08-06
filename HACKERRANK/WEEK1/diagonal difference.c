#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int sum(int n,int mat[MAX][MAX]){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum += mat[i][j];
            }
        }
    }
    return sum;
}

int sum1(int n,int mat[][MAX]){
    int sum1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)==n-1){
                sum1 += mat[i][j];
            }
        }
    }
    return sum1;
}


int main(){
    int n;
    scanf("%d",&n);
    int mat[MAX][MAX];
    
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    
    int diff = abs(sum(n, mat) - sum1(n,mat));
    printf("%d",diff);
}