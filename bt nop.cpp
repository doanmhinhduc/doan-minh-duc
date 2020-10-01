# include < stdio.h >
int  main ()
{
	int i, n;
	dài S;
	S = 0 ;
	i = 1 ;
	printf ( " Nhap n: " );
	scanf ( " % d " , & n);

	trong khi (i <= n)
	{
		S + = i;
		i ++;
	}
	printf ( " \ n Tong 1 + 2 + ... +% d la% ld: " , n, S);
}
