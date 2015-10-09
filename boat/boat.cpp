#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;
main(){
	ifstream fin;
	ofstream fout;
	fin.open("boat.in");
	fout.open("boat.out");
	string car;
	stack<string> cars ;
	int N,in,out;
	fin >> N;
	for (int i=0;i<N;i++){
		fin >> in; 
		fin >> out;
		for (int k=0;k<in;k++) cars.pop();
		for (int j=0;j<out;j++) {
			fin >> car;
			cars.push(car);
		}
	}
	vector<string> a;
	while(!cars.empty()){
		a.push_back(cars.top());
		cars.pop();
	}	
	sort(a.begin(),a.end());
	vector<string>::iterator it;
	for(it=a.begin();it!=a.end();it++)  fout << *it << endl;

	
}
