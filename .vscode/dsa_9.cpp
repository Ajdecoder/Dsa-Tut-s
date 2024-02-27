#include <iostream>
using namespace std;
void print_Array(int array[] , int n){

for (int i = 0; i <= n; i++)
    {
        cout << array[i] << ", ";
    }

}
int main()
{   
     int n = 12;
    int data[12] = {4};
    // print_Array(data , 12);
    // cout<<endl;
    cout<<sizeof(data)/sizeof(int)<<endl;

    int size_data = sizeof(data)/sizeof(int);
    cout<<size_data<<endl;
    
}