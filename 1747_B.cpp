    /*
        1737B - BAN BAN
        https://codeforces.com/problemset/problem/1747/B
        
        BAN -> [1] 1-2
        BANBAN -> [1] 1-6
        BANBANBAN -> [2] 1-9 4-6
        BANBANBANBAN -> [2] 1-12 4-9
        BANBANBANBANBAN -> [3] 1-15 4-12 7-9
        
        5/2 = 2
        
        BAN BAN BAN BAN BAN
         0   1   2   3   4 
        123 456 789 012 345
        
        3*0+1 - (5-0)*3     1 - 15
        3*1+1 - (5-1)*3     4 - 12
        2*3+1 -  2*3 +3     7 - 9
    */
     
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        int t;  cin>>t;
        for(int i=0; i<t; i++){
            int n;  cin>>n;
            int aux = n/2;
            
            bool odd = false;
            if(n%2 != 0){   //odd
                cout<<aux + 1<<endl;
                odd = true;
                //n--;
            } else
                cout<<aux<<endl;
            
            for(int j=0; j<aux; j++){
                int iz = 3*j + 1;
                int de = (n-j) * 3;
                cout<<iz<<" "<<de<<endl;
            }
            if(odd)    //odd
                cout<<aux*3 + 1<<" "<<aux*3 + 3<<endl;
        }
        return 0;
    }
