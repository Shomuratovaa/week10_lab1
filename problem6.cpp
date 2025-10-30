#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    char arr[n];

    cout << "Enter " << n << " characters: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int upper = 0, lower = 0, digit = 0, special = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
            upper++;
        else if (arr[i] >= 'a' && arr[i] <= 'z')
            lower++;
        else if (arr[i] >= '0' && arr[i] <= '9')
            digit++;
        else
            special++;
    }

    cout << "Uppercase: " << upper << endl;
    cout << "Lowercase: " << lower << endl;
    cout << "Digit: " << digit << endl;
    cout << "Special: " << special << endl;

    return 0;
}
