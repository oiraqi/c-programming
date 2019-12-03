int is_prime(int p) {
	int i;
	for(i=2; i<p; i++){
		if(!(p%i))
			return 0;
	}
	return 1;
}

long fib(int p) {
	long f0 = 0, f1 = 1, f2;
	int i;
	if(p < 2)
		return p;

	for(i=2; i<=p; i++){
		f2 = f0 + f1;
		f0 = f1;
		f1 = f2;
	}
	return f2;	
}

