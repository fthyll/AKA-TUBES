#include <iostream>

using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }else{
		return n * factorial(n-1);
    }
}
int main (){
    int n = 10;		//assign n dengan nilai lain yang akan difaktorialkan
    cout<<"Angka : "<<n<<endl;
    cout<<"Faktorialnya : "<<factorial(n);
}
