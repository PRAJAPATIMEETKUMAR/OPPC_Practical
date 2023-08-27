#include <iostream>

using namespace std;

void findBetweenPrime(int a, int b){

    while (a <= b){

        int flag=0;
        for(int i=2; i<a; i++){
            if(a%i == 0){
                flag =1;
            }
        }

        if(flag==0){
            cout<<"Number "<<a<<" is a Prime Number"<<endl;
        }
        a++;
    }


}

int main(){

    int frontNum, endNum;

    cout<<"Enter your starting number and ending number:"<<endl;
    cin>>frontNum;
    cin>>endNum;

    //because of here asked between to number
    frontNum++;
    endNum--;

    findBetweenPrime(frontNum, endNum);

    return 0;
}