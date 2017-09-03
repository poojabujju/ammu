#include <stdio.h>
#include <conio.h>
void main()
{
	int v[5],h,l,i;
	clrscr();
	for(i=0;i<5;i++)
        {
		printf("\nENTER VUE-%d: ",i+1);
		scanf("%d",&v[i]);
	}
	l=v[0];
	h=v[0];
	for(i=0;i<5;i++)
        {
		if(v[i]>h)
			h=v[i];
		else
                {
			if(v[i]<l)
				l=v[i];
		}
	}
	printf("\nHIGHEST VUE IS %d",h);
	printf("\nLOWEST VUE IS %d",l);
	getch();
}

