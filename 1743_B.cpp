/*
	1743B - Permutation Value
	https://codeforces.com/problemset/problem/1743/B
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		int n;	cin>>n;
		cout<<"1 ";
		for(int j=0; j<(n-2); j++)
			cout<<j+3<<" ";
		cout<<2<<endl;
	}
	
	return 0;
}