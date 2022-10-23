/*
	1754B - Kevin and Permutation
	https://codeforces.com/problemset/problem/1754/B		
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		int n;	cin>>n;
		int half1;	half1 = 1;
		int half2;	half2 = (n/2) + 1;
		while(half2 <= n){
			cout<<half2<<" ";
			if(half1 <= (n/2))
				cout<<half1<<" ";
			half1++;
			half2++;
		}
		cout<<endl;
	}
	return 0;
}