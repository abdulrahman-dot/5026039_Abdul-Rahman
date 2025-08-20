#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>


int main() {

    FILE * input = stdin;
    FILE * output = stdout;
   
    int op;
    int pos;
    char text[1000000];
    char ** history;
    int total, idx, current = 0;
    size_t length;
    fscanf(input, "%d", &total);
    history = calloc(sizeof(char *), total);
    history[current] = malloc(sizeof(char));
    strcpy(history[current], "");
    for (idx = 0; idx < total; ++idx) {
        fscanf(input, "%d", &op);
        switch(op) {
            case 1:
                fscanf(input, "%1000000s\n", text);
                ++current;
                history[current] = malloc(sizeof(char) * (strlen(history[current-1]) + strlen(text) + 1));
                strcpy(history[current], history[current-1]);
                strcat(history[current], text);
                break;
            case 2:
                fscanf(input, "%d", &pos);
                ++current;
                history[current] = malloc(sizeof(char) * (strlen(history[current - 1]) - pos + 1));
                length = strlen(history[current - 1]);
                memcpy(history[current], history[current-1], strlen(history[current - 1]) - pos);
                history[current][length - pos] = 0;
                break;
            case 3:
                fscanf(input, "%d", &pos);
                fprintf(output, "%c\n", history[current][pos-1]);
                break;
            case 4:
                --current;
                break;
        }
    }
    return 0;
}