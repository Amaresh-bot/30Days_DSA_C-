#include <bits/stdc++.h>
using namespace std;

void func(int i,int sum){
    if (1>i){
        cout<<sum;
        return;
    }    
    
    func(i-1,sum+i);

}

int main(){
    int i = 5;
    func(i,0);
    return 0;
}