#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Введіть число: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Число " << number << " є парним." << endl;
    } else {
        cout << "Число " << number << " є непарним." << endl;
    }

    return 0;
}
