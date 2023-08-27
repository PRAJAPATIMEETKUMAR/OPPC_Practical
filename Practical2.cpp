#include <iostream>

using namespace std;

int main(){

    int num, for_500=0, for_100=0, for_50=0, for_20=0, for_10=0, for_5=0, for_1=0;
    cout<<"Enter your number:";
    cin>>num;

    while (num >= 1){
        if(num >= 500){
            num -= 500;
            for_500++;
        }
        else if(num >= 100){
            num -= 100;
            for_100++;
        }
        else if(num >= 50){
            num -= 50;
            for_50++;
        }
        else if(num >= 20){
            num -= 20;
            for_20++;
        }
        else if(num >= 10){
            num -= 10;
            for_10++;
        }
        else if(num >= 5){
            num -= 5;
            for_5++;
        }
        else if(num >= 1){
            num -= 1;
            for_1++;
        }
    }

    cout<<"500:"<<for_500<<endl;
    cout<<"100:"<<for_100<<endl;
    cout<<"50:"<<for_50<<endl;
    cout<<"20:"<<for_20<<endl;
    cout<<"10:"<<for_10<<endl;
    cout<<"5:"<<for_5<<endl;
    cout<<"1:"<<for_1<<endl;

    return 0;
}
