/*
	1742B - Increasing
	https://codeforces.com/problemset/problem/1742/B
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		int n, aux;	cin>>n;
		map<int, bool> nums;
		bool ck = true;
		
		for(int j=0; j<n; j++){
			cin>>aux;
			if(nums[aux])
				ck = false;
			else
				nums[aux] = true;
		}
		if(!ck)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	
	return 0;
}