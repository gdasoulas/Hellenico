#include <iostream>  
#include <fstream>  
#include <string>  
#include <vector>  
#include <algorithm>  
  
using namespace std;  
  
string least(string str)  
{  
    int i;  
    string minimum=str;  
    for(i=0;i<str.length();i++) {  
            if (minimum.compare(str)>0) minimum=str;  
            int i;  
            for(i=0;i<str.size()-1;i++) swap(str.at(0),str.at(str.size()-1-i));  
    }  
  
    return minimum;  
  
}  
  
bool comparison(string k,string l) {return (least(k)<least(l));}  
  
int main()  
{  
    ifstream myfilein;  
    ofstream myfileout;  
    myfilein.open("names.in");  
    myfileout.open("names.out");  
  
    int n;  
    myfilein >> n;  
    vector<string> names;  
    string c;  
  
    int i;  
  
    for(i=0;i<n;i++)    { myfilein >> c ;  names.push_back(c);}  
  
    sort(names.begin(),names.end(),comparison);  
  
    myfileout << names[0];  
  
    myfilein.close();  
    myfileout.close();  
  
    return 0;  
} 
