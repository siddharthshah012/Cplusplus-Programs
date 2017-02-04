#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;


void funnyCheck(string s)
{
	string st = s;
	string rv = s;
	int check =0;
	
	reverse (rv.begin(), rv.end());
	
	cout << rv<< endl;
	
	for (int i =1 ; i <= rv.length(); i++)
	{
		
		//cout<<(int)st[i]<<endl;
		if ((abs((int)st[i]-(int)st[i-1])) == (abs((int)rv[i] - (int)rv[i-1])))
		{
			check++;
			//cout<<(abs((int)st[i]-(int)st[i-1])) <<endl;
			//cout << (abs((int)rv[i] - (int)rv[i-1]))<<endl;
			//cout<<"2323"<<endl;
		}
		
	}
	if (check == rv.length()-1)
	{
		cout<< "Funny"<< endl;
		//check =0;
	}
	else{
		cout<< "Not Funny"<< endl;
		//check =0;
	}
	
    
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num;
    string input1, input2;
    cin>>num;
    
    string str[num];
    for (int i=0; i< num ;i++)
        {
        cin>> str[i];

    }
	for (int i=0; i <num ;i++)
	{
		funnyCheck(str[i]);
	}
    
    
  
    return 0;
}
