#include <iostream>
using namespace std;

int main() {
    int water = 15;
    int coffe = 9;
    int waterPrice = 20;
    int coffePrice = 60;
    int sum = water + coffe;
    
    cout << "Кількість та ціна води: " << water << " " << "шт." << " " << waterPrice << " " << "грн" << "\t";
    cout << "Кількість та ціна кави: " << coffe << " " << "шт." << " " << coffePrice << " " << "грн" << "\t";
    cout << "Загальна кількість напоїв: " << sum << "шт.";
    
    
    return 0;
}
