#include <iostream>
using namespace std;

class mahasiswa{
    public :
    int nim;
    string nama;
    float nilai;
    void printData(){
        cout << "NIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }

};

int main(){
    mahasiswa mhs;
    
    mhs.nim = 2024;
    mhs.nama = "Rizqi";
    mhs.nilai = 97.5;

    mhs.printData();
}

