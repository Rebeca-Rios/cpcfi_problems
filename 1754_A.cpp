/*
	1754A - Technical Support
	https://codeforces.com/problemset/problem/1754/A		
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		int n;	cin>>n;
		stack<char> Q;
		char aux;
		for(int i=0; i<n; i++){
			cin>>aux;
			if(aux == 'Q')
				Q.push('Q');
			else
				if(!Q.empty())
					Q.pop();
		}
		if(!Q.empty())
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
	return 0;
}