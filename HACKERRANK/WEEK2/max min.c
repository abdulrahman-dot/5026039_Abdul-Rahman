#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compare2uints(const void * left, const void * right) {
    return ( *(unsigned int*)left - *(unsigned int*)right );
}

int main() {
    int size,group,start;
    unsigned int arr[100001];
    unsigned int end,minDiff;
    
    if (scanf(" %d",&size) != 1) return 1;
    if (scanf(" %d",&group) != 1) return 1;
    for (start=0; start<size; start++) if (scanf(" %d",arr+start) != 1) return 1;
    if (group==1) return 0;
    qsort(arr, size, sizeof(int), compare2uints);
    minDiff = 0x7fffffff;
    start = 0;
    end = group-1;
    while (end<size) {
        if (arr[end]-arr[start]<minDiff) minDiff=arr[end]-arr[start];
        start++;
        end++;
    }
    printf("%u\n",minDiff);
    return 0;
}