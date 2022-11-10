/*
    1747A - Two Groups
    https://codeforces.com/problemset/problem/1747/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin>>t;
    for(int i=0; i<t; i++){
        int n;  cin>>n;
        int aux;
        long long r = 0;
        for(int j=0; j<n; j++){
            cin>>aux;
            r += aux;
        }
        cout<<abs(r)<<endl;
    }
    return 0;
}
