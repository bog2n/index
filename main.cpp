#include <iostream>
#include <math.h>
#include "funkcje.h"
#include "rozwiazanie.h"

using namespace std;


int main() {
	int n;
	int kroki=0;
	cin >> n;
	tak(n, &kroki);
	cout << kroki << endl;
	return 0;
}
