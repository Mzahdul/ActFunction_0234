//libary
#include <iostream>
using namespace std;
//deklarasi variable
int p, l;
//implementasi fungsi dan prosedur
void input(){
    cout << "Masukkan panjang : ";
    cin >> p;
    cout << "Masukkan lebar : ";
    cin >> l;
}
int luaspersegi(int a,int b){
    return p * l;
}
void output(){
    cout << "hasilnya : " << luaspersegi( p,l) << endl;
}
int main(){
    input();
    output();
} //selesai