#include <iostream>

using namespace std;

void minmax(int arr[],int i, int j, int &min, int &max){
    int min1, min2, max1, max2;
    if(i==j){
        min = arr[i];
        max = arr[i];
    }else{
        if(i==j-1){
            if(arr[i]<arr[j]){
                max = arr[j];
                min = arr[i];
            }else{
                max = arr[i];
                min = arr[j];
            }
        }else{
            int k = (i+j)/2;
            minmax(arr,i,k,min1,max1);
            minmax(arr,k+1,j,min2,max2);
            if(min1<min2){
                min = min1;
            }else{
                min = min2;
            }
            if(max1>max2){
                max = max1;
            }else{
                max = max2;
            }
        }
    }
}
int main(){
    int i = 1;
    int j = 10;
    int arr[j] = {71,98,75,3,75,92,69,45,79,62}; 
    int min = arr[0];
    int max = arr[0];
    minmax(arr,i,j,min,max);
    cout<<"Minimum : "<<min<<endl;
    cout<<"Maximum : "<<max<<endl;
    return 0;
}
