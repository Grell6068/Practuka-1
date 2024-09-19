//1)
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
//2)
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i = 1;

    while (i <= 100) {
        sum += i;
        i++;
    }
    cout << "Сума від 1 до 100: " << sum << endl;
    return 0;
}
//3)
#include <iostream>
using namespace std;

int main() {
    int i = 2;

    do {
        cout << i << " ";
        i += 2;
    } while (i <= 20);

    cout << endl;
    return 0;
}
