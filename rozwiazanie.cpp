#include <iostream>
int licz(char polecenie, int n) {
int a;
if(n==0) return 0;
else if (n==1) return 1;
switch(polecenie) {
case 'i':
std::cout << "i" << std::endl;
a = licz('i', n-1)+1;
if(pow(sqrt(n),2) == n) {
	if(a > licz('s', n-1)+1) {
		a = licz('s', n-1)+1;
	}
}
return a;
break;
case 'd':
if(pow(sqrt(n),2) == n) {
	a = licz('s', n+1)+1;
} else {
	std::cout << "d" << std::endl;
	a = licz('d', n+1)+1;
}
return a;
break;
case 's':
std::cout << "s" << std::endl;
a = licz('i', sqrt(n))+1;
if(a > licz('d', sqrt(n))+1) {
	a = licz('d', sqrt(n))+1;
}
if(pow(sqrt(n),2) == n) {
	if(a > licz('s', sqrt(n))+1) {
		a = licz('s', sqrt(n))+1;
	}
}
return a;
break;
default:
int a[2];
a[0] = licz('i', n-1)+1;
//a[1] = licz('d', n+1)-1;
int m = a[0];
//for(int i=1; i<2; i++) {
//	if(m>a[i]) m = a[i];	
//}
return m;
break;
}
}
