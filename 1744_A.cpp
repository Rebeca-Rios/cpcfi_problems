/*
	1744A - Number Replacement
	https://codeforces.com/problemset/problem/1744/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		int n;	cin>>n;
		int a[n], num[n];
		for(int j=0; j<n; j++){
			cin>>a[j];
			num[j] = 1;
		}
		char s[n];
		for(int j=0; j<n; j++){
			cin>>s[j];
		}
		bool ck;
		for(int j=0; j<n; j++){
			ck = true;
			if(num[j] != 0){
				for(int k=j+1; k<n; k++){
					if(a[j] == a[k]){
						if(s[j] != s[k]){
							ck = false;
							break;
						}
					}
				}
			}
			
			if(!ck)
				break;
			num[j] = 0;
		}
		if(ck)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	
	return 0;
}