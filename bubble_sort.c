#include<stdio.h>
int main(){
  int list[7]={5,3,8,1,2,7},temp;
  for(int i=0;i<5;i++){ // If you repeat six times, It will show the wrong results...
    for(int j=0;j<5;j++){
      if(list[j] > list[j+1]){ // The most important part!
        temp = list[j+1];
        list[j+1] = list[j];
        list[j] = temp;
      }
    }
    for(int j=0;j<6;j++) printf("%d ",list[j]);
    printf("\n");
  }
  return 0;
}

// The numbers will be sorted from the right side.
