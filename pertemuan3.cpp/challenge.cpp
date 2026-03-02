#include <iostream>
using namespace std;
float luas, d1, d2;

void prosedurinputData(){
    cout << "Masukkan diagonal 1 : ";
    cin >> d1;
    cout << "Masukkan diagonal 2 : ";
    cin >> d2;
}

float HitungLuasBerapameter(float d1, float d2)
{
  return 0.5 * d1 * d2;
}

void ProsedurOutput(){
    cout << "Luas ketupat : " << HitungLuasBerapameter(d1, d2);
}

int main(){
    prosedurinputData();
    ProsedurOutput();
}