#include<stdio.h>
#include<stdlib.h>
int partition(int list[],int left,int right){
  //The most important function!
  int pivot,temp;
  int low,high;
  low = left;
  high = right+1;
  pivot = list[left];
  do{
    do{
      low++;
    }while(list[low] < pivot);
    do{
      high--;
    }while(list[high] > pivot);
    if(low<high){
      temp = list[low];
      list[low] = list[high];
      list[high] = temp;
    }
  }while(low<high);
  temp = list[left];
  list[left] = list[high];
  list[high] = temp;
  return high;
}
void quicksort(int list[],int left,int right){
  if(left < right){
    int q = partition(list,left,right);
    quicksort(list,left,q-1);
    quicksort(list,q+1,right);
  }
}
int main(){
  int list[10]={5,2,6,7,3,9,4,1,8};
  quicksort(list,0,8);
  for(int i=0;i<9;i++){
    printf("%d ",list[i]);
  }
  return 0;
}
