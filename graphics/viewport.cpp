#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{

    float wxmin=25,wxmax=250,wymin=25,wymax=300,vxmin=350,vxmax=475,vymax=225,vymin=50;
    float x1=100,x2=50,x3=150,x4=50,x5=150,y1=100,y2=150,y3=150,y4=250,y5=250,vx,vy,sx,sy;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    rectangle(wxmin,wymin,wxmax,wymax);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    line(x2,y2,x4,y4);
    line(x4,y4,x5,y5);
    line(x5,y5,x3,y3);
    sx=(vxmax-vxmin)/(wxmax-wxmin);
    sy=(vymax-vymin)/(wymax-wymin);
    x1=vxmin+(x1-wxmin)*sx;
    y1=vymin+(y1-wymin)*sy;
    x2=vxmin+(x2-wxmin)*sx;
    y2=vymin+(y2-wymin)*sy;
    x3=vxmin+(x3-wxmin)*sx;
    y3=vymin+(y3-wymin)*sy;
    x4=vxmin+(x4-wxmin)*sx;
    y4=vymin+(y4-wymin)*sy;
    x5=vxmin+(x5-wxmin)*sx;
    y5=vymin+(y5-wymin)*sy;
    rectangle(vxmin,vymin,vxmax,vymax);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    line(x2,y2,x4,y4);
    line(x4,y4,x5,y5);
    line(x5,y5,x3,y3);
    getch();
    closegraph();

return 0;

}


