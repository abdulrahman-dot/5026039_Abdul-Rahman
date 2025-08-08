#include <stdio.h>
#include <ctype.h>

int ispangram(const char*s)
{
    unsigned int mask=0;

    for(int i=0;s[i]!='\0';i++)
    {
        if(isalpha(s[i]))
        {
            int pos=tolower(s[i])-'a';
            mask|=(1<<pos);
        }
    }
    return (mask==(1<<26)-1);
}

int main()
{
    char s[1000];
    fgets(s,sizeof(s),stdin);
    if(ispangram(s))
        printf("pangram");
    else
        printf("not pangram");
    return 0;
}