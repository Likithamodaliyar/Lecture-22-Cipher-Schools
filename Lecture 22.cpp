#include<iostream>
using namespace std;
int main(){
	string name="Andhra";
	string*ptr=&name;
	cout<<ptr<<" "<<name<<endl;
	*ptr="chennai";
	cout<<*ptr<<" "<<name;
	return 0;
}
