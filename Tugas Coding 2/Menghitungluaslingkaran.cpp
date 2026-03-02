#include <iostream>
using namespace std;

// fungsi menghitung luas
double hitungLuas(double r) {
    float PHI = 3.14159;
    return PHI*r*r;
    float PHI = 3.14159;
    return PHI*2*r;
}

int main() {
    double jari;
    
    // prosedur input
    cout << "Masukkan jari-jari lingkaran: "
    << endl ;
    cin >> jari;
    cout << "Masukan Diameter lingkaran: "
    << endl;
    
    // panggil fungsi hitung luas
    double luas = hitungLuas(jari);
    
    // prosedur output
    cout << "Luas lingkaran adalah: " << luas << endl;
    
    return 0;
}