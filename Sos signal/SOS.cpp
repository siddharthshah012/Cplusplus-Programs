#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int changeInSos(const string S)
    {
    int lengthString;    
    lengthString = S.length();
    //cout<<lengthString<<endl;
    int repeatSig = lengthString/3;
    //cout<<repeatSig<<endl;
    int count= 0;
    for (int i=0; i <lengthString; i++)
        {
            if (S[i] != 'S'){
                count++;
            }
            if(S[i+1] != 'O'){
                count++;
            } 
            if (S[i+2] != 'S'){
                count++;
            }
        i = i+2;
        
        
    }
    return count;
}

int main(){
    string S;
    cin >> S;
    int changes;
    changes = changeInSos(S);
    cout<< changes<< endl;
    return 0;
}
