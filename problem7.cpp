#include <iostream>
using namespace std;


int main() {
    int num_vars;
    cout<<"Enter the number of elements:"<<endl;
    cin>>num_vars;

    int arr[num_vars];
    for (int i = 0; i < num_vars; i++) {
        cin>>arr[i];
    }
    int temp;

    for (int i = 0; i<num_vars-1; i++) {
       for (int j=i+1; j<num_vars; j++) {
           if (arr[i]>arr[j]) {
               temp = arr[j];
               arr [j] = arr[i];
               arr [i] = temp;
            }
       }
    }

    for (int i = 0; i < num_vars; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}


