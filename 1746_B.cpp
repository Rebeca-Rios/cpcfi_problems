/*
	1746B - Rebellion
	https://codeforces.com/problemset/problem/1746/B
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		int n;	cin>>n;
		int a[n];
		for(int j=0; j<n; j++)
			cin>>a[j];
		
		int l = 0, r = n, ct = 0;
		while(l < r){
			if(a[r] == 0){
				if(a[l] == 1){
					ct++;
					l++;
				} else{
					l++;
					continue;
				}
			}
			r--;
		}
		cout<<ct<<endl;
	}
	return 0;
}