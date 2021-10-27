#include <iostream>
int licz(char polecenie, int n) {
int a;
if (n==1){
	return 0;
}

switch(polecenie) {
case 'i':
	n = n-1;
	a = licz('i', n)+1;
	if(isSquare(n)) {
		if(a > licz('s', n)+1) {
			a = licz('s', n)+1;
		}
	}
	return a;
break;
case 'd':
	n = n+1;
	a = licz('d', n)+1;
	if(a > licz('i', n)+1) {
		a = licz('i', n)+1;
	}
	if(isSquare(n)) {
		if(a > licz('s', n)+1) {
			a = licz('s', n)+1;
		}
	}
	return a;
break;
case 's':
	n = sqrt(n);
	a = licz('i', n)+1;
	if(isSquare(n)) {
		if(a > licz('s', n)+1) {
		a = licz('s', n)+1;
		}
	}
	return a;
break;
default:
int a[2];
a[0] = licz('i', n)+1;
if(isSquare(n)) a[1] = licz('s', n)+1;
//a[1] = licz('d', n+1)-1;
int m = a[0];
for(int i=1; i<2; i++) {
	if(m>a[i]) m = a[i];
}
return m;
break;
}
}
