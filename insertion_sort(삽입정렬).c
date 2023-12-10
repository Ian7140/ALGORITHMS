#include <stdio.h>
int main() {
  int list[7] = {5,3,8,1,2,7};
  int key;
  for(int i=1;i<6;i++){
    key = list[i]; //save the value of the key
    for(int j=i-1;j>=0;j--){
      if(key < list[j]){ //if the key is smaller than the value before it
        list[j+1] = list[j]; //move the value to the right
        list[j] = key; //and fill the key value in the left
      }
    }
    for(int j=0;j<6;j++) printf("%d ",list[j]); //print out each process
    printf("\n");
  }
  return 0;
}
