#include<iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	int size = arr.size();
	int temp[size];
	int i = size;
	int j = 0;
	while(i>=0){
		temp[j++] = arr[i--];
	}
}

int main(){
    
vector<int> arr; int m;

cin>>m;

return 0;
}