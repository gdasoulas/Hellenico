#include <iostream>
#include<list>
#include<fstream>
using namespace std;

int  main(){				

	ifstream fin;
	ofstream fout;
	fin.open("sort3.in");
	fout.open("sort3.out");
	list<int> a;
	int N,c;
	fin >> N ;
	for (int i=0; i<N;i++) {
		fin >> c ; 
		a.push_back(c);
	}
	list<int>::iterator it=a.begin(),next ;
	int count=0,temp, previous =1 ;
	while(it!=a.end()){
		next=it;
		++next; 	
		if (*it == 1 && previous ==1) {it++; previous =1;}	
		else if (*it == 1 && previous !=1 && next!=a.end() ) {
			it=a.erase(it);
			a.push_front(1);
			count++;
			previous =1;
			}
		else if(*it==1 && previous !=1 && next==a.end()) { 
			previous=1;
			a.pop_back();
			a.push_front(1);
			count++;
		} 
		else if (*it==2) {it++; previous=2;}
		else if (*it==3 && next!=a.end() && *next==3) {it++; previous=3;}
		else if (*it==3 && next!=a.end() && *next!=3) {
			it=a.erase(it);
			a.push_back(3); 
			count++;
			previous=3;
		}
		else it++;
	}
	fout << count << endl;
	return 0;

}
