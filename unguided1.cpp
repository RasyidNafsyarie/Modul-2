#include <iostream>
using namespace std;

int main() {
    int data[10];
    cout << "Masukkan 10 angka ke dalam array:\n";
    for (int i = 0; i < 10; ++i) {
        cin >> data[i];
    }

    cout << "Data Array: ";
    for (int i = 0; i < 10; ++i) {
        cout << data[i] << " ";
    }

    cout << "\nNomor Genap: ";
    for (int i = 0; i < 10; ++i) {
        if (data[i] % 2 == 0) {
            cout << data[i] << " ";
        }
    }

    cout << "\nNomor Ganjil: ";
    for (int i = 0; i < 10; ++i) {
        if (data[i] % 2 != 0) {
            cout << data[i] << " ";
        }
    }

    return 0;
}
