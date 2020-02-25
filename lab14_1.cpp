#include <iostream>
using namespace std;

int  a = 5;
char b = 'A';
char &c = b;
int *x = &a; 
char *y = &b;
int **z = &x;

int main(){

cout <<  a << " " << b << " " << c << " " << x << " " << (int*)y  << " " << z  << "\n";
cout <<  &a << " " <<  (void*)&b << " " << (void*) &c << " " << &x << " " << &y << " " << &z << "\n";

c = b ='F';
cout <<  a << " " <<  b << " " << c << " " << x << " " << (int*)y << " " << z << "\n";
*y = b = 'W';
cout <<  a << " " <<  b << " " << c << " " << x << " " << (int*)y << " " << z << "\n";

*x = a = 6;
cout <<  a << " " <<  b << " " << c << " " << x << " " << (int*)y << " " << z << "\n";

**z = a = 7;
cout <<  a << " " <<  b << " " << c << " " << x << " " << (int*)y << " " << z << "\n";

	return 0;
}
