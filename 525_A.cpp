/*
	525A - Vitaliy and Pie
	https://codeforces.com/problemset/problem/525/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, ct = 0;	cin>>n;
	map<char, int> keys;
	char aux;
	
	for(int i=1; i<=(2*n)-2; i++){
		cin>>aux;
		if(i%2 != 0){	//odd
			if(!keys[aux])
				keys[aux] = 1;
			else
				keys[aux]++;
		} else{		//even
			char key = (char)tolower(aux);
			if(keys[key]  &&  keys[key] >= 1)
				keys[key]--;
			else
				ct++;
		}
	}
	cout<<ct<<endl;
	
	return 0;
}