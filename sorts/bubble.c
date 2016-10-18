#include <stdio.h>

int main() {
	
  int a[100];
  int n,i,j,swap;
  printf("Enter how many numbers to sort\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
 
//  for(i=0;i<n;i++){
//    printf("%d\n",a[i]);
//  }
  for(i=0;i<n-1;i++){
    for(j=i;j<n;j++){
      if(a[j]>a[j+1]){
	swap = a[j];
	a[j] = a[j+1];
       	a[j+1] = swap;
      }
    } 
  }
  printf("Sorted array\n");
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }
}
