#include<stdio.h>
int main(){
  int list[10] = {3,1,5,7,2,8,4,6,9};
  int index,temp;
  for(int i=0;i<9;i++){
    index = i;
    for(int j=i+1;j<9;j++){
      if(list[index] > list[j]) index = j;
    }
    temp = list[i];
    list[i] = list[index];
    list[index] = temp;
    for(int j=0;j<9;j++) printf("%d ",list[j]);
    printf("\n");
  }
  return 0;
}
