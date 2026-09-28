#include <iostream>
using namespace std;

void my_sort(int *arr, const int size);
void print_array(int *arr, const int size);

int main() {
    int size_;
    cout << "Введите размер массива: ";
    cin >> size_;
    cout << '\n';
    int* mas = new int[size_];
    cout << "Вводите элементы массива: " << '\n';
    for (int i=0; i<size_; i+=1) {
        int el;
        cin >> el;
        mas[i] = el;
    }
    cout << "Изначальный массив: ";
    print_array(mas, size_);

    my_sort(mas, size_);

    cout << "Отсортированный массив";
    print_array(mas, size_);
    delete[] mas;
    return 0;
}

void my_sort(int *arr, const int size) {
    for (int i=0; i<size; i+=1) {
        for (int j=0; j<size-1; j+=1) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void print_array(int *arr, const int size) {
    for (int i=0; i<size; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
