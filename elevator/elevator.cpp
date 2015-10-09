#include <iostream>
#include <vector>
#include<algorithm>
#include<fstream>

using namespace std;

main()
{
	ifstream fin;
	fin.open("elevator.in");
	ofstream fout;
	fout.open("elevator.out");

	vector<long int> w;
	long int N,a ;
	fin >> N ;
	for (long int i=0 ; i<N ; i++ ) {fin >> a ; w.push_back(a); }
	sort(w.begin(),w.end());
	
	long int k=0,maxw=0;
	bool flag=false;
	int count =0;	
	
	if (N%2 == 1 ) {maxw+=w[N-1];}
	long int j=N-2;
	while ( j > k) {
		if (w.at(k) + w.at(j) > maxw) {
			maxw=w.at(k)+w.at(j);
		}
		++k;
		--j;
		count++;
	}
	fout << count<<" "<<maxw<<endl ;
}		
