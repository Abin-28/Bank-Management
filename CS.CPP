
//**************************************************************************//
//                           MADE BY : ABIN SKARIA
//**************************************************************************//


//**************************************************************************//
//                           INCLUDED HEADER FILES
//**************************************************************************//

#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
#include<graphics.h>
#include<iomanip.h>
#include<ctype.h>

//**************************************************************************//
//	                       CLASS NAME : BANK
//**************************************************************************//

class bank
{
 public:
 int acc_nos;
 char  name[20];
 char  f_name[20];
 char  m_name[20];
 float  amount;

 /*Function Prototype*/
 int  account_nos();
 void  getdata();
 void  show();
 void  withdraw(float &);
 void  deposite(float &);

 /*Returning Values*/
 int getacc_nos()
 {return acc_nos;}

 char *getname()
 {return name;}

 char *getf_name()
 {return f_name;}

 char *getm_name()
 {return m_name;}

 };

//**************************************************************************//
//                 FUNCTION TO HAVE RANDOM ACCOUNT NUMBER
//**************************************************************************//

int bank::account_nos()
{
 randomize();
 acc_nos=random(10000);
 return acc_nos;
}

//**************************************************************************//
//       	      FUNCTIONS TO GET AND SHOW DATA
//**************************************************************************//

void bank::getdata()
{
 cout<<"\n\n\n\n\t\t \"ENTER DETAILS FOR THE NEW BANK ACCOUNT\" ";
 cout<<"\n\n\n\t\t Enter Name                   :\t";
 cin>>name;
 cout<<"\n\t\t Enter Father Name            :\t";
 cin>>f_name;
 cout<<"\n\t\t Enter Mothers Name           :\t";
 cin>>m_name;
 fflush(stdin);
 cout<<"\n\n\t\t Enter Money You Want To Add  :\t";
 cin>>amount;
 cout<<"\n\n\n\t\t Your Bank Account Number     :\t"<<account_nos();
}

void bank::show()
{
 cout<<"\n\t\t\t\t \"BANK DETAILS\" ";
 cout<<"\n\n\t\t ACCOUNT NUMBER   :"<<acc_nos;
 cout<<"\n\t\t NAME             :"<<name;
 cout<<"\n\t\t FATHER's NAME    :"<<f_name;
 cout<<"\n\t\t MOTHER's NAME    :"<<m_name;
 cout<<"\n\t\t CURRENT AMOUNT   :"<<amount;
 cout<<"\n\n";
}

//**************************************************************************//
//                    TO WITHDRAW OR DEPOSITE MONEY
//**************************************************************************//

void bank::deposite(float &amount)
{
 float d;
 cout<<"\n\t\t\t    \"TO DEPOSITE THE MONEY\" ";
 cout<<"\n\n     Current Amount In Your Account :"<<amount;
 cout<<"\n     Amount Of Money You Want To Deposite :";
 cin>>d;
 amount=amount+d;
 cout<<"\n     Amount :"<<amount;
}

void bank::withdraw(float &amount)
{
 float w;
 cout<<"\n\t\t\t    \"TO WITHDRAW THE MONEY\" ";
 cout<<"\n\n     Current Amount In Your Account :"<<amount;
 cout<<"\n     Amount Of Money You Want To Withdraw :";
 cin>>w;
 if(amount>=w)
 {
  amount=amount-w;
  cout<<"\n     Amount :"<<amount;
 }
 else
 {
  cout<<"\n\n      \"\"The Amount You Withdraw Is More Than The Amount In Your Account\"\" ";
 }
}

//**************************************************************************//
//      	   TO INVOKE WELCOME SCREEN, CREDIT SCREEN
//                            & ENDING SCREEN
//**************************************************************************//

void welcome()
{
 clrscr();
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");

 setbkcolor(RED);
 rectangle(10,10,630,470);
 settextstyle(10,0,4);
 setcolor(WHITE);
 outtextxy(150,35,"C++ PROJECT");
 delay(1000);
 settextstyle(8,0,6);
 outtextxy(50,180,"BANK MANAGEMENT");
 delay(1000);
 settextstyle(9,0,3);
 outtextxy(30,350,"Submitted To:");
 delay(1000);
 outtextxy(30,400,"ANUBHA SASANK");
 getch();
 clearviewport();

 setbkcolor(BLACK);
 for(int i=0,k=640;k>0,i<640;i++,k--)
 {
  setlinestyle(3,2,3);
  setcolor(WHITE);
  line(i,0,i,500);
  line(k,0,k,500);
  delay(2);
 }

 {
 for(int i=0;i<550;i+=2)
 {
  /***CAR BODY ***/
  setcolor(RED);
  line(-10+i,370,-75+i,370);
  arc(-110+i,370,0,180,35);
  line(-145+i,370,-255+i,370);
  arc(-290+i,370,0,180,35);
  line(-325+i,370,-380+i,370);
  line(-380+i,370,-380+i,315);
  line(-380+i,315,-330+i,300);
  line(-330+i,300,-290+i,250);
  line(-290+i,250,-130+i,250);
  line(-130+i,250,-80+i,300);
  line(-80+i,300,-10+i,320);
  line(-10+i,320,-10+i,370);

  /***CAR Headlight***/
  setcolor(YELLOW);
  line(-10+i,340,-40+i,340);
  line(-40+i,340,-40+i,315);

  /***CAR Windows***/
  setcolor(BLUE);
  line(-210+i,300,-210+i,260);
  line(-210+i,260,-290+i,260);
  line(-290+i,260,-320+i,300);
  line(-320+i,300,-210+i,300);

  line(-200+i,300,-200+i,260);
  line(-200+i,260,-135+i,260);
  line(-135+i,260,-95+i,300);
  line(-95+i,300,-200+i,300);

  /***CAR Wheels***/
  setcolor(DARKGRAY);
  circle(-110+i,370,30);
  circle(-290+i,370,30);
  circle(-110+i,370,15);
  circle(-290+i,370,15);

  delay(5);
  cleardevice();

  /***BANK***/
  setcolor(BROWN);
  line(450,403,450,50);
  line(450,50,640,50);
  line(450,100,640,100);

  /***WINDOWS***/
  setcolor(LIGHTBLUE);
  line(480,130,530,130);
  line(530,130,530,180);
  line(530,180,480,180);
  line(480,180,480,130);

  line(630,130,630,180);
  line(630,180,580,180);
  line(580,180,580,130);
  line(580,130,630,130);

  line(480,300,530,300);
  line(530,300,530,350);
  line(530,350,480,350);
  line(480,350,480,300);

  line(630,300,580,300);
  line(580,300,580,350);
  line(580,350,630,350);
  line(630,350,630,300);

  /***ROAD***/
  setcolor(LIGHTGRAY);
  line(0,403,640,403);

  setcolor(WHITE);
  setlinestyle(0,2,3);
  settextstyle(8,0,4);
  outtextxy(485,55,"B A N K");
 }
 clearviewport();
 }

 for (int c=0;c<200;++c)
 {
  setfillstyle(9,LIGHTRED);
  setcolor(BLUE);
  fillellipse(325,240,c*1.5,c);
  delay(10);
 }
 setcolor(BLACK);
 settextstyle(0,0,3);
 outtextxy(55,220,"B A N K - A C C O U N T");
 getch();
 clearviewport();
 }

void main()
{
 welcome();
 char s;
 bank b1;

 z:
 fstream f;
 f.open("bank.dat",ios::in|ios::out|ios::app|ios::ate|ios::binary);

 clearviewport();
 settextstyle(10,HORIZ_DIR,3);
 setbkcolor(BROWN);
 setcolor(WHITE);
 rectangle(10,10,630,470);

 outtextxy(100,15,"WHAT DO U WANT TO DO:");
 settextstyle(SANS_SERIF_FONT,0,3);
 outtextxy(50,100,"1 . TO MAKE A NEW BANK ACCOUNT");
 outtextxy(50,135,"2 . TO SHOW BANK DETAILS");
 outtextxy(50,170,"3 . TO DEPOSITE");
 outtextxy(50,205,"4 . TO WITHDRAW");
 outtextxy(50,240,"5 . TO SEARCHING FOR A BANK RECORD");
 outtextxy(50,275,"6 . TO MODIFY");
 outtextxy(50,310,"7 . TO DELETE");
 outtextxy(50,345,"8 . TO EXIT");

 int a;
 settextstyle(8,0,4);
 outtextxy(20,400, "ENTER YOUR CHOICE:");
 f.seekg(0);
 gotoxy(55,25);
 cin>>a;
 char x;
 gotoxy(1,1);

 switch (a)
 {

//**************************************************************************//
//                     	 CASE       : 1
//	                 DETAILS    : TO ADD A BANK RECORD
//**************************************************************************//

case 1:

 gotoxy(1,1);
 clearviewport();
 rectangle(10,10,630,470);
 setbkcolor(BLUE);

 fstream f;
 f.open("bank.dat",ios::in|ios::out|ios::ate|ios::app|ios::binary);

 char ans;
 settextstyle(SANS_SERIF_FONT,0,3);
 outtextxy(200,25,"NEW BANK ACCOUNT");
 cout<<"\n\n\n";

 b1.getdata();
 f.write((char *)&b1,sizeof(b1));

 settextstyle(8,0,1);
 outtextxy(250,410,"Do You Want To Continue:");
 cout<<"\n\n\t\t\t\t\t\t";
 ans=getchar();

 if(ans=='Y' || ans=='y')
 {
  getch();
  goto z;
 }
 else
 {
  break;
 }
//**************************************************************************//
//	               CASE       : 2
//	               DETAILS    : TO SHOW ALL BANK RECORDS
//**************************************************************************//

case 2:

{
 clearviewport();
 rectangle(10,10,630,470);
 setbkcolor(BLUE);


 fstream f;
 f.open("bank.dat",ios::in|ios::out|ios::ate|ios::app|ios::binary);
 char ans;
 f.seekg(0);

 int F=0;
 int password;

 settextstyle(SANS_SERIF_FONT,0,3);
 outtextxy(175,25,"TO SHOW ALL BANK RECORDS");

 cout<<"\n\n\n\n\n     Enter The Password: ";
 cin>>password;

 if(password==1234)
 {
  while(f.read((char *)&b1,sizeof(b1)) )
  {

   b1.show();
   F=1;

   if(f.eof()==1)
   {
    break;
   }
  }
  if(F==0)
  {
   cout<<"\n\n\n\n\n\n\t\t     \"Currently There Is No Record Contain\" ";
  }
 }
 f.close();
 settextstyle(8,0,1);
 outtextxy(250,410,"Do You Want To Continue:");
 cin>>ans;
 if(ans=='y'|| ans=='Y')
 goto z;
 else
 {
  closegraph();
  exit(1);
 }
}

//**************************************************************************//
//                      CASE       : 3
//                      DETAILS    : TO DEPOSITE THE AMOUNT
//**************************************************************************//

case 3:

{
 clearviewport();
 rectangle(10,10,630,470);
 setbkcolor(BLUE);
 char ans;
 float a;

 fstream f;
 bank b1;
 char name[20];

 f.open("bank.dat",ios::in|ios::binary);
 settextstyle(SANS_SERIF_FONT,0,3);
 outtextxy(200,25,"DEPOSITING THE AMOUNT");
 cout<<"\n\n\n\n\n\n     Enter Name Whose Amount To Be Deposited  :";
 cin>>name;
 int F=0;
 do
 {
  f.read((char*)&b1,sizeof(b1));
  if(f.eof()==1)
  {break;}
  if(strcmp(b1.name,name)==0)
  {
   F=1;
   b1.show();
   getchar();
   a=b1.amount;
   b1.deposite(a);
   b1.amount=a;
   int l=f.tellg();
   f.close();
   f.open("bank.dat",ios::out|ios::binary|ios::ate);
   f.seekg(l-sizeof(b1));
   f.write((char*)&b1,sizeof(b1));
  }
 }
 while(f);

 if(F==0)
 {
  cout<<"\n\n\t     \"THE NAME YOU ENTER DOES NOT EXIST IN THE FILE\" ";
 }
 f.close();
 settextstyle(8,0,1);
 outtextxy(250,410,"Do You Want To Continue:");

 cin>>ans;
 if(ans=='Y'||ans=='y')
 {
  getch();
  goto z;
 }
 else
  break;
}

//**************************************************************************//
//                      CASE       : 4
//                      DETAILS    : TO WITHDRAW THE AMOUNT
//**************************************************************************//

case 4:

{
 clearviewport();
 rectangle(10,10,630,470);
 setbkcolor(BLUE);
 char ans;
 float a;

 fstream f;
 bank b1;
 char name[20];

 f.open("bank.dat",ios::in|ios::binary);
 settextstyle(SANS_SERIF_FONT,0,3);
 outtextxy(200,25,"WITHDRAWING THE AMOUNT");
 cout<<"\n\n\n\n\n\n     Enter Name Whose Amount To Be Withdraw  :";
 cin>>name;
 int F=0;
 do
 {
  f.read((char*)&b1,sizeof(b1));
  if(f.eof()==1)
  {break;}
  if(strcmp(b1.name,name)==0)
  {
   F=1;
   b1.show();
   getchar();
   a=b1.amount;
   b1.withdraw(a);
   b1.amount=a;
   int l=f.tellg();
   f.close();
   f.open("bank.dat",ios::out|ios::binary|ios::ate);
   f.seekg(l-sizeof(b1));
   f.write((char*)&b1,sizeof(b1));
  }
 }
 while(f);

 if(F==0)
 {
  cout<<"\n\n\t\t \"THE NAME YOU ENTER DOES NOT EXIST\" ";
 }
 f.close();
 settextstyle(8,0,1);
 outtextxy(250,410,"Do You Want To Continue:");

 cin>>ans;
 if(ans=='Y'||ans=='y')
 {
  getch();
  goto z;
 }
 else
  break;
}

//**************************************************************************//
//	            CASE       : 5
//	            DETAILS    : TO SEARCHING FOR A BANK RECORD
//**************************************************************************//

case 5:

{
 y:
 gotoxy(1,1);
 clearviewport();
 rectangle(10,10,630,470);
 setbkcolor(BLUE);
 textbackground(3);
 textcolor(5);

 char ans;
 ifstream f;
 bank b1;
 int acc_nos, choice , F=0;
 char name[20];
 char f_name[20];  char m_name[30];

 f.open("bank.dat",ios::in|ios::binary);
 settextstyle(SANS_SERIF_FONT,0,3);
 outtextxy(175,25,"SEARCHING FOR A RECORD");
 cout<<"\n\n\n\n\n\t\t HOW DO YOU WANT TO SEARCH";
 cout<<"\n\n\t\t 1. Account Number";
 cout<<"\n\t\t 2. Name";
 cout<<"\n\t\t 3. Father Name";
 cout<<"\n\t\t 4. Mother Name";
 cout<<"\n\t\t 5. Exit";
 cout<<"\n\n\t\t What do you like to do : ";
 cin>>choice;
 if(choice==1)
 {
  cout<<"\n\t\t Enter The Account Number :";
  cin>>acc_nos;
  while(!f.eof())
  {
   f.read((char*)&b1,sizeof(b1));
   if(f.eof()==1)
   {break;}
   if(b1.getacc_nos()==acc_nos)
   {
    F=1;
    b1.show();
    getchar();
   }
  }
  if(F==0)
  {
   cout<<"\n\n\t\t \"THIS ACCOUNT NUMBER DOES NOT EXIST\" ";
   getch();
   clearviewport();
   goto y;
  }
 }
 else if(choice==2)
 {
  cout<<"\n\t\t Enter Name :";
  cin>>name;
  while(!f.eof())
  {
   f.read((char*)&b1,sizeof(b1));
   if(f.eof()==1)
   {break;}
   if(strcmp(b1.getname(),name)==0)
   {
    F=1;
    b1.show();
    getchar();
   }
  }
  if(F==0)
  {
   cout<<"\n\n\t\t \"THIS NAME DOES NOT EXIST\" ";
   getch();
   clearviewport();
   goto y;
  }
 }
 else if(choice==3)
 {
  cout<<"\n\t\t Enter Father Name :";
  cin>>f_name;
  while(!f.eof())
  {
   f.read((char*)&b1,sizeof(b1));
   if(f.eof()==1)
   {break;}
   if(strcmp(b1.getf_name(),f_name)==0)
   {
    F=1;
    b1.show();
    getchar();
   }
  }
  if(F==0)
  {
   cout<<"\n\n\t\t \"THIS FATHER NAME DOES NOT EXIST\" ";
   getch();
   clearviewport();
   goto y;
  }
 }
 else if(choice==4)
 {
  cout<<"\n\t\t Enter Mother Name :";
  cin>>m_name;
  while(!f.eof())
  {
   f.read((char*)&b1,sizeof(b1));
   if(f.eof()==1)
   {break;}
   if(strcmp(b1.getm_name(),m_name)==0)
   {
    F=1;
    b1.show();
    getchar();
   }
  }
  if(F==0)
  {
   cout<<"\n\n\t\t \"THIS MOTHER NAME DOES NOT EXIST\" ";
   getch();
   clearviewport();
   goto y;
  }
 }

 else if(choice==5)
 {
  clearviewport();
  goto z;
 }

 else
 {
  cout<<"\n\n\t\t WRONG CHOICE ";
  getch();
  clearviewport();
  goto y;
 }

 f.close();
 settextstyle(8,0,1);
 outtextxy(250,410,"Do You Want To Continue:");

 cin>>ans;
 if(ans=='Y'||ans=='y')
 {
  getch();
  goto z;
 }
 else
  break;
}

//**************************************************************************//
//	             CASE       : 6
//	             DETAILS    : TO MODIFY A RECORD
//**************************************************************************//

case 6:

{
 clearviewport();
 rectangle(10,10,630,470);
 setbkcolor(BLUE);
 setcolor(WHITE);

 char ans;
 fstream f; bank b1;
 int acc_nos, amount , F=0 ;
 char name[20];
 char f_name[20];
 char m_name[20];

 f.open("bank.dat",ios::in|ios::binary);
 settextstyle(SANS_SERIF_FONT,0,3);
 outtextxy(275,25,"MODIFYING");
 cout<<"\n\n\n\n\n     Enter Name Whose Record To Be Changed  :";
 cin>>name;
 do
 {
  f.read((char *)&b1,sizeof(b1));
  if(f.eof()==1)
  {break;}
  if(strcmp(b1.name,name)==0)
  {
   F=1;
   cout<<"\n\n\t            Account Number     :"<<b1.acc_nos;
   cout<<"\n\t            Father Name        :"<<b1.f_name;
   cout<<"\n\t            Mother Name        :" <<b1.m_name;
   cout<<"\n\t            Amount             :"<<b1.amount;
   getchar();

   cout<<"\n\n\n\t\t\t         Enter New Values" ;
   cout<<"\n\n\t            Enter Name          :";
   cin>>name;
   cout<<"\n\t            Enter Father Name   :";
   cin>>f_name;
   cout<<"\n\t            Enter Mother Name   :";
   cin>>m_name;

   strcpy(b1.name,name);
   strcpy(b1.f_name,f_name);
   strcpy(b1.m_name,m_name);
   int l=f.tellg();
   f.close();

   f.open("bank.dat",ios::out|ios::binary|ios::ate);
   f.seekg(l-sizeof(b1));
   f.write((char *)&b1,sizeof(b1));
  }
 }while(f);

 if(F==0)
 {
  cout<<"\n\n\t\t \"DOES NOT EXIST\" ";
 }

 f.close();
 settextstyle(8,0,1);
 outtextxy(250,410,"Do You Want To Continue:");

 cin>>ans;
 if(ans=='Y'||ans=='y')
 {
  getch();
  goto z;
 }
 else
  break;
}

//**************************************************************************//
//	             CASE       : 7
//	             DETAILS    : TO DELETE A BANK RECORD
//**************************************************************************//

case 7:

{
 clearviewport();
 rectangle(10,10,630,470);
 setbkcolor(BLUE);
 setcolor(WHITE);

 bank b1;
 fstream f;
 fstream f1;
 char name[20];
 int F=0;

 f.open("bank.dat",ios::in|ios::binary);
 f1.open("temp.dat",ios::out|ios::binary);
 settextstyle(8,0,3);
 outtextxy(250,30,"DELETING");
 cout<<"\n\n\n\n\n\n\n     Enter The  Name U Want To Delete:\t";
 cin>>name;

 f.seekg(0);
 do
 {
  f.read((char *)&b1,sizeof(b1));
  if(f.eof()==1)
  {break;}
  if(strcmp(b1.getname(),name)==0)
  {
   F=1;
   b1.show();
   getchar();
  }

  if(strcmp(b1.getname(),name)!=0)
  {
   int l=f.tellg();
   f.close();
   f.open("bank.dat",ios::out|ios::binary|ios::ate);
   f.seekg(-l*sizeof(b1),ios::cur);
   f1.write((char *)&b1,sizeof(b1));
  }
 }
 while(!f.eof());

 if(F==0)
 {
  cout<<"\n\n\t\t \"THE NAME YOU ENTER DOES NOT EXIST\" ";
 }

 f.close();
 f1.close();
 remove ("bank.dat");
 rename ("temp.dat","bank.dat");

 cout<<"\n\n\n\n\n\tPress Any Key...";
 getch();
 goto z;
}

//**************************************************************************//
//	                  CASE       : 8
//	                  DETAILS    : TO EXIT
//**************************************************************************//

case 8:

{
 if(getch())
 {
  clearviewport();
  setbkcolor(BLACK);
  for(int i=0,k=640;i<640,k>0;i++,k--)
  {
   setlinestyle(3,2,3);
   setcolor(WHITE);
   line(i,0,i,500);
   line(k,0,k,500);
   delay(2);
  }

  fflush(stdin);
  clearviewport();
  rectangle(10,10,630,470);
  setbkcolor(DARKGRAY);
  setcolor(BLUE);
  window(10,10,40,11);
  settextstyle(8,0,5);
  outtextxy(60,200,"\"THANKS FOR VISITING\"");
  getch();
  closegraph();
  exit(1);
 }
 else
 {
 goto z;
 }
}



default:
 settextstyle(8,0,3);
 outtextxy(400,410,"WRONG CHOICE");
 getch();
 goto z;

 }
}



