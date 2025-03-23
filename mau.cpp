#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int myStrlen(const char *s){
	int i=0;
	while(s[i]!='\0'){
		i++;
	}
	return i;
}
int main(){
	char s1[100];
	char s2[100];
	gets(s1);
	gets(s2);
	if (myStrlen(s1)<myStrlen(s2)){
		cout<<"<";
	}
	else if (myStrlen(s1) > myStrlen(s2)){
		cout<<">";
	}
	else if (myStrlen(s1) == myStrlen(s2)){
		cout<<"=";
	}
	
} 
