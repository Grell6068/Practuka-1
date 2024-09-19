#include <iostream>
using namespace std;

int main() {
    int water = 15;
    int coffe = 9;
    float waterPrice = 20.55;
    float coffePrice = 60.25;
    int sum = water + coffe;
    
    cout << "Кількість та ціна води: " << water << " " << "шт." << " " << waterPrice << " " << "грн" << "\t";
    cout << "Кількість та ціна кави: " << coffe << " " << "шт." << " " << coffePrice << " " << "грн" << "\t";
    cout << "Загальна кількість напоїв: " << sum << "шт.";
    
    
    return 0;
}
