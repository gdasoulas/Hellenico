#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;


main(){
	ifstream fin;
	fin.open("acropolis.in");
	ofstream fout; 
	fout.open("acropolis.out");
	vector<int> w,h;
	int n,a;
	fin >> n ;
	for (int i=0;i<n;i++) {
		fin >> a; 
		if (a==1) 	{ h.push_back(i); }  
		else w.push_back(a);
	}	
	
	sort(w.begin(),w.end());
	vector<int>::iterator it;
	for (it=h.begin();it!=h.end();it++) w.insert((w.begin()+ (*it)),1);
	for(int i=0;i<n;i++) fout << w[i]<<endl;

}
