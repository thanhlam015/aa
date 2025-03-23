#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
	int n;
	cin>>n;
	int tong=1;
	int tongs=2;
	int tongc=0;
	for(int i=0;i<n+1;i++){
		tongc=tong+tongs;
		tong=tongs+tongc;
		tongs=tong+tongc;
			cout<<tong<<endl<<tongs<<endl<<tongc<<endl;
	}

	return 0;
}
