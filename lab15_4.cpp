#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int salub[] = {a,b,c,d};
	int N = sizeof(salub)/sizeof(salub[0]);

	for(int i=0; i<N; i++){
		int j = rand()%N;
		swap(salub[i],salub[j]);
	}
	a = salub[0];
	b = salub[1];
	c = salub[2];
	d = salub[3];
	
}