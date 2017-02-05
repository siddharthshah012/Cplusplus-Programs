/*
*Name :- Siddharth Shah
*Date :- 2/4/2017
*
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

using std::swap;

void bubbleSort(int arr[]);

int main()
{
	int num;
	cout<<"enter number";
	cin>>num;
	int arr[num];
	
	for (int i=0;i< num;i++)
	{
		cin>>arr[i];
	}
	
	bubbleSort(arr[num]);
		
		
	for (int i=0;i< num;i++)
	{
		cout<<arr[i]<<endl;
	}

	
	return 0;
}

void bubbleSort(int arr[]) {
      bool swapped = true;
      int j = 0;
      int tmp;
      while (swapped) {
            swapped = false;
            j++;
            for (int i = 0; i < (int)arr.length()- j; i++) {
                  if (arr[i] > arr[i + 1]) {
                        tmp = arr[i];
                        arr[i] = arr[i + 1];
                        arr[i + 1] = tmp;
                        swapped = true;
                  }
            }
      }
}