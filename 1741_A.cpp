/*
	1741A - Compare T-Shirt Sizes
	https://codeforces.com/problemset/problem/1741/A

	L .... M .... S
	S < M < L
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		string T1, T2;
		cin>>T1>>T2;
		if(T1 == T2)
			cout<<"="<<endl;
		else{
			int sT1 = T1.size();
			int sT2 = T2.size();
			
			if((T1[sT1-1] == T2[sT2-1])  &&  (T1[sT1-1] == 'S')){
				if(sT1 > sT2)
					cout<<"<"<<endl;
				else
					cout<<">"<<endl;
			}
			else if((T1[sT1-1] == T2[sT2-1])  &&  (T1[sT1-1] == 'L')){
				if(sT1 > sT2)
					cout<<">"<<endl;
				else
					cout<<"<"<<endl;
			}
			else if(T1[sT1-1] > T2[sT2-1])
				cout<<"<"<<endl;
			else
				cout<<">"<<endl;
		}
	}
	
	return 0;
}