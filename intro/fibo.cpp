#include <iostream>
using namespace std;

void printarray(int arr[],int n)
{
    for (int i = 1; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "enter numbers ";
    cin >> n;
    int arr[n];

   arr[0] = 0;
   arr[1] = 1;


   for (int i = 2; i < n; i++) {
      arr[i] = arr[i-1] + arr[i-2];
   }

    printarray(arr,n);
    __check_facet(arr);

}