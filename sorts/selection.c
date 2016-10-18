#include <stdio.h>

int main() {

  int a[100];
  int n,i,j,max,flag,swap;
  printf("Enter number of elements to swap\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++){
    max = a[i];
    flag = i;
    for(j=i+1;j<n;j++){
        if(max > a[j]){
	max = a[j];
	flag = j;
      }
    }
  swap = a[i];
  a[i] = a[flag];
  a[flag] = swap;
  }
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }  
}
