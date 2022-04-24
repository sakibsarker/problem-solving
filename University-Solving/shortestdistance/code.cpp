#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
       double d,f;
       cin>>d>>f;
       int mx=pow(d,2);
       int px=pow(f,2);
       double cc=sqrt(mx+px);
       cout<<fixed<<setprecision(2)<<cc<<endl;
   }
   return 0;
    
}
