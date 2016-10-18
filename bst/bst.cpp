#include <bits/stdc++.h>

using namespace std;
class node {

  public:
    int data;
    node *left;
    node *right;


}*root = NULL;

class bst : public node{
  public:
  int insert(int a){
    cout<<"Crerating node....\n";
    node *temp;
    temp = new node;
    temp->data = a;
    temp->left = NULL;
    temp->right = NULL;

    if(root == NULL){
        cout<<"Inserted root....\n";
	root = temp;
        return 0;
    }

    node *temp1;
    temp1 = root;
     
    while(temp1!=NULL){
      if(temp->data < temp1->data){
        temp1 = temp1->left;
      }
      else{
        temp1 = temp1->right;
      }
    }
  
    if(temp1->data < temp->data){
      temp1->right = temp;
      cout<<"Inserted at right\n";
    }
    else {
      temp1->left = temp;
      cout<<"Inserted at left\n";
    }
  }
};

int main(){

  bst a;
  cout<<"BST is \n";
  for(int i =1;i<5;i++)
    a.insert(i);
  
  return 0;
}
