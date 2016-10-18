#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
}*root;

class linked{
public:
    linked(){
        root = NULL;
    }
    int insert_end(int info){
            node *temp;
            temp = new node;
            temp->data = info;
            temp->next = NULL;
            if(root == NULL){
                root = temp;
                return 0;
            }
            else{
                node *temp1;
                temp1 = root;
                while(temp1->next!=NULL){
                    temp1 = temp1->next;
                }

                cout<<"Inserting element at end "<<temp1->data<<endl;
                temp1->next = temp;
            }
    }

    int printf_list(){
        node *temp;
        temp = root;
        while(temp->next!=NULL){
            cout<<temp->data<<" "<<endl;
            temp = temp->next;
        }
        return 0;
    }

    int reverse_list(){
	
	node* previous = NULL;	
        node* current = root;
	node* next = NULL;
        while( current == NULL){
            next = current->next;
	    current->next = previous;
	    previous = current;
	    current = next;
	}
       root = previous;
    }
};

int main(){
    linked a;
    cout<<"Linked list"<<endl;
    for(int i=0;i<6;i++){
        a.insert_end(i);
    }
    a.printf_list();
    a.reverse_list();
    cout<<"\nReversed linked list\n";
    a.printf_list();
    return 0;
}
