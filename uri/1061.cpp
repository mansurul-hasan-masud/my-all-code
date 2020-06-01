#include <stdio.h>

int main()
{
	int d1, d2, h1, h2, m1, m2, s1, s2, d1s, d2s, dts, day, hr, min, sec;
	scanf("%*s %d", &d1);
	scanf("%d %*s", &h1);
	scanf("%d %*s", &m1);
	scanf("%d", &s1);
	scanf("%*s %d", &d2);
	scanf("%d %*s", &h2);
	scanf("%d %*s", &m2);
	scanf("%d", &s2);
	
	d1s = (d1*(24*60*60))+(h1*3600)+(m1*60)+s1;
	d2s = (d2*(24*60*60))+(h2*3600)+(m2*60)+s2;
	dts = d2s-d1s;
	day = dts / 86400;
	dts = dts % 86400;
	hr = dts / 3600;
	dts = dts % 3600;
	min = dts / 60;
	sec = dts % 60;
	
	printf("%d dia(s)\n", day);
	printf("%d hora(s)\n", hr);
	printf("%d minuto(s)\n", min);
	printf("%d segundo(s)\n", sec);
	
	return 0;	
}
