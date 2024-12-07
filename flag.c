#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DELETE, gm, i, a = 246, b = 150, x = 428, y = -32, c = 6;
    initgraph(&gd, &gm, "c:\\TURBOC3\\BGI");
    ellipse(150, 400, 0, 180, 90, 20);
    line(240, 401, 60, 420);
    line(420, 401, 240, 420);
    ellipse(150, 440, 0, 180, 120, 30);
    line(30, 440, 30, 455);
    line(270, 440, 30, 455);
    ellipse(150, 480, 0, 180, 150, 40);
    rectangle(145, 10, 155, 380);
    for (i = 1; i < 121; i++ 0)
    {
        if (i > 80 && i < 121)
        {
            c = 2;
        }
        if (i > 40 && i < 81)
        {
            c = 15;
        }
        setcolor(c);
        ellipse(a, b, 49, 130, 140, 120);
        ellipse(x, y, 229, 310, 140, 120);
        b += 1;
        y += 1;
    }
    setcolor(1);
    circle(340, 121, 13);
    circle(340, 121, 14);
    line(340, 121, 341, 108);
    line(340, 121, 338, 108);
    line(340, 121, 336, 110);
    line(340, 121, 332, 110);
    line(340, 121, 329, 113);
    line(340, 121, 329, 117);
    line(340, 121, 327, 120);
    line(340, 121, 327, 123);
    line(340, 121, 328, 126);
    line(340, 121, 329, 129);
    line(340, 121, 332, 122);
    line(340, 121, 336, 122);
    line(340, 121, 333, 131);
    line(340, 121, 336, 133);
    line(340, 121, 340, 133);
    line(340, 121, 344, 133);
    line(340, 121, 347, 131);
    line(340, 121, 349, 128);
    line(340, 121, 352, 126);
    line(340, 121, 352, 122);
    line(340, 121, 352, 118);
    line(340, 121, 352, 114);
    line(340, 121, 349, 111);
    line(340, 121, 345, 110);

    c = 1;
    for (i = 1; i < 50; i++)
    {
        delay(250);
        setcolor(c);
        settextstyle(4, 0, 5);
        outtextxy(470, 250, "75th");
        outtextxy(250, 300, "CELEBRATION");
        outtextxy(0, 0, "Coding");
        outtextxy(0, 40, "Payal");
        c++;
        if (c == 15)
        {
            c = 1;
        }
        getch();
        closegraph();
        return (0);
    }
}