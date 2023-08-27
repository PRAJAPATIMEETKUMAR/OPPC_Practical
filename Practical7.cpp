#include <iostream>

using namespace std;

void exchange(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void sortingArray(int array[]){

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(array[i] < array[j]){
                exchange(array[i], array[j]);
            }
        }
    }
}

int main(){

    int array[5];

    for(int i=0; i<5; i++){
        cin>>array[i];
    }

    sortingArray(array);
    cout<<"Your sorted array:"<<endl;

    for(int i=0; i<5; i++){
        cout<<" "<<array[i];
    }

    return 0;
}