#include<iostream>
using namespace std;
void locate(int seats[],int n,int x,int y)
{
    if(x>y)
    {
        x+=y;
        y=x-y;
        x-=y;
    }
    bool spc=false;
    while(x<=y)
    {
        if(spc)
        cout<<" ";
        if(seats[x]%4==0)
        {
            cout<<seats[x];
            spc=true;
        }
        x++;
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y; int seats[n];
    for(int i=0; i<n; i++)
    {
        cin>>seats[i];
    }
    locate(seats,n,x,y);
    return 0;
}
