#include <iostream>
using namespace std;

bool strictlyEqual(const int list1[], const int list2[], int size) {

    if (size<=0) {
        cout<<"Empty list"<<endl;
        return false;
    }

    for (int i=0; i<size; i++) {
        if (list1[i] != list2[i]) {
            return false;
        }
    }

    return true;
}

int main() {

    const int maxSize = 20;
    int list1[maxSize], list2[maxSize];

    int size;
    cout<<"Enter the size of the lsits:";
    cin>>size;

    if (size<=0 || size>=maxSize ) {
        cout<<"Invalid input!";
        return 0;
    }

    cout<<"Enter the elements of list1:"<<endl;
    for (int i=0; i<size ; i++) {
        cout<<"Enter element"<<i+1<<":";
        cin>>list1[i];
    }
    cout<<"Enter the elements of list2:"<<endl;
    for (int i=0; i<size ; i++) {
        cout<<"Enter element"<<i+1<<":";
        cin>>list2[i];
    }
    bool isIdentical = strictlyEqual(list1,list2, size);

    if (isIdentical) {
        cout<<"The lists are identical!"<<endl;
    }else {
        cout<<"The lists are not identical!"<<endl;
    }

    return 0;
}
