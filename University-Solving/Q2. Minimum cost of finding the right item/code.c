#include<stdio.h>
void sort(int arr[],int size){
    int i,key,index;
    for(i=1;i<size; i++){
    key=arr[i];
    index=i;
    while(index>0&&arr[index-1]>key){
        arr[index]=arr[index-1];
        index--;
    }
        arr[index]=key;
    }
}
int search(int arr[],int n,int key){
    int left=0, right=n-1,mid,round=0;
    while(left<=right){
        mid=(left+right)/2;
        round++;
        if(arr[mid]==key){
            return round;
        }
        else if(arr[mid]<key){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
}
int main(){
    int N,i,K;
    scanf("%d",&N);
    int items[N];
    for(i=0;i<N;i++){
        scanf("%d",&items[i]);
    }
    scanf("%d",&K);
    sort(items,N);
    printf("%d\n",search(items,N,K));
    return 0;
}
