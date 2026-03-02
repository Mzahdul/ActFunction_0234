//library
#include <iostream>
using namespace std;
//deklarasi variable global
int panjang, lebar;
//implementasi fungsi dan  prosedur
void input(){
    cout << "Masukkan panjang : ";
    cin >> panjang;
    cout << "Masukkan lebar : ";
    cin >> lebar;
}
int luaspersegi(int a,int b){
    return a * b;
}
int jumlah(int x,int y, int z){
    return x+y+z;
}
void output(){
    cout << "hasilnya : " << luaspersegi(panjang,lebar) << endl;
}
int main(){
    input();
    output();
    cout << "hasil dari penjumlahan : " << jumlah(3,2,7);
 } //selesai}