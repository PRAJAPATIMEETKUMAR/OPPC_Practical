#include <iostream>
#include <conio.h>

using namespace std;

double fahrenheitToCentigrade(double fahrenheit){
    return (fahrenheit-32) * 0.555;
}

int main(){
    double tempFahrenheit, tempCentigrade;
    cout<<"Enter temperature in fahrenheit:";
    cin>>tempFahrenheit;
    tempCentigrade = fahrenheitToCentigrade(tempFahrenheit);
    cout<<"Temperature in Centigrade: "<<tempCentigrade;

    getch();
    return 0;
}
