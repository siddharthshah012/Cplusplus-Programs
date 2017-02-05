/*
*Name :- Siddharth Shah
*Date :- 2/4/2017
*
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	// unsigned int a,b;
	// cin>>a>>b;
	// int mat [b][a];
	
	// for (int i =0; i< b-1;i++)
	// {
		// for (int j=0; j < a;j++)
		// {
			// cin >> mat[i][j];
		// }
	// }
	// /*for (int i =0; i< b-1 ;i++)
	// {
		// for (int j=0; j < a;j++)
		// {
			// cout << mat[i][j];
		// }
	// }*/
	// /*cout<<mat[0][0]<<endl;
	// cout<<mat[0][1]<<endl;
	// cout<<mat[0][2]<<endl;
	// cout<<mat[0][3]<<endl;*/	
	// //cout<<mat[0][3]<<endl;
	
	// for (int i = 0; i < b -1 ; i++)
	// {
		// for (int j =0; j<a;j++)
		// {
			
			// if (j != a-1)
			// {
				// /*cout<< "I th value"<< i <<endl; 
				// cout<<"first : " << j << "  "<<mat[i][j]<<endl;
				// cout<<"second : "<< j+1 << "  "<<mat[i][j+1]<<endl;				
				// cout<<"row :"<< b-1<<endl;
				// cout<<"column :"<<j<<endl;*/
				
				// mat[b-1][j] = mat[i][j]^ mat[i][j+1];
				
				// //cout<< "answer"<<mat[b-1][j]<<endl;
			// }
			// else if (j == a-1)
			// {
				// mat[b-1][j] = mat[i][j] ^ mat [i][0];
				// //cout<<mat[b-1][j]<<endl;
			// }
			
		// }
	// }
	
	// for (int i =0; i< b-1 ;i++)
	// {
		// for (int j=0; j < a;j++)
		// {
			// cout << mat[b-1][j] <<" ";
		// }
	// }
	int i,j,count=0;
	for (i =1; i<= 100;i++)
	{
		for ( j=1;j<=log(i);j++)
		{
			count++;
		}
	}
	cout<<endl<<count<<endl;
	
	
	/*cout<<mat[1][0]<<endl;
	cout<<mat[1][1]<<endl;
	cout<<mat[1][2]<<endl;
	cout<<mat[1][3]<<endl;	*/
    
    return 0;
}
