#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>

int main()
{
int gd,gm,midx,midy;
initwindow(600,600);
time_t rawtime;
struct tm * currenttime;
char a[100];
 midx=getmaxx()/2;//midpoint of x axis
// midy=getmaxy()/2;midpoint of y axis
 settextstyle(0,HORIZ_DIR,2);
 outtextxy(150,50,"TRAFFIC SIGNAL SIMULATOR");
 setcolor(WHITE);
 rectangle(midx-40,100,midx+40,320);
 rectangle(midx-15,320,midx+15,480);
 floodfill(midx-14,321,WHITE);
 circle(midx,140,30);
 circle(midx,210,30);
 circle(midx,280,30);



 //RED color blink
 setfillstyle(SOLID_FILL,RED);
 floodfill(midx,140,WHITE);
 setcolor(RED);
 outtextxy(400,130,"STOP");
 delay(1500);

 setfillstyle(SOLID_FILL,BLACK);
 floodfill(midx,140,WHITE);
 setcolor(BLACK);
 outtextxy(400,130,"STOP");

 //YELLOW COLOR BLINK
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(midx,210,WHITE);
 setcolor(YELLOW);
 outtextxy(400,200,"READY/SLOW");
 delay(1500);

 setfillstyle(SOLID_FILL,BLACK);
 floodfill(midx,210,WHITE);
 setcolor(BLACK);
 outtextxy(400,200,"READY/SLOW");

 //GREEN COLOR BLINK
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(midx,280,WHITE);
 setcolor(GREEN);
 outtextxy(400,270,"GO");
 delay(1500);

 setfillstyle(SOLID_FILL,BLACK);
 floodfill(midx,280,WHITE);
 setcolor(BLACK);
 outtextxy(400,270,"GO");
 
 
 	 for(int i=0;i<=getmaxx();i++)
	 {
	 setcolor(RED);
     settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
	 outtextxy(100, 150, "Here goes the car.");
	 setcolor(BROWN);
	 line(0,530,600,530); // road line
	 // for car outlet
	 setcolor(RED);
	 line(40+i,520,60+i,520); // 1st line
	 arc(70+i,522,0,180,10); //1st arc
	 line(80+i,520,120+i,520); // 2nd line
	 arc(130+i,522,0,180,10); // 2nd arc
	 line(140+i,520,170+i,520); // 3rd
	 line(170+i,520,170+i,505);// 4th
	 line(170+i,505,140+i,495); // 5th
	 line(140+i,495,130+i,480); // 6th
	 line(130+i,480,70+i,480);  // 7th
	 line(70+i,480,60+i,495); // 8th
	 line(60+i,495,40+i,500); // 9th
	 line(40+i,500,40+i,520); // 10th
	 
	 //for tires
	 setcolor(YELLOW);
	 circle(70+i,522,7); // 1st circle
	 circle(130+i,522,7); // 2nd circle
	 
	 //for windows
	 setcolor(BLUE);
	 line(66+i,495,73+i,485); // 1th window
	 line(73+i,485,128+i,485); // 2nd window
	 line(128+i,485,135+i,495); // 3rd window
	 line(135+i,495,66+i,495);  // 4th window
	 line(90+i,495,90+i,485);  // 5th window
	 line(110+i,495,110+i,485); // 6th window
	 
	 //for head
	 setcolor(GREEN);
	 circle(120+i,490,4);
	 circle(78+i,490,4);
	 delay(30);
	 cleardevice();
    }
    setcolor(RED);
     settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
    outtextxy(100,200,"The car will return again....");
    outtextxy(130,250,"Until next time...");
    outtextxy(150,300,"See you again :D");
    
 getch();
 return 0;
}
