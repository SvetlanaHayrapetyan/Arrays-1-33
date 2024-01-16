//13. Դասավորել տրված իրական թվերի հաջորդականության անդամները նվազման կարգով: 
#include <iostream>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int sequence[] = {10, 58, 700, 48, 6, 14, 1002};
    int size = sizeof(sequence) / sizeof(sequence[0]);

    
    bubbleSort(sequence, size);

   
    for (int i = 0; i < size; ++i) {
        std::cout << sequence[i] << " ";
    }

    return 0;
}
