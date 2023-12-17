#include<stdio.h>
int main(){
  int temp,index;
  int list[7]={5,3,8,1,2,7};
  for(int i=0;i<6;i++){
    index = i;
    for(int j=i+1;j<6;j++){
      if(list[j] < list[index]){ //the most important part!
        index = j; 
        //don't have to use many variables!
        //just a variable for saving index of the lowest number
      }
    }
    temp = list[i];
    list[i] = list[index];
    list[index] = temp;
    for(int j=0;j<6;j++) printf("%d ",list[j]);
    printf("\n");
  }
  return 0;
}
