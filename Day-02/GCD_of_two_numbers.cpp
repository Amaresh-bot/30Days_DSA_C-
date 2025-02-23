#include <iostream>
#include <algorithm>
using namespace std;

int find_gcd(int n1,int n2){
    int gcd = 1;

    for (int i = 1; i<= min(n1,n2); i++){
        if (n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    return gcd;
}

int main (){
    int n1,n2;
    
    cout<<"enter two numbers: ";
    cin>>n1>>n2; 
    

    cout<<"the gcd of" << n1 <<" and " << n2 << " is " << find_gcd(n1,n2);

}