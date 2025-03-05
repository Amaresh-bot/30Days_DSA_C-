#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    int mim;
    for (int i = 0; i <=n-2; i++ ){
        mim = i;
        for(int j = i+1; j <=n-1; j++ ){
            if (arr[mim] > arr[j]){

                mim = j;
            }
            
        }
        //swaping of mim and i..
        //int temp;
        //temp = arr[mim];
        //arr[mim] = arr[i];
        //arr[i] = temp;

        swap(arr[i],arr[mim]);
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}