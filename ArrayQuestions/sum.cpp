#include <iostream>
using namespace std;

int main() {

  // size of array
  int num;
  cin >> num;
  
  // initialise array
  int arr[50];
  for (int i = 0; i < num; i++)
  {
    cin >> arr[i];
  }
  
  // initialise sum to zero
  int sum = 0;

  // for loop runs from 0 to size - 1
  for(int i = 0; i < num; i++)
  {
    sum = sum + arr[i];
  }

  cout << "The sum of the elements in the array: " << sum;
}