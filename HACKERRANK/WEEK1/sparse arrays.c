#include<stdio.h>
#include<string.h>
#define MAX 1000

int main(){
    int q,n;
    char string[MAX][100];
    char query[MAX][100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",string[i]);
    }
    scanf("%d",&q);
    for(int i =0;i<q;i++){
        scanf("%s",query[i]);
    }
    for(int i=0;i<q;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(strcmp(query[i],string[j])==0){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}