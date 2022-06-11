
// program to fill polygon using floodfill 
// algorithm 
#include <graphics.h> 
#include <stdio.h>
#include<conio.h>
// flood fill algorithm
void flood(int x, int y, int new_col, int old_col)
{   delay(2);
    // check current pixel is old_color or not
    if (getpixel(x, y) == old_col) {

	// put new pixel with new color
	putpixel(x, y, new_col);

	// recursive call for bottom pixel fill
	flood(x + 1, y, new_col, old_col);

	// recursive call for top pixel fill
	flood(x - 1, y, new_col, old_col);

	// recursive call for right pixel fill
	flood(x, y + 1, new_col, old_col);

	// recursive call for left pixel fill
	flood(x, y - 1, new_col, old_col);
    }
}

int main()
{
    int gd = DETECT,gm;
    int top, left, bottom, right, x, y, newcolor,oldcolor;
    // initialize graph
    initgraph(&gd, &gm, "C:\\TC\\BGI");



    top = left = 50;
    bottom = right = 300;

    // rectangle for print rectangle
    rectangle(left, top, right, bottom);

    // filling start cordinate
    x = 51;
    y = 51;

    // new color to fill
    newcolor = 12;

    // new color which you want to fill
    oldcolor = 0;

    // call for fill rectangle
    flood(x, y, newcolor, oldcolor);
    getch();

    return 0;
}