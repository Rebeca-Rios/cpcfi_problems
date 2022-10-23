/*
	1742A - Sum
	https://codeforces.com/problemset/problem/1742/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		vector<int> nums(3);
		cin>>nums[0];
		cin>>nums[1];
		cin>>nums[2];
		
		sort(nums.begin(), nums.end());
		if(nums[0]+nums[1] == nums[2])
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	
	return 0;
}