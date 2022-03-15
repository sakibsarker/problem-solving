#include<iostream>
using namespace std;
int mr(int arr[],int n)
{
    if(n%2==0)
    return arr[n/2];
    else 
    return arr[((n+1)/2)-1];
}
void sort(int arr[],int n)
{
    int key,j;
    for(int i=1; i<n; i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 &&arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,n);
    bool spc=false;
    for(int i=0; i<n; i++)
    {
        if(spc)
        cout<<" ";
        cout<<arr[i];
        spc=true;
    }
    cout<<endl<<mr(arr,n)<<endl;
    return 0;
}
