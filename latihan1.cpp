#include <iostream>

using namespace std;

int hitung (int, int);
void cetak(int);

int main (){
    int a=hitung(9,5);
    cetak(a);
}

int hitung(int a, int b) {
    return a+b;
}

void cetak (int a){
    cout << "Nilai dari Variable adalah: " << a << endl;
}
