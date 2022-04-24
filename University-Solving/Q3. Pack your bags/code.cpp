#include<iostream>
using namespace std;
void insertionsort(int arr[],int size){
    int i,index,key;
    for(i=1;i<size;i++){
        key=arr[i];
        index=i;
        while(index>0 &&arr[index-1]<key){
            arr[index]=arr[index-1];
            index--;
        }
        arr[index]=key;
    }
}
int bagPacking(int group[],int n,int c){
    int bag[n],i,j,count=0;
    for(i=0;i<n;i++){
        bag[i]=0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(bag[j]+group[i]<=c){
                bag[j]=bag[j]+group[i];
                break;
            }
        }
    }
    for(i=0;i<n;i++){
        if(bag[i]!=0){
            count++;
        }
    }
    return count;
}
int main(){
    int n,i,bagCapacity;
    cin>>n;
    int group[n];
    for(i=0;i<n;i++){
        cin>>group[i];
    }
    cin>>bagCapacity;
    insertionsort(group,n);
    cout<<bagPacking(group,n,bagCapacity);
}
