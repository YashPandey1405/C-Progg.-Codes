#include<stdio.h>

int linear(int arr[],int n,int key){ //Time Complexity Of This Code Is O(n).....
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int binary(int arr[],int n,int key){ //Time Complexity Of This Code Is O(logn).....
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key=7;
    printf("THE INDEX OF %d IN THE ARRAY VIA LINEAR SEARCH IS ::: %d\n",key,linear(arr,10,key));
    printf("THE INDEX OF %d IN THE ARRAY VIA BINARY SEARCH IS ::: %d\n",key,binary(arr,10,key));
}