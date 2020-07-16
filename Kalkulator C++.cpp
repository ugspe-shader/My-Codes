#include <iostream>
#include <unistd.h>
#include <stdlib.h>
using namespace std;

int main(){
menu : 
cout << "Kalkulator C++ Sederhana\nKlik apa saja untuk mengaktifkan"<< endl;
getchar();

cout << "Tunggu Sebentar\n\n";
sleep(3);

float a, b;
int code;

cout << "Pilihlah funsgi yang kau mau\n";
cout << "1. Penjumlaham\n2. Pengurangan\n3. Pembagian\n4. Perkalian\n\n";

cin>>code;
if(code > 4 || code < 1){
cout <<"\nKodemu Invalid, pilih kode dari angka 1 hingga 4"<<endl;
sleep(3);
cout << "\nMemperbaiki...\n\n";
sleep(3);
system("clear");
goto menu;
}else{
sleep(1);
cout << "\nMasukkan angkamu\n\n";
cin>>a;
cout << "\nMasukkan angka targetmu\n\n";
cin>>b;
sleep(1);
if(code == 1){cout<<"\nHasil dari penjumlahan " << a << " dengan " << b << " adalah " << a + b << endl << endl;sleep(10);
goto menu;}
if(code == 2){cout<<"\nHasil dari pengurangan " << a << " dengan " << b << " adalah " 
 << a - b << endl << endl;sleep(10);
goto menu;}
if(code == 3){cout<<"\nHasil dari pembagian " << a << " dengan " << b << " adalah " << a / b << endl << endl;
sleep(10);
goto menu;}
if(code == 4){cout<<"\nHasil dari perkalian " << a << " dengan " << b << " adalah " << a * b << endl << endl;
sleep(10);
goto menu;}
}}