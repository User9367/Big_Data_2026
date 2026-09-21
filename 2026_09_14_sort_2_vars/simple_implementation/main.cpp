#include <iostream>
#include <vector>
using namespace std;

void my_sort(int *arr, const int size);

int main() {
    int size_;
    cout << "Введите размер массива: ";
    cin >> size_;
    cout << '\n';
    vector<int> mas;
    cout << "Вводите элементы массива: " << '\n';
    for (int i=1; i<=size_; i+=1) {
        int el;
        cin >> el;
        mas.push_back(el);
    }
    cout << "Изначальный массив: ";
    for (int i=1; i<=size_; i+=1) {
        cout << mas[i - 1] << ' ';
    }
    cout << '\n';
    my_sort(mas.data(), size_);
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
    cout << "Отсортированный массив: ";
    for (int i=0; i<size; i+=1) {
        cout << arr[i] << ' ';
    }
}
