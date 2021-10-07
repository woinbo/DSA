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
    int LinearSearch(int);
};

void Array::Display() {
    int i;
    cout << "Elements are:" << endl;
    for (i = 0; i < length; i++)
        cout << A[i];
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

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int Array::LinearSearch(int key) {
    int i;
    for (i = 0; i < length; i++) {
        if (key == A[i]) {
            swap(A[i], A[0]);
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    cout << "Enter the size of array";
    cin >> size;
    Array arr1 = Array(size);
    cout << "Enter the element to be inserted: " << endl;
    for (int i = 0; i < size; i++) {
        int x;
        cin >> x;
        arr1.Append(x);
    }
    arr1.Display();
    cout << arr1.LinearSearch(2);
    return 0;
}
