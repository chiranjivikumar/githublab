#include<iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the number of the rows: ";
    cin >> x;

    for(int i = 0; i < x; i++) {
        for(int j = 1; j <=  i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}