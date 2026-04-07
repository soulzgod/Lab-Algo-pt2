#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah buku: ";
    cin >> n;
    cin.ignore(); // supaya getline bisa dipakai

    string buku[n];

    // Input judul buku
    for (int i = 0; i < n; i++) {
        cout << "Masukkan judul buku ke-" << i+1 << ": ";
        getline(cin, buku[i]);
    }

    // Tampilkan sebelum sorting
    cout << "\nSebelum sorting:\n";
    for (int i = 0; i < n; i++) {
        cout << i+1 << ". " << buku[i] << endl;
    }

    // Bubble Sort (Ascending)
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (buku[j] > buku[j+1]) {
                string temp = buku[j];
                buku[j] = buku[j+1];
                buku[j+1] = temp;
            }
        }
    }

    // Tampilkan setelah sorting
    cout << "\nSetelah sorting:\n";
    for (int i = 0; i < n; i++) {
        cout << i+1 << ". " << buku[i] << endl;
    }

    return 0;
}
