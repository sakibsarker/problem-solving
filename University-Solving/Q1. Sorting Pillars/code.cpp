#include<bits/stdc++.h>
using namespace std;
int k=0;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int *p,int left,int right){
    int pivot=p[left];
    k++;
    while(left!=right){
        if(pivot==p[left])
        {
            if(p[right]>pivot){
                right--;
            }
            else if(p[right]<=pivot){
                swap(&p[left],&p[right]);
                pivot=p[right];
                left++;
            }
        }
        else if(pivot==p[right]){
            if(p[left]<pivot){
                left++;
            }
            else if(p[left]>=pivot){
                swap(&p[left],&p[right]);
                pivot=p[left];
                right--;
            }
        }
    }
    return left;
}
void quickSort(int *p,int left,int right){
    if(left<right){
        int pivot=partition(p,left,right);
        quickSort(p,left,pivot-1);
        quickSort(p,pivot+1,right);
    }
}
int main(){
    int n;
    cin>>n;
    int *p=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    quickSort(p,0,n-1);
    cout<<k<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    delete[]p;
}
