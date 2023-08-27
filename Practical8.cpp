#include <iostream>
using namespace std;

int findPow(int n, int m){
    int result = 1;
    for(int i=0; i<n; i++){
        result *= m;
    }
    return result;
}

double findPow(int n, double m){
    double result = 1.00;
    for(int i=0; i<n; i++){
        result *= m;
    }
    return result;
}

int main(){

    int n = 5, m = 15;;
    double double_m = 6.25;

    cout<<"For Integer n = 5 and Integer m = 15: "<<findPow(n, m)<<endl;
    cout<<"For Integer n = 5 and double m = 6.25: "<<findPow(n, double_m);


    return 0;
}
