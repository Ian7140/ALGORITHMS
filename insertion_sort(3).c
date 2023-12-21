#include<stdio.h>
int main(){
  int list[10] = {62,25,12,50,11,55,1,2,35,64};
  int left;
  for(int i=0;i<10;i++){
    left = list[i];
    for(int j=i-1;j>=0;j--){
      if(list[j]>left){
        list[j+1] = list[j];
        list[j] = left;
      }
    }
    for(int j=0;j<10;j++) printf("%d ",list[j]);
    printf("\n");
  }
  return 0;
}
