/*
	1744B - Even-Odd Increments
	https://codeforces.com/problemset/problem/1744/B
*/

// even - 2 4 6
// odd  - 1 3 5

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		int n, q;	cin>>n>>q;
		int odd = 0, even = 0, aux;
		long long sum = 0;
		for(int j=0; j<n; j++){
			cin>>aux;
			if(aux%2 == 0)
				even++;
			else
				odd++;
			sum += aux;
		}
		int type;
		for(int j=0; j<q; j++){
			cin>>type>>aux;
			if(type == 0){ //even
				sum += (even*aux);
				if(aux%2 != 0){ //aux = odd
					odd += even;
					even = 0;
				}
			}
			else{ //odd
				sum += (odd*aux);
				if(aux%2 != 0){ //aux = odd
					even += odd;
					odd = 0;
				}
			}
			
			cout<<sum<<endl;
		}
	}
	
	return 0;
}