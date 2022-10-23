/*
	1742C - Stripes
	https://codeforces.com/problemset/problem/1742/C
	
	1 2 ... 8
	2
	...
	8
	[rows][columns]
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		char aux, color = 'B';
		int ct;		
		for(int r=0; r<8; r++){
			ct = 0;
			for(int c=0; c<8; c++){
				cin>>aux;
				if(aux == 'R')
					ct++;
			}
			if(ct == 8){
				color = 'R';
			}
		}		
		cout<<color<<endl;
	}
	return 0;
}