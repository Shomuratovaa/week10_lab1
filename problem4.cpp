 #include <iostream>
using namespace std;

int indexOfLargestElement(double array[], int size) {
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] >= array[index])
            index = i;
    }
    return index;
}

int main() {
    double arr[15];
    cout << "Enter 15 numbers: ";
    for (int i = 0; i < 15; i++) {
        cin >> arr[i];
    }

    int index = indexOfLargestElement(arr, 15);
    cout << "Index of largest element: " << index << endl;
    return 0;
}
