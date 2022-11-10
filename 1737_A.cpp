    /*
        1737A - Ela Sorting Books
        https://codeforces.com/problemset/problem/1737/A
    */
     
    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
        int t;  cin>>t;
        for(int i=0; i<t; i++){
            int books, sets;
            cin>>books>>sets;
            
            map<char,int> alph;
            char aux;
            for(int j=0; j<books; j++){
                cin>>aux;
                if(!alph[aux])
                    alph[aux] = 1;
                else
                    alph[aux]++;
            }
            
            for(int j=0; j<sets; j++){
                int x = books/sets;
                char aw;
                for(char k='a'; k<='z'; k++){
                    if(x == 0){
                        aw = k;
                        break;
                    }
                    if(alph[k]  &&  alph[k] > 0){
                        alph[k]--;
                        x--;
                    } else if(!alph[k]  ||  alph[k] == 0){
                        aw = k;
                        break;
                    }
                    
                }
                cout<<aw;
            }
            cout<<endl;
        }
        return 0;
    }
