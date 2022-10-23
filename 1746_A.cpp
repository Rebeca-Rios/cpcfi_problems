/*
	1746A - Maxmina
	https://codeforces.com/problemset/problem/1746/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		int n, k;	cin>>n>>k;
		int aux, one = 0;
		for(int j=0; j<n; j++){
			cin>>aux;
			if(aux == 1)	one++;
		}
		if(one > 0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	
	return 0;
}