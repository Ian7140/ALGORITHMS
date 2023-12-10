#include <stdio.h>
int list[17] = {2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47};
int  search_binary(int low,int high,int key){
  int middle;
  while(low<=high){
    middle = (low+high) / 2; //get the value of middle index
    if(list[middle] == key) return middle; //if founded
    else if(list[middle] > key) return search_binary(low,middle-1,key); //if key is smaller than the middle value (search left part)
    else return search_binary(middle+1,high,key); //if key is larger than the middle value (search right part)
  }
  return -1; //if not founded
}
int main() {
  int low=0,high=15,n;
  scanf("%d",&n); //get the key
  printf("found number's index : %d",search_binary(low,high,n)); //print out the index number
  return 0;
}
