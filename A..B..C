#include<iostream>
using namespace std;
#include<map>
#include<bits/stdc++.h>
int main(){
    string s; cin>>s;



    int ans = 0;
   for ( int i =0; i<s.size(); i++){

         if( s[i]=='A'){
              for( int j = i+1; j<s.size(); j++){
                if( s[j]=='B'){
                    int  k = 2*j - i;
                     if( k >=0 && k< s.size() && s[k]=='C')
                                                         ans++;
                }
              }
         }
   }
   cout<<ans;
}
