#include<iostream>
using namespace std;
string match(string em[],int n,string name)
{
    for(int i=0; i<n; i++){
    if(name==em[i])
    return "Matched";
}
return "Not Matched";
}
int main(){
    int n;
    cin>>n;
    string em[n];
    for(int i=0; i<n; i++)
    {
        cin >>em[i];
    }
    string name;
    cin>>name;
    cout<<match(em,n,name)<<endl;
    return 0;
}
