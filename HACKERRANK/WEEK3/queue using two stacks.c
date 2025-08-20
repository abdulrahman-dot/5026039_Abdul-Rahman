#include<stdio.h>
#define size 100000
int main(){
    int loop,idx,temp,value,queries,tail=-1,head=-1,operation;
    int data[size];
    scanf("%d",&queries);
    for(loop=0;loop<queries;loop++){
        scanf("%d",&operation);
        switch(operation){
            case 1: scanf("%d",&value);
                    if(tail==size-1)
                        break;
                    else if(tail==-1 && head==-1)
                    {
                        tail=head=0;
                    }
                    else{
                        tail++;
                    }
                    data[tail]=value;
                    break;
            case 2: if(head==-1 || head>tail)
                        break;
                    else{
                        head++;
                    }
                    break;
            case 3: if(head==-1 || head>tail)
                        break;
                    else{
                        printf("%d\n",data[head]);
                    }
        }
    }
}