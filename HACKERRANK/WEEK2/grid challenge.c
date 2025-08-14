#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef long long ll;
int main() {
    char grid[105][105];
    ll tests,size,row,col,flag,freq[26],idx;
    ll sorted[105][105];
    scanf("%lld",&tests);
    while(tests--)
        {
        scanf("%lld",&size);
        for(row=0;row<size;row++)
            {
            scanf("%s",grid[row]);
        }
        for(row=0;row<size;row++)
            {
            memset(freq,0,sizeof(freq));
            for(col=0;col<size;col++)
                {
                freq[grid[row][col]-'a']++;;
            }
            col=0;
            for(idx=0;idx<26;idx++)
                {
                while(freq[idx]>0)
                    {
                    sorted[row][col]=idx;
                    col++;
                    freq[idx]--;
                }
            }
        }
        flag=0;
        for(col=0;col<size&&flag==0;col++)
            {
            for(row=0;(row+1)<size&&flag==0;row++)
                {
                if(sorted[row][col]>sorted[row+1][col])
                    {
                    flag=1;
                }
            }
        }
        if(flag==0)
            {
            printf("YES\n");
        }
        else
            {
            printf("NO\n");
        }
    }
    return 0;
}