#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    
    int a = 0, b = 1;
    cout << "Fibonacci Series: " << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}
