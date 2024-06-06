#include <iostream>

void bubble_sort(int a[], int size);

int main() {
    int arr[6];
    int i = 0;

    std::cout << "Enter 6 integers:\n";
    for(i = 0; i < 6; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Before sorting:\n";
    for(i = 0; i < 6; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    bubble_sort(arr, 6);

    std::cout << "After sorting:\n";
    for(i = 0; i < 6; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}

void bubble_sort(int a[], int size) {
    bool switched = true;
    int hold = 0;

    size -= 1;

    for(int i = 0; i < size && switched; i++) {
        switched = false;
        for(int j = 0; j < size - i; j++) {
            if(a[j] > a[j + 1]) {
                switched = true;
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }
}
