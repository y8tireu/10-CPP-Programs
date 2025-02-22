### 1. Hello World  
A basic program that prints "Hello, World!" to the console.

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```

---

### 2. Factorial Calculator  
Calculates the factorial of a given number using recursion.

```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
```

---

### 3. Fibonacci Sequence Generator  
Prints the Fibonacci sequence up to a specified number of terms.

```cpp
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
```

---

### 4. Bubble Sort  
Sorts an array of integers using the bubble sort algorithm.

```cpp
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
```

---

### 5. Binary Search  
Performs binary search on a sorted array.

```cpp
#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout << "Enter element to search: ";
    cin >> x;
    int result = binarySearch(arr, 0, n-1, x);
    if(result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found." << endl;
    return 0;
}
```

---

### 6. Prime Number Checker  
Checks whether a given number is prime.

```cpp
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n <= 1)
        return false;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
    return 0;
}
```

---

### 7. Matrix Multiplication  
Multiplies two matrices provided by the user.

```cpp
#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
    
    if(c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 1;
    }
    
    int A[r1][c1], B[r2][c2], C[r1][c2];
    
    cout << "Enter elements of first matrix:" << endl;
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            cin >> A[i][j];
    
    cout << "Enter elements of second matrix:" << endl;
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            cin >> B[i][j];
    
    // Initialize result matrix
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++)
            C[i][j] = 0;
    
    // Multiply matrices
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
    
    cout << "Resultant matrix:" << endl;
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    return 0;
}
```

---

### 8. File I/O  
Demonstrates writing to and reading from a file.

```cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Writing to a file
    ofstream outfile("example.txt");
    if (outfile.is_open()) {
        outfile << "This is a sample text written to the file.\n";
        outfile << "C++ File I/O example." << endl;
        outfile.close();
    } else {
        cout << "Unable to open file for writing." << endl;
    }
    
    // Reading from a file
    ifstream infile("example.txt");
    string line;
    if (infile.is_open()) {
        while(getline(infile, line)) {
            cout << line << endl;
        }
        infile.close();
    } else {
        cout << "Unable to open file for reading." << endl;
    }
    return 0;
}
```

---

### 9. Simple Calculator  
A basic calculator that performs addition, subtraction, multiplication, and division.

```cpp
#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    
    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
    
    return 0;
}
```

---

### 10. Singly Linked List  
A simple implementation of a singly linked list with insert and display operations.

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insert(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void display(Node* head) {
    Node* current = head;
    while(current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    
    cout << "Linked List: ";
    display(head);
    return 0;
}
```

---

Each of these programs demonstrates fundamental C++ concepts—from basic I/O and control structures to data structures and file handling. You can compile each with your preferred C++ compiler (for example, using `g++ program.cpp -o program` on the command line) and run them to see how they work.
