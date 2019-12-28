#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void textdisplay()
{
	cout<<"\n\t\t\t\tPROJECT No.:03\n";
	cout<<"\n\t\t\t\t\t....ARUN KHANAL....\n";
	getch();
}
void midpoint(int x1, int y1, int r)
{
       void circledraw(int,int,int,int);
	int x=0, y=r, p=1-r;
	while(x<=y)
	{
		x++;
		if(p<0)
			p=p+2*x+1;
		else
		{
			y--;
			p=p+2*x+1-2*y;
		}
		circledraw(x1,y1,x,y);
		//delay(100);
	}
	getch();
}
void circledraw(int x1, int y1, int x, int y)
{
	putpixel(x1+x,y1+y,7);
	putpixel(x1+y,y1+x,7);
	putpixel(x1-y,y1+x,7);
	putpixel(x1-x,y1+y,7);
	putpixel(x1-x,y1-y,7);
	putpixel(x1-y,y1-x,7);
	putpixel(x1+y,y1-x,7);
	putpixel(x1+x,y1-y,7);
	getch();
}
void main()
{
	int gd=DETECT,gm;
	int x=350, y=200, r=150;
	textdisplay();
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	midpoint(x,y,r);
	getch();
}

