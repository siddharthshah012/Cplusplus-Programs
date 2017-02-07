#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;


string wordcheck(string s)
	{
		std::vector<std::string> test;
		char first[10] = {'q','w','e','r','t','y','u','i','o','p'};
		char second[9] = {'a','s','d','f','g','h','j','k','l'};
		char third[7] = {'z','x','c','v','b','n','m'};
		int count =0;	
		for (int i =0; i <s.length(); i++)
		{		
			for (int j=0;j < 10; j++)
			{
				if(s[i] == second[j])
				{
					cout<<"match"<<endl;
					count++;
				}
			}
			if (count == s.length())
			{
					cout<<"adding in vector";
					//test.push_back(s);
					return s;
					break;
			}
			//count =0;
		}		
	}

int main()
{
	vector<std::string> v;
	string wordcheck(string s);
	
	string str[3] ={/*"hello", */"alaska", "dad", "lad"};	
	for (int i=0; i <3 ;i++)
	{
		v.push_back(wordcheck(str[i]));
	}
	for (int i =0; i < v.size(); i++)
	{
			cout<<v[i]<<endl;
	}
	
	
	
	return 0;	
}