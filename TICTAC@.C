#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
void game();
void end();

void main()
{
 int gd=DETECT,gm,x,y,i,l;
 initgraph(&gd,&gm,"C:\\tc\\bgi");
 setbkcolor(BLUE);
  settextstyle(1,0,5);
  setcolor(RED);

    setcolor(YELLOW);
   outtextxy(200,120,"TICTAC-TOE");
   settextstyle(1,0,1);
   setcolor(WHITE);

   line(260,285,380,285);
   line(260,245,380,245);
   line(300,210,300,322);
   line(340,210,340,322);
   setcolor(GREEN);
   outtextxy(277,215,"X");
    outtextxy(315,215,"O");
    outtextxy(315,252,"X");
    outtextxy(277,252,"O");
    outtextxy(355,293,"X");
    settextstyle(1,0,1);
   setcolor(RED);
   line(274,215,367,313);
   outtextxy(210,370,"Press 1+Enter To Continue");
   for(i=0;i<700;i=i+200)
   {

   setcolor(WHITE);
    settextstyle(1,0,2);
    outtextxy(10,50+i,"WON !!");
    outtextxy(35,150+i,"LOSE !!");
    outtextxy(125,20+i,"LOSE !!");
    outtextxy(170,95+i,"WON !!");
    outtextxy(440,95+i,"WON !!");
    outtextxy(400,15+i,"LOSE !!");
    outtextxy(580,115+i,"WON !!");
    outtextxy(540,15+i,"LOSE !!");
    }
    for(i=0;i<700;i=i+400)
    {
    settextstyle(1,0,2);
    outtextxy(270,35+i,"WON !!");
    }

    scanf("%d",&l);
    if(l==1)
    initiate();

 getch();

 closegraph();
 restorecrtmode();
}
initiate()
{
 int gd=DETECT,gm,x,y,i,j;
 initgraph(&gd,&gm,"C:\\tc\\bgi");
 settextstyle(1,0,3);
 outtextxy(130,170,"Loading !  Please Wait...");
 rectangle(120,200,500,250);
 setcolor(RED);
 i=0;
 j=0;
 for(i=0;i<=378;i++)
 {
 line(121+i,201,121+i,249);
 delay(20);
	       }
  game();
  getch();

 closegraph();
 restorecrtmode();
}

void game()
{
 char a[3][3];
 int i,j,k=0,l,x,p,t=0;
 int y=0,o,m=0;
 char ch='X';
 int gd=DETECT,gm;
 char q[2];
 initgraph(&gd,&gm,"C:\\tc\\bgi");
 setcolor(RED);
 clrscr();
 for(x=0;x<3;x++)
 {
   for(p=0;p<3;p++)
   {
     a[x][p]=' ';
     }
 }
 setcolor(BLUE);
 line(80,20,530,20);
 outtextxy(80,10,"Press the following buttons to enter in respective boxes.");
 setcolor(GREEN);
 line(0,150,680,150);
 setcolor(RED);

 line(280,30,280,140);
 line(320,30,320,140);
 line(240,65,360,65);
 line(240,105,360,105);
 settextstyle(1,0,2);
 outtextxy(260,37,"1");
 outtextxy(300,37,"2");
 outtextxy(340,37,"3");
 outtextxy(260,71,"4");
 outtextxy(300,71,"5");
 outtextxy(340,71,"6");
 outtextxy(260,110,"7");
 outtextxy(300,110,"8");
 outtextxy(340,110,"9");
 setcolor(RED);
 line(200,260,440,260);
 line(200,370,440,370);
 line(280,180,280,460);
 line(360,180,360,460);
 setcolor(BLUE);
 while(y!=1)
 {
 scanf("%d",&k);
 if(ch=='X')
   {
     ch='O';
     o=1;
   }
   else
   {
     ch='X';
     o=2;
   }
settextstyle(1,0,3);
switch(k)
{
   case 1:if(a[0][0]==' ')
	  {
	   a[0][0]=ch;
	   q[0]=ch;
	   q[1]='\0';
	   t=t+1;
	   outtextxy(240,200,q);
	   }
	   break;

   case 2:if(a[0][1]==' ')
	  {
	   a[0][1]=ch;
	   q[0]=ch;
	   q[1]='\0';
	   t=t+1;
	   outtextxy(320,200,q);
	   }
	  break;
   case 3:if(a[0][2]==' ')
	  {
	   a[0][2]=ch;
	   q[0]=ch;
	   q[1]='\0';
	   t=t+1;
	   outtextxy(400,200,q);
	   }
	  break;
   case 4:if(a[1][0]==' ')
	  {
	   a[1][0]=ch;
	   q[0]=ch;
	   q[1]='\0';
	   t=t+1;
	   outtextxy(240,300,q);
	   }
	  break;
   case 5:if(a[1][1]==' ')
	  {
	   a[1][1]=ch;
	   q[0]=ch;
	   q[1]='\0';
	   t=t+1;
	   outtextxy(320,300,q);
	   }
	  break;
   case 6:if(a[1][2]==' ')
	  {
	   a[1][2]=ch;
	   q[0]=ch;
	   q[1]='\0';
	   t=t+1;
	   outtextxy(400,300,q);
	   }
	  break;
   case 7:if(a[2][0]==' ')
	  {
	   a[2][0]=ch;
	   q[0]=ch;
	   q[1]='\0';
	   t=t+1;
	   outtextxy(240,400,q);
	   }
	  break;
   case 8:if(a[2][1]==' ')
	  {
	   a[2][1]=ch;
	   q[0]=ch;
	   q[1]='\0';
	   t=t+1;
	   outtextxy(320,400,q);
	   }
	  break;
   case 9:if(a[2][2]==' ')
	  {
	   a[2][2]=ch;
	   q[0]=ch;
	   q[1]='\0';
	   t=t+1;
	   outtextxy(400,400,q);
	   }
	  break;
   }

     printf("\n");


   if((a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X') || (a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='O'))
   {
     m=1;
     y=1;
     break;
   }
   else
   if((a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X') || (a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='O'))
   {
     m=1;
     y=1;
     break;
   }
   else
   if((a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X') || (a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O'))
   {
     m=1;
     y=1;
     break;
   }
   else
   if((a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X') || (a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O'))
   {
     m=1;
     y=1;
     break;
   }
    else

   if((a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X') || (a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='O'))
   {
     m=1;
     y=1;
     break;
   }
   else
   if((a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X') || (a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O'))
   {
     m=1;
     y=1;
     break;
   }
    else
    if((a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X') || (a[0][1]=='O' && a[1][1]=='O' && a[2][1]=='O'))
   {
     m=1;
     y=1;
     break;
   }

    else
   if((a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X') || (a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O'))
   {
     m=1;
     y=1;
     break;
   }
   else
   if(t==9)
   y=1;

     }


     line(80,20,530,20);
     setcolor(BLUE);
 if(m==1)
 {
 if(o==1)
 {
   outtextxy(220,450,"Player 1 has WON!!.");
   }
   else
   if(o==2)
   {
   outtextxy(220,450,"Player 2 has WON!!.");
 }  }
   else
   outtextxy(210,450,"The match was a TIE!!.");
   delay(2000);
   end();
  getch();
  closegraph();
 restorecrtmode();
  }


void end()
{
int l;
int gd=DETECT,gm,x,y,i;
 initgraph(&gd,&gm,"C:\\tc\\bgi");
 setbkcolor(WHITE);
  settextstyle(1,0,5);
  setcolor(RED);

    setcolor(BLUE);
   outtextxy(200,90,"THANK YOU!!");
   settextstyle(1,0,1);
   setcolor(BLUE);

   line(260,245,380,245);
   line(260,205,380,205);
   line(300,170,300,282);
   line(340,170,340,282);
   setcolor(GREEN);
   outtextxy(277,175,"X");
   outtextxy(315,175,"O");
   outtextxy(315,212,"X");
   outtextxy(277,212,"O");
   outtextxy(355,253,"X");

   settextstyle(1,0,2);
   setcolor(RED);
   line(274,175,367,273);
   outtextxy(170,370,"Press '1+Enter' To PLAY AGAIN");
   outtextxy(120,400,"Press 'Any other number+Enter' To Exit");

   scanf("%d",&l);
   if(l==1)
   {
   game();
   }
   else
   {
   exit();
    }


 getch();

 closegraph();
 restorecrtmode();
 }

