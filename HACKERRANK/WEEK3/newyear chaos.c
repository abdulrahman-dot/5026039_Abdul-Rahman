#include <stdio.h>

void minimumBribes(int queue[], int size) 
{
    int totalBribes = 0;

    for (int currentPosition = 0; currentPosition < size; currentPosition++)
     {
        int personNumber = queue[currentPosition];

        if (personNumber - (currentPosition + 1) > 2)
         {
            printf("Too chaotic\n");
            return;
        }

        int startCheck = personNumber - 2;
        if (startCheck < 0) 
        {
            startCheck = 0;
        }

        for (int i = startCheck; i < currentPosition; i++)
         {
            if (queue[i] > personNumber) {
                totalBribes++;
            }
        }
    }

    printf("%d\n", totalBribes);
}

int main() 
{
    int testCases;
    scanf("%d", &testCases);

    for (int t = 0; t < testCases; t++)
     {
        int length;
        scanf("%d", &length);

        int queue[length];
        for (int i = 0; i < length; i++)
         {
            scanf("%d", &queue[i]);
        }

        minimumBribes(queue, length);
    }

    return 0;
}