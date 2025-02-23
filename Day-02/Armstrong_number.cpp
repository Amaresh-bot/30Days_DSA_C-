#include <iostream>
#include <cmath>

using namespace std;

bool find_Armstrong(int num){
    int rem,arm = 0;
    int count = 0,temp=num;

   
    const int org_num = num;

    //for counting digits..
    while(temp>0){
        temp/=10;
        count++;
    }

    //for calulating sum of powers of digits..
    while(num>0){
        rem = num % 10;
        int power = static_cast<int>(pow(rem,count));
        arm += power;
        num /= 10;
    }

    return (org_num == arm);
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(find_Armstrong(num)){
        cout<< num <<" is an armstrong number."<< endl;
    }
    else{
        cout<<num<<" is not an armstrong number."<< endl;
    }
    return 0;

    
}