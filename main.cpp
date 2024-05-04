#include <iostream>
#include <vector>

int main() {
    std::vector<int> X = {1, 2, 0, 5, 6, 7, 0, 9, 10}; // Исходный массив X
    std::vector<int>::iterator first_zero = X.end(); // Итератор для первого нулевого элемента
    std::vector<int>::iterator second_zero = X.end(); // Итератор для второго нулевого элемента
    


    
    // Находим первый и второй нулевые элементы
    for (auto it = X.begin(); it != X.end(); ++it) {
        if (*it == 0) {
            if (first_zero == X.end()) {
                first_zero = it;
            } else {
                second_zero = it;
                break;
            }
        }
    }

    if (first_zero != X.end() && second_zero != X.end()) {
        // Удаляем элементы между первым и вторым нулевыми элементами
        X.erase(first_zero + 1, second_zero);
    }

    // Выводим массив после удаления элементов
    for (int num : X) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
