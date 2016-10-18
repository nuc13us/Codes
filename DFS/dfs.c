#include <stdio.h>

void DFS(int);

int n;
int a[20][20];
int visited[20];

int main() {

  int i,j;

  printf("Enter the number of nodes\n");
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
  }

  for(i=0;i<n;i++)
    visited[i]=0;
 DFS(0);
}

void DFS(int l){

  visited[l] = 1;
  printf("Visited node %d\n",l);
  int j;
  for(j=0;j<n;j++){
    if(!visited[j] && a[l][j] == 1)
      DFS(j);
  }
}
