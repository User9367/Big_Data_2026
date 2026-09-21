#include "sortings.hpp"
#include <iostream>
#include <utility>

void biv::my_sort(int* const arr, const int size) {
	for (int i=0; i<size; i+=1) {
        for (int j=0; j<size-1; j+=1) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
            }
        }
    }

}
