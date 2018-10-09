#include<stdio.h>
#include<math.h>
#include<windows.h>
int RightNum=0;
int WrongNum=0;
void add()
{
 int a,b,c;
 a=rand()%100;
 b=rand()%100;
 printf("Please Answer£º\n\t\t %d + %d = ",a,b);
 scanf("%d",&c);
 if(a+b==c)
 {
  printf("You are right!\n");
  RightNum++;
 }
 else
 {
  printf("You are wrong!\n");
  WrongNum++;
 }
}
void minu()
{
 int a,b,c;
 a=rand()%100;
 b=rand()%100;
 printf("Please Answer£º\n\t\t %d - %d = ",a,b);
 scanf("%d",&c);
 if(a-b==c)
 {
  printf("You are right!\n");
  RightNum++;
 }
 else
 {
  printf("You are wrong!\n");
  WrongNum++;
 }
}
void mul()
{
 int a,b,c;
 a=rand()%100;
 b=rand()%100;
 printf("Please Answer£º\n\t\t %d * %d = ",a,b);
 scanf("%d",&c);
 if(a*b==c)
 {
  printf("You are right!\n");
  RightNum++;
 }
 else
 {
  printf("You are wrong!\n");
  WrongNum++;
 }
}
void di()
{
 int a,b,c;
 a=rand()%100;
 b=rand()%100;
 printf("Please Answer£º\n\t\t %d / %d = ",a,b);
 scanf("%d",&c);
 if(a/b==c)
 {
  printf("You are right!\n");
  RightNum++;
 }
 else
 {
  printf("You are wrong!\n");
  WrongNum++;
 }
}
void que()
{
    int n,m;
	printf("How many question do you want to see?(4 questions at least)\n");
	scanf("%d",&n);
	for(m=1;m<=n;m++)
    {
        add();
		minu();
		di();
		mul();
    }



}
void main()
{
 int choise;
 int con=0;
 printf("\n\t\t\tWELCOME TO FOUR OPERATION\n\n");
 while(1)
 {
  printf("Write down your choise£º\n");
  printf("\t\t\t  1.ADD\n");
  printf("\t\t\t  2.SUBTRACT\n");
  printf("\t\t\t  3.MULTILPY\n");
  printf("\t\t\t  4.DIVIDE\n");
  printf("\t\t\t  5.QUESTIONS\n");
  printf("\t\t\t  6.EXIT\n");
  if(con==0)
   scanf("%d",&choise);
  switch(choise)
  {
  case 1:
   add();
   break;
  case 2:
   minu();
   break;
  case 3:
   mul();
   break;
  case 4:
   di();
   break;
  case 5:
   que();
  case 6:
   return;
  }
  printf("\n\t\t\t1.CONTINUE?\n");
  printf("\n\t\t\t2.CHOOSE AGAIN\n");
  printf("\n\t\t\t3.EXIT\n");
  scanf("%d",&con);
  if(con==1)
   con=1;
  else if(con==2)
   con=0;
  else if(con==3)
   break;
  else
   printf("Please input right choise\n");
 }
 printf("You've done %d questions\n right %d ,\n wrong %d \n",RightNum+WrongNum,RightNum,WrongNum);
}