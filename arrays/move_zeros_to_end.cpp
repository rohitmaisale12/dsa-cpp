/*problem:move zeros to end 
approch:two pointers
time complexity:O(n)
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=0;//pointer for placing non zeros elements//
    for(int i=0;i<n;i++){
        //if elements is non zeros move it forward//
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    //final array//
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
