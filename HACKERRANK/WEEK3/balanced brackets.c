#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int match(char open,char close)
    {
    if(open=='['&& close==']')
        return 1;
    if(open=='{'&& close=='}')
        return 1;
    if(open=='('&& close==')')
        return 1;
    return 0;
}
int validate(char *str)
    {
    char brackets[1001],head=-1;
        for(int idx=0;idx<strlen(str);idx++)
            {
         if(str[idx]=='['||str[idx]=='{'||str[idx]=='(')
              brackets[++head]=str[idx]; 
           if(str[idx]==']'||str[idx]=='}'||str[idx]==')')
               {
               if(head==-1)
                   {
               return 0;
               }
               else
                   {
                   if(!match(brackets[head--],str[idx]))
                       {
               return 0;
               }
           }
        } 
}
    if(head!=-1)
                {
               return 0;
            }
    return 1;
}
int main() {
char str[1001];
    int count,result;
    scanf("%d",&count);
     for(int loop=0;loop<count;loop++)
        {
     scanf("%s",str);
         result = validate(str);
         if(result==1)
             printf("YES\n");
    else
        printf("NO\n");
     }
    return 0;
}