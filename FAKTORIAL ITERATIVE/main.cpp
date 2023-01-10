#include <iostream>

using namespace std;

int factorial(int &n){
    int hasil;
    hasil = 1;
    while(n!=0){
        hasil = hasil*n;
        n=n-1;
    }
    return hasil;
}
int main (){
    int n = 10;	//assign n dengan nilai lain yang akan difaktorialkan
    cout<<"Angka : "<<n<<endl;
    cout<<"Faktorialnya : "<<factorial(n);
}
