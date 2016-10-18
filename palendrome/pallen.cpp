#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    cin>> n >> k;
    string num;
    cin >> num;
    int l = num.size()-1;
    for(int i=0;i<k;i++){
        for(int j=0;;j++){
            if(num[j] != num[l-j]){
                if(num[j]>num[l-j]){
                    num[l-j]=num[j];
                }
                else{
                    num[j]=num[l-j];
                }
                break;
            }
        }
    }
    for(int i=0;i<l+1;i++){
        if(num[i]!=num[l-i]){
            cout<<"-1";
            return 0;
        }
    }
    cout<<num;
    return 0;
}
