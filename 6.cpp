#include <iostream>
using namespace std;

int main() {
    int forks = 10;
    int glasses = 10;
    int knives = 10;
    int sum = forks + glasses + knives;
    
    cout << "Кількість виделок: " << forks << "\t";
    cout << "Кількість стаканів: " << glasses << "\t";
    cout << "Кількість ножів: " << knives << "\t";
    cout << "Загальна кількість столових приборів: " << sum;
    
    
    return 0;
}
