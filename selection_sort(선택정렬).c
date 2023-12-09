#include <stdio.h>
int main() {
  int list[8] = {98, 35, 47, 19, 84, 29, 63};
  int least, temp = 0, index;
  for (int i = 0; i < 7; i++) {
    // index = list[i];
    index = i; //save the value of an index to compare with the rest of the list
    for (int j = i + 1; j < 7; j++) {
      if (list[j] < list[index]) {
        index = j;
      }
    }
    temp = list[i]; //swapping values
    list[i] = list[index];
    list[index] = temp;
    for (int j = 0; j < 7; j++) //printint out the each process
      printf("%d ", list[j]);
    printf("\n");
  }
  return 0;
}
