#include <iostream>
using namespace std;

// Call by Reference using pointers
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;
    swap(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}
// Output: a = 20, b = 10