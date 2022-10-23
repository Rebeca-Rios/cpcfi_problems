/*
	1743A - Password
	https://codeforces.com/problemset/problem/1743/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		int n, aux;	cin>>n;
		for(int j=0; j<n; j++)
			cin>>aux;
		aux = 10 - n;
		int tot = 0;
		for(int j=0; j<aux; j++)
			tot += j;
		cout<<tot*6<<endl;
	}
	return 0;
}