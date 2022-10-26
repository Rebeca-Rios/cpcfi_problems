/*
	1520D - Same Differences
	https://codeforces.com/problemset/problem/1520/D
	
	3 5 1  4 6 6
	1 2 3  4 5 6
	2 3 -2 0 1 0	->	1 occ
	
	1 2 3
	1 2 3
	0 0 0	->	3 occ
	
	1 3 3 4
	1 2 3 4
	0 1 0 0		->	3 occ
	
	1 6 3 4 5 6
	1 2 3 4 5 6
	0 4 0 0 0 0		->	10 occ
	
	5 * 4 * 3 * 2 * 1
	(5-2)! 2!
	
	5 * 4 * 3 * 2 * 1
	3 * 2 * 1 * 2
	
	5 * (5-1)
	2
	
	a * a-1
	2
	
	
	9 13 11 15 13 16 16 11 15 15 16 16 16 16 15 16
	1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16
	8 11  8 11  8 10  9  3  6  5  5  4  3  2  0  0
	8 - 3	3
	11 - 2	1
	3 - 2	1
	5 - 2	1
	0 - 2	1
	Total - 7
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;	cin>>t;
	for(int i=0; i<t; i++){
		int n;	cin>>n;
		int aux;
		map <int, int> occ;
		for(int j=0; j<n; j++){
			cin>>aux;
			if(!occ[aux - j])
				occ[aux - j] = 1;
			else
				occ[aux - j]++;
		}
		
		long long ct = 0;
		map<int, int>::iterator itr;
		for (itr = occ.begin(); itr != occ.end(); ++itr){
			aux = itr -> second;
			if(aux > 1){
				long long occAux = aux / 2;
				if(aux%2 == 0)	//even
					ct += (occAux * (aux-1));
				else	//odd
					ct += (occAux * (aux-1) + (aux/2));
			}
		}
		cout<<ct<<endl;
	}
	return 0;
}