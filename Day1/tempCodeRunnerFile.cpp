#include<iostream>
#include <climits>
using namespace std;


int main(){
    // int marks[5] = {100, 76, 87, 36, 91};
    // double price[5] = {34.5, 65.8, 98.45, 56.8, 54.34};

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    int size = 5;
    int marks[size];

    int smallest = INT_MAX;
    int largest = INT_MIN;

// taking values of array
    for(int i=0; i<size; i++){
        cin>>marks[i];
    }

//printing values of array
    // for(int i=0; i<size; i++){
    //     cout<<marks[i]<<endl;
    // }

    for(int i=0; i<size; i++){
        if(marks[i]<smallest){
            smallest = marks[i];
        }
    }

    for (int i=0; i<size; i++){
        if(marks[i]>largest){
            largest = marks[i];
        }
    }

    cout<<"Smallest Value in Marks is : "<<smallest<<endl;
    cout<<"Largest Value in Marks is : "<<largest<<endl;


    return 0;
}