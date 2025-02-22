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
