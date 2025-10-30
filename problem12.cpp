#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int index = -1;


    int same;
    if (a[0] == a[1])
        same = a[0];
    else if (a[0] == a[2])
        same = a[0];
    else
        same = a[1];

    for (int i = 0; i < n; i++) {
        if (a[i] != same) {
            index = i + 1;
            break;
        }
    }

    cout << "Output: " << index << endl;

    return 0;
}