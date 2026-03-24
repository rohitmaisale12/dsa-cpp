/*problem:print numbers having exactly 3 divisors
approch:prime squares
time complexity:O(n*sqrt(n)) */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i*i<=n;i++){//iterate till sqrt(n)
        bool isprime=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
        if(isprime){
            cout<<i*i<<" ";
        }
    }
    return 0;
}
