#include<stdio.h>
int main(){
  int list[10] = {34,52,63,74,12,77,83,90,11,22};
  int temp;
  for(int i=0;i<10;i++){
    for(int j=i+1;j<10;j++){
      if(list[i] > list[j]){
        temp = list[i];
        list[i] = list[j];
        list[j] = temp;
      }
    }
    for(int j=0;j<10;j++) printf("%d ",list[j]);
    printf("\n");
  }
  return 0;
}
