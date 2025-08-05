#include <stdio.h>

int main() {
    int hour;
    char time[11]; 
    char result[9]; 
    scanf("%s", time);
    int hour1 = time[0] - '0'; 
    int hour2 = time[1] - '0'; 
    hour = hour1 * 10 + hour2;
    int is_pm = (time[8] == 'P');
    if (is_pm) {
        if (hour != 12) {
            hour += 12;
        }
    } else {
        if (hour == 12) {
            hour = 0;
        }
    }
    result[0] = (hour / 10) + '0';
    result[1] = (hour % 10) + '0';
    result[2] = ':';
    result[3] = time[3];
    result[4] = time[4];
    result[5] = ':';
    result[6] = time[6];
    result[7] = time[7];
    result[8] = '\0'; 

    printf("%s\n", result);

    return 0;
}