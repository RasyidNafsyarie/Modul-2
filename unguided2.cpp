#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    
    cout << "Masukkan jumlah elemen untuk dimensi x: ";
    cin >> x;
    cout << "Masukkan jumlah elemen untuk dimensi y: ";
    cin >> y;
    cout << "Masukkan jumlah elemen untuk dimensi z: ";
    cin >> z;

    int arr[x][y][z];

    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cin >> arr[i][j][k];
            }
        }
    }

    cout << "Array tiga dimensi yang diinputkan:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}
