#include <iostream>//бібліотека на ввід та вивід 
#define size 4//визначає символічну константу зі значенням 4
using namespace std;//використання простору імен std 

int main() {

    int arr[size];    // Статичний масив 
    int* ptr = arr;// Покажчик на початок масиву

    cout << "Enter 4 array elements: ";//вивід повідомлення 
    for (int i = 0; i < size; ++i) {//цикл на введення даних 
        cin >> *(ptr + i);//введення елемента за допомогою покажчика 
    }

    int* minznch = arr;  // Ініціалізація покажчика першим елементом 
    int* maxznch = arr;  // Ініціалізація покажчика першим елементом 

    for (int i = 0; i < size; ++i) {//цикл на перелічення значень 
        if (*(arr + i) < *minznch) {// логічна умова якщо 
            minznch = &*(arr + i);// Оновлення покажчика на мінімальний елемент
        }
        if (*(arr + i) > *maxznch) {//логічна умова якщо 
            maxznch = &*(arr + i);// Оновлення покажчика на максимальний елемент
        }
    }

    
    int distance = maxznch - minznch; // Визначення відстані між позиціями елементів за допомогою адресної арифметики

    cout << "Minimum value: " << *minznch << " Maximum value: " << *maxznch << endl;// Виведення результатів Максимального та мінімального
    cout << "Spacing between elements:  " << distance << endl;

    return 0;// логічний кінець 
}
