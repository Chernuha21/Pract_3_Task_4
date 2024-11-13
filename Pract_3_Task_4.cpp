#include <iostream>
#include <forward_list>
#include <numeric> // Для std::accumulate

int main() {
    // 1. Створення однозв'язного списку з кількома цілими числами
    std::forward_list<int> flist = { 5, 10, 15, 20 };

    // 2. Обчислення суми всіх елементів списку
    int sum = std::accumulate(flist.begin(), flist.end(), 0);

    // 3. Виведення результату
    std::cout << "Sum of list: " << sum << std::endl;

    return 0;
}
