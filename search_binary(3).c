#include<stdio.h>
int main(){
  int low = 0, high = 9, middle,key;
  int list[10]={12,24,36,48,60,72,84,96,108,120};
  scanf("%d",&key);
  while(low <= high){
    middle = (low+high)/2;
    if(list[middle] == key){
      printf("index : %d",middle);
      break;
    }
    else if(list[middle] > key){
      high = middle-1;
    }
    else if(list[middle] < key){
      low = middle+1;
    }
    if(low > high){
      printf("can't find");
      break;
    }
  }
  return 0;
}
