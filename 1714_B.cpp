/*
	1714B - Remove Prefix
	https://codeforces.com/problemset/problem/1714/B
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		int n;	cin>>n;
		int num[n];
		for(int j=0; j<n; j++)
			cin>>num[j];
		int p = n;
		map <int, bool> nonR;
		while(p--){
			int aux = num[p];
			if(!nonR[aux])	//does not repeat
				nonR[aux] = true;
			else	//it repeats
				break;
		}
		cout<<p+1<<endl;
	}
	
	return 0;
}