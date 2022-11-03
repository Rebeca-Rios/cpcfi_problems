/*
	1749A - Cowardly Rooks
	https://codeforces.com/problemset/problem/1749/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		int size, rooks;	cin>>size>>rooks;
		int row, column;
		for(int j=0; j<rooks; j++)
			cin>>row>>column;
		if(rooks < size)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	
	return 0;
}