#include <iostream>
using namespace std;

class contoh {
private:
    int nilai;

public:
    // Constructor
    contoh(int n) {
        nilai = n;
    }

    // Getter
    int getNum() {
        return nilai;
    }
};

int main() {

    // Membuat objek dan langsung mengirim nilai 10 ke constructor
    contoh obj(10);

    // Menampilkan nilai yang tersimpan pada variabel nilai
    cout << "nilai yang diinput: " << obj.getNum() << endl;

    return 0;
}
