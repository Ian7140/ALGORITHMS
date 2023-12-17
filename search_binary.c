#include<stdio.h>
int main(){
  int list[17] = {2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47};
  int low=0,middle,high=15,key;
  scanf("%d",&key);
  while(low<=high){
    middle = (low+high)/2; //The most important part!
    if(key==list[middle]){
      printf("index = %d",middle);
      break;
    }
    else if(key <list[middle]){
      high = middle-1;
    }
    else{
      low = middle+1;
    }
  }
  return 0;
}
