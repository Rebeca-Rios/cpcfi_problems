/*
	1741B - Funny Permutation
	https://codeforces.com/problemset/problem/1741/B
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		int n;	cin>>n;
		switch(n){
			case 2:
				cout<<"2 1 "<<endl;
			break;
			case 3:
				cout<<"-1 "<<endl;
			break;
			default:
				int aux = n/2 + 1;
				for(int j=0; j<(n%2 == 0 ? aux-1 : aux); j++)
					cout<<aux + j<<" ";
				for(int j=0; j<(n/2); j++)
					cout<<j+1<<" ";
				cout<<endl;			
		}
	}
	
	return 0;
}