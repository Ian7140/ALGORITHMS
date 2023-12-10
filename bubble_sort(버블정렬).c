#include <stdio.h>
int main() {
  int list[8] = {98,35,47,19,84,29,63};
  int temp;
  for(int i=1;i<7;i++){ //'i' should start from 1
    for(int j=0;j<7-i;j++){
      if(list[j]>list[j+1]){ // if the current element is greater than the next element
        temp = list[j+1]; //swap the value
        list[j+1] = list[j];
        list[j] = temp;
      }
    }
    for(int j=0;j<7;j++) printf("%d ",list[j]); //print out each process
    printf("\n");
  }
  return 0;
}
