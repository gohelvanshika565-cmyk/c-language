#include<stdio.h>
#include<conio.h>
int main()
{
	char ch='a'; //ch is a
	
	do{
		printf("%c ",ch); // print:a, e, i, m, q, u, y
		ch+=4;   // +4 = e, +4 = i, +4 = m, +4 = q, +4 = u, +4 = y
	}
	while(ch<='z');  // e<=z is true, i<=z is true , m is true, q is true, u is true, y is true
	
	return 0;
}
