#include <stdio.h>

#define MAX 200

int R, C, n;
char grid[MAX][MAX];
char map[MAX][MAX];

void printGrid() {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            putchar(grid[i][j]);
        }
        putchar('\n');
    }
}

void readGrid() {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            grid[i][j] = getchar();
            if (grid[i][j] == '\n') {
                j--;
            }
        }
    }
}

void fillGrid(char ch) {
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            grid[i][j] = ch;
}

void copyMapToGrid() {
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            grid[i][j] = map[i][j];
}

void detonate() {
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            map[i][j] = 'O';

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (grid[i][j] == 'O') {
                map[i][j] = '.';
                if (i > 0) map[i - 1][j] = '.';
                if (i < R - 1) map[i + 1][j] = '.';
                if (j > 0) map[i][j - 1] = '.';
                if (j < C - 1) map[i][j + 1] = '.';
            }
        }
    }

    copyMapToGrid();
}

int main() {
    scanf("%d %d %d\n", &R, &C, &n);

    readGrid();

    if (n == 1) {
    } else if (n % 2 == 0) {
        fillGrid('O');
    } else if ((n + 1) % 4 == 0) {
        detonate();
    } else if ((n - 1) % 4 == 0 && n != 1) {
        detonate();
        detonate();
    }

    printGrid();

    return 0;
}