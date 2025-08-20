#include<stdio.h>
#include<limits.h>
int main()
{
    char st[100000];
    scanf("%s",&st);
   
    int smax=0,max=INT_MIN,smin=INT_MAX,min =INT_MAX,i,a[26]={0},c1=0,c2=0;
    for(i=0;st[i]!='\0';i++)
        a[st[i]-'a']++;
   
    for(i=0;i<26;i++)
    {
        if(a[i]!=0)
        {
            if(a[i]==max)
                  c1++;
             else if(a[i]> max)
            {
                 c1=1;
                 smax=max;
                 max=a[i];

               }
              else if (a[i]>smax && a[i]<max)
                     smax=a[i];

             if(a[i]==min)
                  c2++;
              else if(a[i]< min)
             {
                    c2=1;
                    min=a[i];
            }
        }
    }
 
    if(max == min)
        printf("YES");
    else if((max - min == 1 && c1 == 1)|| (min == 1 && c2 == 1&& smax == min))
        printf("YES");
    else
        printf("NO");
}