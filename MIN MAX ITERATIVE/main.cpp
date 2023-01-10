#include <iostream>

using namespace std;

int minimum(int arr[10]){
    int minval = arr[0];
    int i = 1;
    while(i < 10){
        if(arr[i] < minval) {
            minval = arr[i];
        }
        i = i+1;
    }
    return minval;
}
int maximum(int arr[10]){
    int maxval = arr[0];
    int i = 1;
    while(i < 10){
        if (arr[i] > maxval){
            maxval = arr[i];
        }
        i = i+1;
    }
    return maxval;
}
int main(){
    int arr[10] = {71,98,75,3,75,92,69,45,79,62};
    cout<<"Minimum : "<<minimum(arr)<<endl;
    cout<<"Maximum : "<<maximum(arr);
    return 0;
}
