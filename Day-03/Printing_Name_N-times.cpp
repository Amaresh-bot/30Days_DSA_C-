#include <bits/stdc++.h>
using namespace std;

void name(int i, int n){
    if (i>n)    return;
    cout<<"name"<<endl;

    name(i+1,n);

}

int main(){
    int n = 4;
    name(1,n);
    return 0;
}