#include <stdio.h>
//BASIC ARRAY 
/*
int main(void) {
  int i=0,n;
  printf("Enter the length of the array : ");
  scanf("%d",&n);
  int a[n];
  //printf("Enter the array elements:");
  for (i=0;i<n;i++){ //3=0,1,2
    printf("Enter: ");
    scanf("%d",&a[i]);
  }
  printf("This is the 1-D array given:");
  for (i=0;i<n;i++){
    printf("%d ",a[i]);
  }
}
*/


//-------------------------------------------------


//LINEAR SEARCH ON 1-D ARRAY:
int main(void){
  int i=0,n;
  printf("Enter the length of the array : ");
  scanf("%d",&n);
  int a[n];
  printf("Enter the array elements:");
  for (i=0;i<n;i++){ //3=0,1,2
    //printf("Enter: ");
    scanf("%d",&a[i]);
  }
  int j,t;
  int number,pos;
  printf("Enter the number to search in the array: ");
  scanf("%d",&t);
  for (j=0;j<n;j++){
    if (t==a[j]){
      number=t;
      pos=j;
    }
  }
  if (number==t)
    printf("The number %d is found at this index %d in the array",number,pos);
  else
    printf("The number %d is not found ",t);
}