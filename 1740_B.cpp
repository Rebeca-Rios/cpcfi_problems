/*
	1740B - Jumbo Extra Cheese 2
	https://codeforces.com/problemset/problem/1740/B
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		int n;	cin>>n;
		int b, h;
		vector<int> hs;
		long long per = 0;
		hs.push_back(0);
		for(int j=0; j<n; j++){
			cin>>b>>h;
			per += (min(b,h) * 2);
			hs.push_back(max(b,h));
		}
		sort(hs.begin(),hs.end());
		for(int j=1; j<=n; j++)
			per += (hs[j] - hs[j-1]);
		per += hs[n];
		cout<<per<<endl;
	}
	
	return 0;
}