#include <iostream>
using namespace std;

int main() {
    int num_vars;
    cout<<"Enter the number of ints:"<<endl;
    cin>>num_vars;

    if (num_vars<1) {
        cout<<"Invalid Input"<<endl;
        return 0;
    }

    int numbers[num_vars];
    cout<<"Enter numbers"<<":"<<endl;

    for (int i=0; i<num_vars; i++) {
        cout<<"Enter number"<<i+1<<":";
        cin>>numbers[i];
    }

    int sum = 0;
    for (int i=0;i<num_vars; i++) {
        sum += numbers[i];
    }

    cout<<"The sum of all numbers is " <<sum<<endl;
    return 0;
}