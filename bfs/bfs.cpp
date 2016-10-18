#include <bits/stdc++.h>
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
		visited[i] = 0;

	queue <int> q;
	q.push(0);
	visited[0]=1;
	int top;
	while(!q.empty()){
		top=q.front();
		for(int i=0;i<v[top].size();i++){
			if(visited[v[top][i]]==0){
				q.push(v[top][i]);
				visited[v[top][i]]=1;
			}
		}
		cout<<q.front()<<endl;
		q.pop();	
	}
	
}
