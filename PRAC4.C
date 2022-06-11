#include<graphics.h>

#include<dos.h>

#include<conio.h>

void boundaryFill(int x, int y, int fill_color,int boundary_color)

{

    if(getpixel(x, y) != boundary_color &&

       getpixel(x, y) != fill_color)

    {

	putpixel(x, y, fill_color);
	boundaryFill(x + 1, y, fill_color, boundary_color);
	boundaryFill(x, y + 1, fill_color, boundary_color);
	boundaryFill(x - 1, y, fill_color, boundary_color);
	boundaryFill(x, y - 1, fill_color, boundary_color);
	boundaryFill(x - 1, y - 1, fill_color, boundary_color);
	boundaryFill(x - 1, y + 1, fill_color, boundary_color);
	boundaryFill(x + 1, y - 1, fill_color, boundary_color);
	boundaryFill(x + 1, y + 1, fill_color, boundary_color);

    }

}

void main()

{

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    rectangle(50, 50, 100, 100);
    boundaryFill(55, 55, 4, 15);
    delay(10);
    getch();
    closegraph();

}