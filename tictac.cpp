/**********************************
           Programmer: Kulpat Bhaskar
           CSE: UCER Allahabad
           This Tic Tac Toe
**********************************/
#include <iostream.h>
#include <string.h>
#include <conio.h>
#include <dos.h>
#include <io.h>
#include <stdio.h>
#include <process.h>

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();

int main()
{
_setcursortype(_NOCURSOR);
clrscr();
FILE *stream;
int x1=0, x2=0, x3=0, x4=0, x5=0, x6=0, x7=0, x8=0, x9=0;
int o1=0, o2=0, o3=0, o4=0, o5=0, o6=0, o7=0, o8=0, o9=0;
int a1=0, a2=0, a3=0, a4=0, a5=0, a6=0, a7=0, a8=0, a9=0;
int o123=0, o456=0, o789=0, o147=0, o258=0, o369=0, o159=0, o357=0;
int x123=0, x456=0, x789=0, x147=0, x258=0, x369=0, x159=0, x357=0;
int lo, di, delayx, delayload, delayint, sleep2, full=0, full2=0, n, nowin=0;
char x, ver, opt, choices, choices2, race, code[100], uninst, colcho, quit, name[100], cha;
int xwin=0, owin=0, gameno=0, race2, fullver, pat=8, xs=10, os=9, htxt=15, txt=8, xlo=20;

if(access("c:\\proinfo.txt", 0)==-1)
  {
  stream=fopen("c:\\proinfo.txt", "w");
  textcolor(8);
  gotoxy(1,1);cprintf("Enter name: ");
  textcolor(15);
  cscanf("%s", name);
  fprintf(stream, name);
  fclose(stream);
  }

if(access("c:\\DSI.tic", 0)==0)
  {
  delayx=0;
  delayint=0;
  sleep2=0;
  }
else
  {
  sleep2=2;
  delayx=1;
  delayint=100;
  }
if(access("c:\\fastlo.pro", 0)==0)
  delayload=50;
else
  delayload=200;

if(access("c:\\theme1.col", 0)==0)
  {
  pat=8;
  xs=9;
  os=10;
  txt=15;
  htxt=8;
  }
else if(access("c:\\theme2.col", 0)==0)
  {
  pat=8;
  xs=2;
  os=1;
  txt=8;
  htxt=7;
  }
else if(access("c:\\theme3.col", 0)==0)
  {
  pat=8;
  xs=7;
  os=15;
  txt=7;
  htxt=15;
  }

intro:
clrscr();
sleep(sleep2);
textcolor(15);
gotoxy(42,13);cprintf("T");
delay(delayint);
textcolor(0);
gotoxy(42,13);cprintf(" ");
textcolor(15);
gotoxy(41,13);cprintf("C");
delay(delayint);
textcolor(0);
gotoxy(41,13);cprintf(" ");
textcolor(15);
gotoxy(40,13);cprintf("E");
delay(delayint);
textcolor(0);
gotoxy(40,13);cprintf(" ");
textcolor(15);
gotoxy(39,13);cprintf("J");
delay(delayint);
textcolor(0);
gotoxy(39,13);cprintf(" ");
textcolor(15);
gotoxy(38,13);cprintf("O");
delay(delayint);
textcolor(0);
gotoxy(38,13);cprintf(" ");
textcolor(15);
gotoxy(37,13);cprintf("R");
delay(delayint);
textcolor(0);
gotoxy(37,13);cprintf(" ");
delay(delayint);
textcolor(15);
gotoxy(36,13);cprintf("P");
delay(delayint);
textcolor(0);
gotoxy(36,13);cprintf(" ");
delay(delayint);
textcolor(15);
gotoxy(34,13);cprintf("+");
delay(delayint);
textcolor(0);
gotoxy(34,13);cprintf(" ");
delay(delayint);
textcolor(15);
gotoxy(33,13);cprintf("+");
delay(delayint);
textcolor(0);
gotoxy(33,13);cprintf(" ");
delay(delayint);
textcolor(15);
gotoxy(32,13);cprintf("C");
delay(delayint);
textcolor(0);
gotoxy(32,13);cprintf(" ");
delay(delayint);
textcolor(15);
gotoxy(32,13);cprintf("C");
delay(delayint);
textcolor(8);
gotoxy(32,13);cprintf("C");
textcolor(15);
gotoxy(33,13);cprintf("+");
delay(delayint);
textcolor(8);
gotoxy(33,13);cprintf("+");
delay(delayint);
textcolor(15);
gotoxy(34,13);cprintf("+");
delay(delayint);
textcolor(8);
gotoxy(34,13);cprintf("+");
delay(delayint);
textcolor(15);
gotoxy(36,13);cprintf("P");
delay(delayint);
textcolor(8);
gotoxy(36,13);cprintf("P");
delay(delayint);
textcolor(15);
gotoxy(37,13);cprintf("R");
delay(delayint);
textcolor(8);
gotoxy(37,13);cprintf("R");
delay(delayint);
textcolor(15);
gotoxy(38,13);cprintf("O");
delay(delayint);
textcolor(8);
gotoxy(38,13);cprintf("O");
textcolor(15);
gotoxy(39,13);cprintf("J");
delay(delayint);
textcolor(8);
gotoxy(39,13);cprintf("J");
textcolor(15);
gotoxy(40,13);cprintf("E");
delay(delayint);
textcolor(8);
gotoxy(40,13);cprintf("E");
textcolor(15);
gotoxy(41,13);cprintf("C");
delay(delayint);
textcolor(8);
gotoxy(41,13);cprintf("C");
textcolor(15);
gotoxy(42,13);cprintf("T");
delay(delayint);
textcolor(8);
gotoxy(42,13);cprintf("T");
textcolor(15);

sleep(sleep2);
clrscr();
textcolor(pat);
gotoxy(34,1);cprintf("TIC");
sleep(delayx);
gotoxy(38,1);cprintf("TAC");
sleep(delayx);
textcolor(pat);
gotoxy(34,3);cprintf("   Û   Û");
gotoxy(34,4);cprintf("ÜÜÜÛÜÜÜÛÜÜÜ");
gotoxy(34,5);cprintf("   Û   Û");
gotoxy(34,6);cprintf("ÜÜÜÛÜÜÜÛÜÜÜ");
gotoxy(34,7);cprintf("   Û   Û");
gotoxy(34,8);cprintf("   ß   ß");
sleep(delayx);
textcolor(os);
gotoxy(35,3);cprintf("o");
sleep(delayx);
textcolor(xs);
gotoxy(35,5);cprintf("x");
sleep(delayx);
textcolor(os);
gotoxy(43,3);cprintf("o");
sleep(delayx);
textcolor(xs);
gotoxy(39,3);cprintf("x");
sleep(delayx);
textcolor(os);
gotoxy(43,7);cprintf("o");
sleep(delayx);
textcolor(xs);
gotoxy(43,5);cprintf("x");
sleep(delayx);
textcolor(os);
gotoxy(39,5);cprintf("o");
sleep(delayx);
textcolor(txt);
gotoxy(33,14);cprintf(" lay game");
gotoxy(37,18);cprintf("E it");
gotoxy(36,20);cprintf(" redits");
gotoxy(1,25);cprintf("Guided By- Partho Ghosh Sir");
textcolor(100);
gotoxy(34,1);cprintf("TIC TAC");
textcolor(htxt);
gotoxy(33,14);cprintf("P");
gotoxy(38,18);cprintf("x");
gotoxy(36,20);cprintf("C");
verback:
gotoxy(1,1);cscanf("%c", &ver);
if(ver=='p' || ver=='P')
{
clrscr();
for(lo=28; lo<=53; lo++)
{
textcolor(8);
gotoxy(lo,14);cprintf("ÛÛ");
}

for(lo=0, di=28; lo<=100; lo+=4, di++)
{
textcolor(15);
gotoxy(28,12);cprintf("initializing game...");
gotoxy(28,13);cprintf("%d%", lo);
gotoxy(di,14);cprintf("ÛÛ");
delay(delayload);
}

sleep(2);

clrscr();
textcolor(15);
gotoxy(34,1);cprintf("TIC TAC");
textcolor(11);
gotoxy(42,1);cprintf("PRO");
textcolor(pat);
gotoxy(34,3);cprintf(" 1 Û 2 Û 3");
gotoxy(34,4);cprintf("ÜÜÜÛÜÜÜÛÜÜÜ");
gotoxy(34,5);cprintf(" 4 Û 5 Û 6");
gotoxy(34,6);cprintf("ÜÜÜÛÜÜÜÛÜÜÜ");
gotoxy(34,7);cprintf(" 7 Û 8 Û 9");
gotoxy(34,8);cprintf("   ß   ß");
backgame:
textcolor(txt);
gotoxy(1,25);cprintf("E it");
textcolor(htxt);
gotoxy(2,25);cprintf("x");
gotoxy(31,10);cprintf("Enter your choice!");

y:
textcolor(os);
gotoxy(39,9);cprintf("o");
textcolor(0);
gotoxy(50,10);cscanf("%c", &x);
textcolor(os);
if(x=='1')
  {
  if(a1==1)
    goto y;
  gotoxy(35,3);cprintf("o");
  a1++;
  o123++;
  o147++;
  o159++;
  full++;
  if(o123==3 || o147==3 || o159==3)
    goto owins;
  else if(full==9)
    goto g;
  else
    goto z;
  }
else if(x=='2')
  {
  if(a2==1)
    goto y;
  gotoxy(39,3);cprintf("o");
  a2++;
  o123++;
  o258++;
  full++;
  if(o123==3 || o258==3)
    goto owins;
  else if(full==9)
    goto g;
  else
    goto z;
  }
else if(x=='3')
  {
  if(a3==1)
    goto y;
  gotoxy(43,3);cprintf("o");
  a3++;
  o123++;
  o369++;
  o357++;
  full++;
  if(o123==3 || o369==3 || o357==3)
    goto owins;
  else if(full==9)
    goto g;
  else
    goto z;
  }
else if(x=='4')
  {
  if(a4==1)
    goto y;
  gotoxy(35,5);cprintf("o");
  a4++;
  o147++;
  o456++;
  full++;
  if(o147==3 || o456==3)
    goto owins;
  else if(full==9)
    goto g;
  else
    goto z;
  }
else if(x=='5')
  {
  if(a5==1)
    goto y;
  gotoxy(39,5);cprintf("o");
  a5++;
  o159++;
  o456++;
  o258++;
  o357++;
  full++;
  if(o159==3 || o456==3 || o258==3 || o357==3)
    goto owins;
  else if(full==9)
    goto g;
  else
    goto z;
  }
else if(x=='6')
  {
  if(a6==1)
    goto y;
  gotoxy(43,5);cprintf("o");
  a6++;
  o369++;
  o456++;
  full++;
  if(o369==3 || o456==3)
    goto owins;
  else if(full==9)
    goto g;
  else
    goto z;
  }
else if(x=='7')
  {
  if(a7==1)
    goto y;
  gotoxy(35,7);cprintf("o");
  a7++;
  o147++;
  o789++;
  o357++;
  full++;
  if(o147==3 || o789==3 || o357==3)
    goto owins;
  else if(full==9)
    goto g;
  else
    goto z;
  }
else if(x=='8')
  {
  if(a8==1)
    goto y;
  gotoxy(39,7);cprintf("o");
  a8++;
  o789++;
  o258++;
  full++;
  if(o789==3 || o258==3)
    goto owins;
  else if(full==9)
    goto g;
  else
    goto z;
  }
else if(x=='9')
  {
  if(a9==1)
    goto y;
  gotoxy(43,7);cprintf("o");
  a9++;
  o789++;
  o369++;
  o159++;
  full++;
  if(o789==3 || o369==3 || o159==3)
    goto owins;
  else if(full==9)
    goto g;
  else
    goto z;
  }
else if(x=='x' || x=='X')
  {
  quitback:
  textcolor(txt);
  gotoxy(1,25);cprintf("Are you sure?  es or  o");
  textcolor(htxt);
  gotoxy(15,25);cprintf("y");
  gotoxy(22,25);cprintf("n");
  textcolor(0);
  gotoxy(1,25);cscanf("%c", &quit);
  if(quit=='y' || quit=='Y')
    goto g3;
  else if(quit=='n' || quit=='N')
    {
    gotoxy(1,25);cprintf("                       ");
    goto backgame;
    }
  else
    goto quitback;
  }
else
  goto y;

z:
backgame2:
textcolor(txt);
gotoxy(1,25);cprintf("E it");
textcolor(htxt);
gotoxy(2,25);cprintf("x");
textcolor(xs);
gotoxy(39,9);cprintf("x");
textcolor(0);
gotoxy(50,10);cscanf("%c", &x);
textcolor(xs);
if(x=='1')
  {
  if(a1==1)
    goto z;
  gotoxy(35,3);cprintf("x");
  a1++;
  x123++;
  x147++;
  x159++;
  full++;
  if(x123==3 || x147==3 || x159==3)
    goto xwins;
  else if(full==9)
    goto g;
  else
    goto y;
  }
else if(x=='2')
  {
  if(a2==1)
    goto z;
  gotoxy(39,3);cprintf("x");
  a2++;
  x123++;
  x258++;
  full++;
  if(x123==3 || x258==3)
    goto xwins;
  else if(full==9)
    goto g;
  else
    goto y;
  }
else if(x=='3')
  {
  if(a3==1)
    goto z;
  gotoxy(43,3);cprintf("x");
  a3++;
  x123++;
  x369++;
  x357++;
  full++;
  if(x123==3 || x369==3 || x357==3)
    goto xwins;
  else if(full==9)
    goto g;
  else
    goto y;
  }
else if(x=='4')
  {
  if(a4==1)
    goto z;
  gotoxy(35,5);cprintf("x");
  a4++;
  x147++;
  x456++;
  full++;
  if(x147==3 || x456==3)
    goto xwins;
  else if(full==9)
    goto g;
  else
    goto y;
  }
else if(x=='5')
  {
  if(a5==1)
    goto z;
  gotoxy(39,5);cprintf("x");
  a5++;
  x258++;
  x456++;
  x159++;
  x357++;
  full++;
  if(x258==3 || x456==3 || x159==3 || x357==3)
    goto xwins;
  else if(full==9)
    goto g;
  else
    goto y;
  }
else if(x=='6')
  {
  if(a6==1)
    goto z;
  gotoxy(43,5);cprintf("x");
  a6++;
  x456++;
  x369++;
  full++;
  if(x456==3 || x369==3)
    goto xwins;
  else if(full==9)
    goto g;
  else
    goto y;
  }
else if(x=='7')
  {
  if(a7==1)
    goto z;
  gotoxy(35,7);cprintf("x");
  a7++;
  x147++;
  x789++;
  x357++;
  full++;
  if(x147==3 || x789==3 || x357==3)
    goto xwins;
  else if(full==9)
    goto g;
  else
    goto y;
  }
else if(x=='8')
  {
  if(a8==1)
    goto z;
  gotoxy(39,7);cprintf("x");
  a8++;
  x789++;
  x258++;
  full++;
  if(x789==3 || x258==3)
    goto xwins;
  else if(full==9)
    goto g;
  else
    goto y;
  }
else if(x=='9')
  {
  if(a9==1)
    goto z;
  gotoxy(43,7);cprintf("x");
  a9++;
  x369++;
  x789++;
  x159++;
  full++;
  if(x369==3 || x789==3 || x159==3)
    goto xwins;
  else if(full==9)
    goto g;
  else
    goto y;
  }
else if(x=='x' || x=='X')
  {
  quitback2:
  textcolor(txt);
  gotoxy(1,25);cprintf("Are you sure?  es or  o");
  textcolor(htxt);
  gotoxy(15,25);cprintf("y");
  gotoxy(22,25);cprintf("n");
  textcolor(0);
  gotoxy(1,25);cscanf("%c", &quit);
  if(quit=='y' || quit=='Y')
    goto g3;
  else if(quit=='n' || quit=='N')
    {
    gotoxy(1,25);cprintf("                       ");
    goto backgame2;
    }
  else
    goto quitback2;
  }
else
  goto z;

owins:
sleep(2);
clrscr();

textcolor(os);
gotoxy(36,13);cprintf("o");
textcolor(15);
gotoxy(38,13);cprintf("wins!");
sleep(2);
if(ver=='t' || ver=='T')
  {
  owin++;
  if(owin==race2)
    {
    textcolor(os);
    gotoxy(34,13);cprintf("o");
    textcolor(15);
    gotoxy(36,13);cprintf("champion!");
    sleep(2);
    goto g3;
    }
  else
    goto tour2;
  }
else
  goto g3;


xwins:
sleep(2);
clrscr();
textcolor(xs);
gotoxy(36,13);cprintf("x");
textcolor(15);
gotoxy(38,13);cprintf("wins!");
sleep(2);
if(ver=='t' || ver=='T')
  {
  xwin++;
  if(xwin==race2)
    {
    textcolor(xs);
    gotoxy(34,13);cprintf("x");
    textcolor(15);
    gotoxy(36,13);cprintf("champion!");
    sleep(2);
    goto g3;
    }
  else
    goto tour2;
  }
else
  goto g3;

g:
sleep(2);
if(ver=='t' || ver=='T')
  {
  goto tour2;
  }
g3:
clrscr();
textcolor(4);
gotoxy(35,13);cprintf("GAME OVER!");
goto intro;
clrscr();
textcolor(8);
gotoxy(1,1);cprintf("Thanks for playing ");
stream=fopen("c:\\proinfo.txt", "r");
fseek(stream, 0, SEEK_SET);
do
  {
  cha=fgetc(stream);
  textcolor(15);
  gotoxy(xlo,1);cprintf("%c", cha);
  xlo++;
  }
while (cha!=EOF);
textcolor(8);
gotoxy(xlo-1,1);cprintf("!!!");
tour2:
  x1=0, x2=0, x3=0, x4=0, x5=0, x6=0, x7=0, x8=0, x9=0;
  o1=0, o2=0, o3=0, o4=0, o5=0, o6=0, o7=0, o8=0, o9=0;
  a1=0, a2=0, a3=0, a4=0, a5=0, a6=0, a7=0, a8=0, a9=0;
  o123=0, o456=0, o789=0, o147=0, o258=0, o369=0, o159=0, o357=0;
  x123=0, x456=0, x789=0, x147=0, x258=0, x369=0, x159=0, x357=0;
  full=0, full2=0;
  gameno++;
  if(gameno%2==0)
    {
    n=1;
    nowin=1;
    }
  else
    n=0;
  exit(0);
}
else if(ver=='c' || ver=='C')
  {
  clrscr();
  textcolor(txt);
  gotoxy(1,1);cprintf(" rogrammers:");
  gotoxy(1,2);cprintf(" ulpat Bhaskar Rollno. 6643179");
  gotoxy(1,3);cprintf(" aurabh Behra  Rollno. 6643195");
  gotoxy(1,4);cprintf(" ishabh Kumar  Rollno. 6643192");
  gotoxy(1,6);cprintf(" pecial thanks to: artho Sir");
  gotoxy(1,8);cprintf(" Inspired by:  ic  ac  oe");
  gotoxy(1,25);cprintf(" ress any key to exit");
  textcolor(htxt);
  gotoxy(1,1);cprintf("P");
  gotoxy(1,2);cprintf("K");
  gotoxy(1,3);cprintf("S");
  gotoxy(1,4);cprintf("R");
  gotoxy(1,6);cprintf("S");
  gotoxy(19,6);cprintf("P");
  gotoxy(14,8);cprintf("T");
  gotoxy(18,8);cprintf("T");
  gotoxy(22,8);cprintf("T");
  gotoxy(1,25);cprintf("P");
  gotoxy(22,25);cprintf("...");
  getch();
  sleep2=0;
  delayx=0;
  delayint=0;
  goto intro;
  }
else if(ver=='x' || ver=='X')
{
	exit(0);
}
	getch();
	return 0;
}
