/* Cau 1 -----------------------
---MSSV:110126211	 
---Ho ten:Pham Minh Man
-----------------------------*/

#include<stdio.h>

int main()
{
	int p, a, b;
	
	printf("\tTinh chu vi hinh chu nhat\n");
	printf("Nhap chieu dai, rong cua hinh chu nhat\na: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("Chieu dai, rong cua hinh chu nhat la %d, %d", a, b);
	
	p = (a + b) * 2;
	
	printf("\nChu vi hinh chu nhat p = (%d + %d) * 2 = %d", a, b, p);
	
	return 0;
	
}

