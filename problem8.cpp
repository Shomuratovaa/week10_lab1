#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int ROLLS = 10000;
    int count[6] = {0};

    srand(time(0));

    for (int i = 0; i < ROLLS; i++) {
        int die = rand() % 6 + 1;
        count[die - 1]++;
    }

    cout << "After rolling the die " << ROLLS << " times:\n";
    for (int i = 0; i < 6; i++) {
        cout << "Value " << i + 1 << ": " << count[i] << " times" << endl;
    }

    return 0;
}
