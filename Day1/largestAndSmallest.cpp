#include<iostream>
#include <climits>
using namespace std;


int main(){

    int size = 5;
    int marks[size];

    int smallest = INT_MAX;
    int largest = INT_MIN;

// taking values of array
    for(int i=0; i<size; i++){
        cin>>marks[i];
    }

    int sCount=-1;
    int lCount=-1;


    for(int i=0; i<size; i++){
        if(marks[i]<smallest){
            smallest = marks[i];
            sCount= i;
        }
        
    }

    for (int i=0; i<size; i++){
        if(marks[i]>largest){
            largest = marks[i];
            lCount=i;
        }
        
    }

    cout<<"Smallest Value in Marks is : "<<smallest<<endl;
    cout<<"Smallest value is at index : "<<sCount<<endl;
    cout<<"Largest Value in Marks is : "<<largest<<endl;
    cout<<"Largest value is at index : "<<lCount<<endl;


    return 0;
}