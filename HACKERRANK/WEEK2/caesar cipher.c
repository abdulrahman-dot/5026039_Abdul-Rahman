#include <stdio.h>
#include <string.h>

void caesarCipher(char text[], int shift)
 {
    int length = strlen(text);
    shift %= 26;

    for (int i = 0; i < length; i++)
     {
        if (text[i] >= 'A' && text[i] <= 'Z')
         {
            text[i] = 'A' + (text[i] - 'A' + shift) % 26;
        } 
        else if (text[i] >= 'a' && text[i] <= 'z') 
        {
            text[i] = 'a' + (text[i] - 'a' + shift) % 26;
        }
    }
}
int main() {
    int length, shift;
    char text[1001];

    scanf("%d", &length);
    scanf("%s", text);
    scanf("%d", &shift);

    caesarCipher(text, shift);

    printf("%s\n", text);

    return 0;
}