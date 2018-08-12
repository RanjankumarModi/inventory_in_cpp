#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void dwindow(char*,int,int,int,int);
struct sell
 {
 int pno,quant,dd,mm,yyyy;
 char pname[20],phn_no[20];
 float rate;
 };
struct customer
 {
 char cphno[11];
 char cname[20];
 char caddress[50];
 };
 struct pro_det
   {
    int no;
    char name[20];
    float price;
   };
   struct purchase1
 {
 int pno;
 char pname[20];
 float rate;
 };
 struct purchase2
 {
 int quant,dd,mm,yyyy;
 char manf[20];
 };
 main(void)
{
  char ch;
  int i=1;
  void cshow();
  void pinsert();
  void sshow();
  void ssearch();
  void update();
  void show();
  void add();
  void sadd();
  char sell();
  void cmodify();
  clrscr();
  textbackground(CYAN);
  textcolor(0);
  do
 {
  dwindow("==WELCOME==",10,2,34,10);
  if(ch==80&&i<3)
  i++;
  else if(ch==72&&i>1)
  i--;
  if(i==1)
  {
  textcolor(BLUE);
  gotoxy(5,3);
  cprintf("\n1.SELL");
  textcolor(BLACK);
  gotoxy(5,4);
  cprintf("\n2.PURCHASE");
  gotoxy(5,5);
  cprintf("\n3.CUSTOMER");
  if((ch=getch())==13)
  ch='1';
  clrscr();
  }
  if(i==2)
  {
  textcolor(BLACK);
  gotoxy(5,3);
  cprintf("\n1.SELL");
  textcolor(BLUE);
  gotoxy(5,4);
  cprintf("\n2.PURCHASE");
  textcolor(BLACK);
  gotoxy(5,5);
  cprintf("\n3.CUSTOMER");
  if((ch=getch())==13)
  ch='2';
  clrscr();
  }
  if(i==3)
  {
  gotoxy(5,3);
  cprintf("\n1.SELL");
  textcolor(BLACK);
  gotoxy(5,4);
  cprintf("\n2.PURCHASE");
  gotoxy(5,5);
  textcolor(BLUE);
  cprintf("\n3.CUSTOMER");
  if((ch=getch())==13)
  ch='3';
  clrscr();
  }
   switch(ch)
   {
    case 49:
    i=1;
    do
    {
     dwindow("==SELL==",16,1,61,18);
     if(ch==80&&i<4)
     i++;
     else if(ch==72&&i>1)
     i--;
     if(i==1)
     {
     textcolor(BLUE);
     gotoxy(5,3);
     cprintf("\n1.Insert");
     textcolor(BLACK);
     gotoxy(5,4);
     cprintf("\n2.Search");
     gotoxy(5,5);
     cprintf("\n3.Show");
     gotoxy(5,6);
     cprintf("\n0.Back");
     if((ch=getch())==13)
     ch='1';
     clrscr();
     }
     if(i==2)
     {
     textcolor(BLACK);
     gotoxy(5,3);
     cprintf("\n1.Insert");
     textcolor(BLUE);
     gotoxy(5,4);
     cprintf("\n2.Search");
     textcolor(BLACK);
     gotoxy(5,5);
     cprintf("\n3.Show");
     gotoxy(5,6);
     cprintf("\n0.Back");
     if((ch=getch())==13)
     ch='2';
     clrscr();
     }
     if(i==3)
     {
     gotoxy(5,3);
     cprintf("\n1.Insert");
     textcolor(BLACK);
     gotoxy(5,4);
     cprintf("\n2.Search");
     gotoxy(5,5);
     textcolor(BLUE);
     cprintf("\n3.Show");
     textcolor(BLACK);
     gotoxy(5,6);
     cprintf("\n0.Back");
     if((ch=getch())==13)
     ch='3';
     clrscr();
     }
     if(i==4)
     {
     textcolor(BLACK);
     gotoxy(5,3);
     cprintf("\n1.Insert");
     gotoxy(5,4);
     cprintf("\n2.Search");
     gotoxy(5,5);
     cprintf("\n3.Show");
     textcolor(BLUE);
     gotoxy(5,6);
     cprintf("\n0.Back");
     if((ch=getch())==13)
     ch='0';
     clrscr();
     }
     switch(ch)
      {
       case '1':
       sadd();
       break;
       case '2':
       ssearch();
       break;
       case '3':
       sshow();
       break;
      }
      if(ch=='0')
      {
      i=1;
      break;
      }
      }
      while(ch!=27);
      break;
    case 50:
     i=1;
     do
     {
     dwindow("==PURCHASE==",16,1,61,18);
     if(ch==80&&i<3)
     i++;
     else if(ch==72&&i>1)
     i--;
     if(i==1)
     {
     textcolor(BLUE);
     gotoxy(5,3);
     cprintf("\n1.ADD");
     textcolor(BLACK);
     gotoxy(5,4);
     cprintf("\n2.SHOW");
     gotoxy(5,5);
     cprintf("\n0.BACK");
     if((ch=getch())==13)
     ch='1';
     clrscr();
     }
     if(i==2)
     {
     textcolor(BLACK);
     gotoxy(5,3);
     cprintf("\n1.ADD");
     textcolor(BLUE);
     gotoxy(5,4);
     cprintf("\n2.SHOW");
     textcolor(BLACK);
     gotoxy(5,5);
     cprintf("\n0.BACK");
     if((ch=getch())==13)
     ch='2';
     clrscr();
     }
     if(i==3)
     {
     textcolor(BLACK);
     gotoxy(5,3);
     cprintf("\n1.ADD");
     gotoxy(5,4);
     cprintf("\n2.SHOW");
     textcolor(BLUE);
     gotoxy(5,5);
     cprintf("\n0.BACK");
     if((ch=getch())==13)
     ch='0';
     clrscr();
     }
     switch(ch)
     {
      case '1':
      add();
      pinsert();
      break;
      case '2':
      show();
      }
      if(ch=='0')
      {
      i=2;
      break;
      }
      }
      while(ch!=27);
    break;
    case 51:
     i=1;
     do
     {
     dwindow("==CUSTOMER==",16,1,61,18);
     if(ch==80&&i<3)
     i++;
     else if(ch==72&&i>1)
     i--;
     if(i==1)
     {
     textcolor(BLUE);
     gotoxy(5,3);
     cprintf("\n1.SHOW");
     textcolor(BLACK);
     gotoxy(5,4);
     cprintf("\n2.MODIFY ");
     gotoxy(5,5);
     cprintf("\n0.BACK");
     if((ch=getch())==13)
     ch='1';
     clrscr();
     }
     if(i==2)
     {
     textcolor(BLACK);
     gotoxy(5,3);
     cprintf("\n1.SHOW");
     textcolor(BLUE);
     gotoxy(5,4);
     cprintf("\n2.MODIFY ");
     textcolor(BLACK);
     gotoxy(5,5);
     cprintf("\n0.BACK");
     if((ch=getch())==13)
     ch='2';
     clrscr();
     }
     if(i==3)
     {
     textcolor(BLACK);
     gotoxy(5,3);
     cprintf("\n1.SHOW");
     gotoxy(5,4);
     cprintf("\n2.MODIFY ");
     textcolor(BLUE);
     gotoxy(5,5);
     cprintf("\n0.BACK");
     if((ch=getch())==13)
     ch='0';
     clrscr();
     }
     switch(ch)
     {
      case '1':
      cshow();
      break;
      case '2':
      cmodify();
     }
     if(ch=='0')
     {
	i=3;
	break;
     }
     }while(ch!=27);
   }
   }
   while(ch!=27);
return 0;
}
char* cadd()
{
	struct customer c;
	FILE *fp;
	int csearch(char *);
	clrscr();
	if((fp=fopen("customer.txt","a"))==NULL)
    {
	printf("\nFILE DOEST NOT OPEN");
	return 0;
    }
	printf("\nEnter your phone no:");
	fflush(stdin);
	gets(c.cphno);
	if(csearch(c.cphno)==1)
	return c.cphno;
	else
	{
	printf("\nEnter your Name:");
	gets(c.cname);
	printf("\nEnter your Address:");
	gets(c.caddress);
	fwrite(&c,sizeof(c),1,fp);
	}
	getch();
	fclose(fp);
	return c.cphno;
}
void cshow()
{
	FILE *fp;
	struct customer c;
	int i;
	dwindow("==CUSTOMERS==",2,1,79,25);
	getch();
	fp=fopen("customer.txt","r");
	cprintf("\n\r-------------------CUSTOMERS---------------------");
	cprintf("\n\r%-10s    %-20s  %s\n","PHONE NO","NAME","ADDRESS");
	cprintf("\n\r-------------------------------------------------");
	while(fread(&c,sizeof(c),1,fp))
	cprintf("\n\r%-10s    %-20s  %s\n",c.cphno,c.cname,c.caddress);
	cprintf("\n\r-------------------------------------------------");
	getch();
	clrscr();
}
int csearch(char *p)
{
	struct customer c;
	FILE *fp;
	fp=fopen("customer.txt","r");
	clrscr();
	while(fread(&c,sizeof(c),1,fp))
	{
		if(strcmp(c.cphno,p)==0)
		{
			printf("\nYou are my previous customer");
			printf("\nYour Record is:\n");
			printf("\n*************************");
			printf("\nPhone no=%s\n",c.cphno);
			printf("\nName=%s\n",c.cname);
			printf("\nAddress=%s\n",c.caddress);
			printf("\n*************************");
			getch();
			clrscr();
			return 1;
		}
	}
	fclose(fp);
	return 0;
}
void cmodify()
{
	FILE *fp;
	char phno[10];
	int no;
	struct customer c;
	if((fp=fopen("customer.txt","r+"))==NULL)
	{
		printf("\nFile does not open");
		return;
	}
	printf("\nEnter your phone no.");
	fflush(stdin);
	gets(phno);
	while(fread(&c,sizeof(c),1,fp))
	{
		if(!strcmp(c.cphno,phno))
		{
		    printf("\nwhich you want to modify");
		    printf("\n1.Number\n2.Address");
		    fflush(stdin);
		    scanf("%d",&no);
		    fflush(stdin);
	    switch(no)
	    {
	    case 1:
	    printf("\nEnter your new phone no.");
	    fflush(stdin);
	    gets(c.cphno);
	    break;
	    case 2:
	    printf("\nEnter your new Address");
	    fflush(stdin);
	    gets(c.caddress);
	    break;
	    default:
	    printf("Wrong choice");
	    return;
	    }
			fseek(fp,-(long int)sizeof(c),1);
			fwrite(&c,sizeof(c),1,fp);
			fclose(fp);
			break;
		}
	}

}
 void pinsert()
 {
 struct pro_det p;
 FILE *fp,*fp1;
 fp=fopen("product.txt","a");
 fp1=fopen("purchase.txt","r");
/* printf("\n Product No.: ");
 fflush(stdin);
  scanf("%d",&p.no);
  printf("\n Product Name: ");
   fflush(stdin);
  scanf("%s",p.name);
  printf("\n Price: ");
   fflush(stdin);
  scanf("%f",&p.price);  */
  fread(&p,sizeof(p),1,fp1);
  fwrite(&p,sizeof(p),1,fp);
  fclose(fp);
  fclose(fp1);
 }
 void pshow()
 {
   struct pro_det p;
   FILE *fp;
   fp=fopen("product.txt","r");
   if(fp==NULL)
   {
    printf("\n Unable to open file");
    getch();
   }
   printf("\n Product Details\n");

      while(fread(&p,sizeof(p),1,fp))
      printf("\n%d%10s%15f",p.no,p.name,p.price);


  fclose(fp);
 }
 void psearch()
 {
  int x;
  struct pro_det p;
  FILE *fp;
  fp=fopen("product.txt","r");
  if(fp==NULL)
  {
   printf("\n Sorry File not found");
   return;
  }
  printf("\nEnter Product No.: ");
  scanf("%d",&x);
  while(fread(&p,sizeof(p),1,fp))
    {
      if(p.no==x)
      { printf("\n%d%10s%15f",p.no,p.name,p.price);
	fclose(fp);
	return;
      }
    }
  printf("\n No record found");
  fclose(fp);
 }
/* void pmodify()
 {


   struct pro_det p;
   FILE *fp1,*fp2;
   fp1=fopen("purchase.txt","r");
   fp2=fopen("product.txt","r+");
   if(fp1==NULL||fp2==NULL)
   {
    printf("\n Unable to open file");
    return;
   }
// printf("\n Enter product's no. to be modified: ");
// scanf("%d",&x);
 while(fread(&p,sizeof(p),1,fp))
{
 if(p.no==ino)
 {
   printf("\n Detail to be modified\n 1)Product Name\n 2)Product Number\n 3)Price\n");
   printf("\n Your choice: ");
   scanf("%d",&ch);
   switch(ch)
   {
      case 1: printf("\n Enter new name: ");
		scanf("%s",p.name);
		fseek(fp,-(long int)sizeof(p),1);
		fwrite(&p,sizeof(p),1,fp);
		fclose(fp);


		printf("\n Name Updated");
		break;
      case 2: printf("\n Enter new number: ");
		scanf("%d",&p.no);
		fseek(fp,-(long int)sizeof(p),1);
		fwrite(&p,sizeof(p),1,fp);
		fclose(fp);
		printf("\n Number Updated");
		break;
     case 3: printf("\n Enter new price: ");
		scanf("%f",&p.price);
		fread(&p,sizeof(p),1,fp(1));
		fseek(fp2,-(long int)sizeof(p),1);
		fwrite(&p,sizeof(p),1,fp2);
		fclose(fp1);
		fclose(fp2);
	       //	printf("\n Price Updated");
	       //	break;
  //   default: printf("\n Wrong Choice");
  // }
 }
 else printf("\n No record found");
}
} */
 void sadd()
 {
   FILE *fp1;
  char a='Y',*p;
   struct sell t;
   fp1=fopen("sell.txt","a");
   if(fp1==NULL)
   {
    printf("file not found");
    return;
   }
    while(a=='Y')
   {
    printf("\n***product details***") ;
    printf("\nEnter date of sell:");
    scanf("%d%d%d",&t.dd,&t.mm,&t.yyyy);
    p=cadd();
    strcpy(t.phn_no,p);
    printf("\nenter product details");
    printf("\nenter pno.,pname:\n") ;
     scanf("%d%s",&t.pno,t.pname);

    printf("\nenter quantity and rate:\n") ;
     scanf("%d%f",&t.quant,&t.rate);
      fwrite(&t,sizeof(t),1,fp1);
      printf("\n Add another record(Y/N)");
     fflush(stdin);
     a= getch();
      }


    fclose(fp1);
     printf("\nrecord inserted");
   }

   void  supdate()
   {
    FILE *fp1,*fp2;
    int ino,q,flag=0;
    struct sell t;
    fp1=fopen("purchase.txt","r+");
    fp2=fopen("sell.txt","r") ;
    if(fp1==NULL)
    {
     printf("file not found");
     return;
     }
     printf("\n enter product no.");
     scanf("%d",&ino);
     while(fread(&t,sizeof(t),1,fp1))
     {
      if(ino==t.pno)
      {
	printf("\n enter quantity of item sold");
	scanf("%d",&q);
	if(t.quant>0)
	t.quant-=q;

	fseek(fp1,-(long int)sizeof(t),1);
	fwrite(&t,sizeof(t),1,fp1);

	printf("\nRecord updated") ;
	flag=1;

	break;
      }


      }
      if(flag!=1)
      printf("\n Record not found");
      fclose(fp1);
      fclose(fp2);
    }
   void sshow()
   {
    FILE *fp1;
    struct sell t;
    int i=5,sn=1;
    dwindow("==SELL==",2,1,80,25);
    getch();
    fp1=fopen("sell.txt","r");
    if(fp1==NULL)
    {
     printf("file not found");
     return;
    }
    gotoxy(3,2);
    cprintf(" --------------------------------SELL---------------------------------");
    gotoxy(4,3);
    cprintf("S.no  %-10s %-7s%-10s %-10s  %-5s  %-8s %-7s","DATE","P.NO","P.NAME","PHONE NO","QUANT","RATE","AMOUNT");
    gotoxy(4,4);
    cprintf("---------------------------------------------------------------------");
    while(fread(&t,sizeof(t),1,fp1))
    {
    gotoxy(3,i++);
    cprintf(" %-4d  %-2d-%-2d-%-4d  %-7d%-10s%-10s  %-5d  %-8.2f %.2f",sn++,t.dd,t.mm,t.yyyy,t.pno,t.pname,t.phn_no,t.quant,t.rate,t.rate*t.quant);
    }
    gotoxy(3,i);
    cprintf("-------------------------------------------------------------------- ");
    getch();
    clrscr();
    fclose(fp1);
    }
    void ssearch()
    {
     FILE *fp1;
     struct sell t;
     int ino;
     fp1=fopen("purchase.txt","r");
    if(fp1==NULL)
    {
     printf("file not found");
     return;
    }
    printf("\nenter item no.of the product to be searched");
    scanf("%d",&ino);
    while(fread(&t,sizeof(t),1,fp1))
    {
    if(t.pno==ino)
    {
     if(t.quant>0)
     printf("\n in stock");
     else
     printf("\n out of stock");
    }
    else
    printf("\nsuch item doesn't exist");
    break;
   }
   fclose(fp1);
   }
 void add()
 {
   FILE *fp1;
  char a='Y';
   struct purchase1 t1;
   struct purchase2 t2;
   fp1 = fopen("purchase.txt","a");
   if(fp1==NULL)
   {
    printf("file not found");
    return;
   }
    while(a=='Y')
   {
    printf("\nenter date of purchase");
    scanf("%d%d%d",&t2.dd,&t2.mm,&t2.yyyy);
    // fwrite(&t1,sizeof(t1),1,fp1);
    printf("\n****enter product details****");

    printf("\nenter pno.,pname,manufacturer:\n") ;
     scanf("%d%s%s",&t1.pno,t1.pname,t2.manf);
      //fwrite(&t,sizeof(t),1,fp1);
    printf("\nenter quantity and rate:\n") ;
     scanf("%d%f",&t2.quant,&t1.rate);
      fwrite(&t1,sizeof(t1),1,fp1);
      fwrite(&t2,sizeof(t2),1,fp1);
      printf("\n Add another record(Y/N)");
     fflush(stdin);
     a= getch();
      }


    fclose(fp1);
     printf("\nrecord inserted");
   }
   void update()
   {
    FILE *fp1;
    struct purchase1 t1;
   // struct purchase2 t2;
    int ino,flag=0;
    fp1=fopen("purchase.txt","r+");
    if(fp1==NULL)
    {
     printf("\n file not found");
     return;
    }
    printf("\nenter item no. to be updated: ") ;
    scanf("%d",&ino);
    while(fread(&t1,sizeof(t1),1,fp1))
    {
     if(ino==t1.pno)
     {
      printf("\n enter new price");
      scanf("%d",&t1.rate);
      fseek(fp1,-(long int)sizeof(t1),1) ;
      fwrite(&t1,sizeof(t1),1,fp1);
      printf("\nrecord updated");
     // fclose(fp1);
      //return;
      flag=1;
      break;
      }
     }
     if(flag!=1)
     printf("item not found:%d",ino);
     fclose(fp1);
   }

   void show()
   {
    FILE *fp1;
    struct purchase1 t1;
    struct purchase2 t2;
    int i=1;
    fp1=fopen("purchase.txt","r");
    if(fp1==NULL)
    {
     printf("file not found");
     return;
    }
  /*  while(fread(&t,sizeof(t),1,fp1))
    {
    printf("\n*** product details***\n");
    printf("\n date=%d-%d-%d",t.dd,t.mm,t.yyyy);
    printf("\n pno=%d",t.pno);
    printf("\n pname=%s",t.pname);
    printf("\n manufacturer=%s",t.manf);
    printf("\n quantity=%d",t.quant);
    printf("\n rate= Rs %f",t.rate);
    printf("\n amount= Rs %f",t.rate*t.quant);
    }*/
    printf("-----------------------------------PRODUCT------------------------------------\n");
    printf("S.no  %-10s  %-7s%-10s %-10s    %-5s   %-8s  %-8s\n","DATE","P.NO","P.NAME","MANUFACTURER","QUANT","RATE","AMOUNT");
    printf("------------------------------------------------------------------------------\n");
    while(fread(&t1,sizeof(t1),1,fp1)&&fread(&t2,sizeof(t2),1,fp1))
    printf("%-4d  %-2d-%-2d-%-4d  %-7d%-10s %-10s      %-5d   %-8.2f  %.2f\n",i++,t2.dd,t2.mm,t2.yyyy,t1.pno,t1.pname,t2.manf,t2.quant,t1.rate,t1.rate*t2.quant);
	printf("------------------------------------------------------------------------------\n");
    fclose(fp1);
  }
  void dwindow(char *ch,int tx,int ty,int bx,int by)
  {
	int i=0;
	window(tx,ty,bx,by);
	textbackground(CYAN);
	textcolor(BLUE);
	for(i=0;i<bx-tx;i++)
	cprintf("%c",219);
	textcolor(BLACK);
	for(i=0;i<by-2;i++)
	cprintf("\b\n%c",219);
	gotoxy(1,1);
	for(i=0;i<by-2;i++)
	cprintf("\b\n%c",219);
	for(i=0;i<bx-tx-2;i++)
	cprintf("%c",220);
	textbackground(LIGHTBLUE);
	textcolor(WHITE);
	gotoxy((bx-tx+strlen(ch))/2-strlen(ch)+1,1);
	cprintf("%s",ch);
	textcolor(RED+BLINK);
	textbackground(CYAN);
	gotoxy((bx-tx+21)/2-20,by-2);
	cprintf("<<Press ESC to exit>>");
	textcolor(BLACK);
  }
