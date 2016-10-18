#include <stdio.h>

int main() {

  int n,i,j,k;
  int flag = 3;

  printf("Enter the number of columns\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
      printf(" ");	
    }
    if(i==0){
      printf("#");
    }
    else {
      for(j=0;j<flag;j++){
        printf("#");
      }
      flag = flag + 2;
    }
    printf("\n");
  }
}
