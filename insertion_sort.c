#include<stdio.h>
int main(){
  int list[7]={88,28,91,33,65,59},key;
  for(int i=1;i<6;i++){
    key = list[i];
    for(int j=i-1;j>=0;j--){
      if(key < list[j]){ //The most important part!
        list[j+1] = list[j];
        list[j] = key;
      }
    }
    for(int j=0;j<6;j++) printf("%d ",list[j]);
    printf("\n");
  }
  return 0;
}
