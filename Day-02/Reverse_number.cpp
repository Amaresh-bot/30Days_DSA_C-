#include <iostream>
using namespace std;

int main (){
    int num,rev=0,rem,org_num;

    cout<<"Enter a number: ";
    cin>>num;

    org_num = num;

    if (num == 0){
        return 0;
    }
    else{
        while(num>0){
            rem = num % 10;
            rev = (rev * 10) + rem;
            num = num / 10;
        }
        cout<<"the reversed number is "<< rev <<endl;
    }

    if(rev == org_num){
        cout<<"the number is Palindrome "<<endl;
    }
    else{
        cout<<"the number is not a Palindrome";
    }

}