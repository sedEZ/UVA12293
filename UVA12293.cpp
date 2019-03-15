#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int input;
    cin>>input;
    while(input!=0){
        input++;
        bool is_two_pow = true;
        while(input!=1){
            if(input%2!= 0){
                is_two_pow = false;
                break;
            }
            input/=2;
        }
        if(is_two_pow)
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;
        cin>>input;
    }

}
