#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main (){
	string n,k;
	getline(cin,n);
	getline(cin,k);
	int a=0,b=0;
	for(int i=0;i<n.length();i++){
		a++;
	}
	for(int i=0;i<k.length();i++){
		b++;
	}
	if (a<b){
		cout<<"<";
	}
	else if (a>b){
		cout<<">";
	}
	else if (a=b){
		cout<<"=";
	}
}