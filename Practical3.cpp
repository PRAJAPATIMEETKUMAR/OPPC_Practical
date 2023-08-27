#include <iostream>

using namespace std;

int main(){

    int telePhone_call;
    float bill=200;
    cout<<"Enter your monthly telephone call:";
    cin>>telePhone_call;

    while (telePhone_call > 100){

        if(telePhone_call <= 150){
            bill += 0.60;
        }else if(telePhone_call <= 200 && telePhone_call > 150){
            bill += 0.50;
        }else if(telePhone_call > 200){
            bill += 0.40;
        }
        telePhone_call--;
    }

    cout<<"Your Telephone Bill: "<<bill<<"$";

    return 0;
}