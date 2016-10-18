#include <stdio.h>

int main() {

  int a[100];
  int n,i,j,k,flag = -1,safe;

  printf("Enter the number of numbers to sort\n");
  scanf("%d",&n);

  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  
  for(i=1;i<n;i++){
    if(a[i] < a[i-1]){
      k = i;
      for(j=0;j < i;j++){
        if(a[j] > a[i]){
	  flag = j;
	  safe = a[i];
	}
	if(flag != -1){
	  a[k] = a[k-1];
	  k--;
	}
      }
      a[flag] = safe;   
    }
  }
  
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
