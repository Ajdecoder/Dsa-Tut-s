#include<iostream>
using namespace std;

   int Sum_of(int arr[] , int num){

        int Sum = 0; 
        for (int i = 0; i < num; i++)
        {
           Sum = Sum +arr[i];
        }
                
        cout <<Sum << endl;
    }

int main(){

    int num;
    cin >> num;

    int arr[100];

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    
    Sum_of(arr,num);

}