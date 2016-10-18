#include <iostream>
#include <vector>

using namespace std;

void merge(int a[], int start, int mid, int end){
  
  int l = mid - start +1;
  int r = end - mid;
/*
  int a1[l],a2[r];

  for(int i=0;i < l;i++)
    a1[i] = a[start + i];

  for(int i=0;i < r;i++)
    a2[i] = a[mid + 1 + i];
*/
  if( l>0 && r>0){
    for(int i=mid + 1;i <= end;i++){
      for(int j=start;j<mid;j++){
        if(a[j] > a[i]){
       	  swap(a[j],a[i]);
        }
        cout<<a[j]<<" ";
      }
      cout<<"\n";
    }
  }
  

  return;
}


void merge_sort(int a[],int start,int end){

  if(start == end){
    return;
  }

  int mid = (start + end)/2;

  merge_sort(a,start,mid);
  merge_sort(a,mid+1,end);
  merge(a,start,mid,end);

  return;
} 
int main(){
  
  int n;  
  cout <<"Enter number of numbers to sort\n";
  cin>>n;
  
  int a[n];
  for(int i=0;i < n; i++)
    cin>>a[i];
  
  merge_sort(a,0,n);
  cout << "Sorted array\n";
  for(int i=0;i < n;i++)
    cout<<a[i]<<" ";
 return 0; 
}
