int i(int n) {
	return n+1;
}

int d(int n) {
	return n-1;
}

int s(int n) {
	return n*n;
}

int p(int n) {
	int c[6];
	for(int i=0; i<6; i++) c[i] = 0;
	int i = 0;
	while(n>9) {
		int a = n%10; //jedności
		c[i] = a;
		n=n-a;
		n/=10;
		i++;
	}
	c[i] = n;
	for(int j=i; j>=0; j--) {
		for(int k=i; k>0; k--) {
			int x = c[k];
			if(c[k] < c[k-1]) {
				c[k] = c[k-1];
				c[k-1] = x;
			}
		}
	}
	n = 0;
	for(int k=i; k>=0; k--) {
		n += c[k]*pow(10,k);
	}
	return n;
}
