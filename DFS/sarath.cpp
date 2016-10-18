#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,e;
	cin>>n>>e;
	vector <int> v[n];
	int src,dest;
	for(int i=0;i<e;i++){
		cin>>src>>dest;
		v[src].push_back(dest);
		v[dest].push_back(src);
	}
	int visited[n];
	for(int i=0;i<n;i++)
		visited[i]=0;

	stack <int> s;
	s.push(0);
	visited[0]=1;
	while(!s.empty()){
		int top = s.top();
		for(int i=0;i < v[top].size();i++){
			if(visited[v[top][i]]==0){
				s.push(v[top][i]);
				visited[v[top][i]]=1;
				break;
			}
		}

		if(s.top()==top){
			cout<<s.top()<<endl;
			s.pop();
		}
	}
}
		
