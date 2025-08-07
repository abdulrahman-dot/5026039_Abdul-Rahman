#include <stdio.h>

int main() {
    int arr[100], elements, targetSum, length;
    int i, j, currentSum, count = 0;

    scanf("%d", &elements);

    for (i = 0; i < elements; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d%d", &targetSum, &length);

    for (i = 0; i <= elements - length; i++) {
        currentSum = 0;

        for (j = 0; j < length; j++) {
            currentSum += arr[i + j];
        }
        if (currentSum == targetSum) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
