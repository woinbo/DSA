// Inserting and Appending in a Array

#include <iostream>
using namespace std;

class Array {
   private:
    int A[10];
    int size;
    int length;

   public:
    Array(int size) {
        this->size = size;
        this->length = 0;
    }

   public:
    void Display();                 // Display the Array
    void Append(int x);             // Append at the end
    void Insert(int index, int x);  // Insert at the index
};

void Array::Display() {
    int i;
    printf("\nElements are\n");
    for (i = 0; i < length; i++)
        printf("%d ", A[i]);
}

void Array::Append(int x) {
    if (length < size)
        A[length++] = x;
}

void Array::Insert(int index, int x) {
    int i;
    if (index >= 0 && index <= length) {
        for (i = length; i > index; i--)
            A[i] = A[i - 1];
        A[index] = x;
        length++;
    }
}

int main() {
    int size;
    cout << "Enter the size of array";
    cin >> size;
    Array arr1 = Array(size);
    for (int i = 0; i < size; i++) {
        int x;
        cout << "Enter the element to be inserted";
        cin >> x;
        arr1.Append(x);
    }
    arr1.Display();
    return 0;
}
