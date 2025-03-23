#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main (){
	int n;string a="A";
	cin>>n;
    for(int i = 0; i < n; i++) {
        cout<<" ";
        if (a >="B" && a<="Z")
        	a++;
        for(int j = 1; j <= i; j++) {
            cout << a;
        }
        cout << endl;
    }
}