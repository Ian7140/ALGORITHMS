#include <stdio.h>
int partition(int list[],int left,int right){
  int pivot,temp,low,high;
  printf("before: ");
  for(int i=0;i<9;i++) printf("%d ",list[i]);
  printf("\n");
  low = left; // low is the left index
  high = right+1; //high is the right+1 index (as we have to include the right index)
  pivot = list[left];
  do{
    
    do{ // increment low index until we find a number greater than the pivot
      low++; 
    }while(low<=high && list[low]<pivot); 
    
    do{ // decrement high index until we find a number less than the pivot
      high--;
    }while(list[high]>pivot);
    
    if(low<high){ // swap the numbers if low is less than high
      temp = list[low];
      list[low] = list[high];
      list[high] = temp;
    }
    
  }while(low<high); // repeat the loop until low is greater than high
  
  temp = list[left];
  list[left] = list[high];
  list[high] = temp;
  printf("after : ");
  for(int i=0;i<9;i++) printf("%d ",list[i]);
  printf("\n");
  return high;
}

void quicksort(int list[], int left, int right){
  if(left<right){ 
    int q=partition(list,left,right); //q is the pivot
    quicksort(list,left,q-1); //sort the left side
    quicksort(list,q+1,right);//sort the right side
  }
}
int main(){
  int list[10]={5,3,8,4,9,1,6,2,7};
  quicksort(list,0,8);
  for(int i=0;i<9;i++) printf("%d ",list[i]);
  return 0;
}
