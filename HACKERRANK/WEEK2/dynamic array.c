#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct List_ {
  int *data;
  int len;
} List;

List lists[100001];

void insert(int idx, int val) {
  lists[idx].data = realloc(lists[idx].data, lists[idx].len += 1);
  lists[idx].data[lists[idx].len-1] = val;
}

int print(int idx, int pos) {
  int ans = lists[idx].data[pos % lists[idx].len];
  printf("%d\n", ans);
  return ans;
}

int main() {
  FILE *file = stdin;

  int total, count;
  fscanf(file, "%d %d", &total, &count);
  int last = 0;
  for (int loop = 0; loop < count; loop++) {
    int cmd, first, second;
    fscanf(file, "%d %d %d", &cmd, &first, &second);
    int target = (first ^ last) % total;
    if (cmd == 1)
      insert(target, second);
    else // cmd == 2
      last = print(target, second);
  }

  return 0;
}