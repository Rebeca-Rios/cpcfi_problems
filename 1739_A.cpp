/*
	1739A - Immobile Knight
	https://codeforces.com/problemset/problem/1739/A

	1 2 ... m
	2
	...
	n
	
	Knight moves if at least nxm = 2x3 or 3x2	
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		int n, m;	cin>>n>>m;
		if((n <= 2)  &&  (m <= 2))
			cout<<"1 1"<<endl;
		else
			cout<<(n/2)+1<<" "<<(m/2)+1<<endl;
	}
	
	return 0;
}