#include <iostream>

using namespace std;

inline int largestOfThree(int a, int b, int c){

    if(a > b){
        if(a > c){
            return a;
        } else{
            return c;
        }
    } else{
        if(b > c){
            return b;
        } else{
            return c;
        }
    }
}

int main()
{
    int a, b, c;

    cout<<"Enter your three number:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;

    cout<<"Your Largest number is "<<largestOfThree(a, b, c);

    return 0;
}
