#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int book,sl,cd,i,t,j,d,e;
	char st[20],tt[20],s;
	int *pbook=&book,*psl=&sl,*pcd=&cd,*pi=&i,*pt=&t,*pj=&j,*pd=&d,*pe=&e;
	char *pst=st,*ptt=tt,*ps=&s;
	printf("Enter number of books you want to enter: ");
	scanf("%d",pe);
	struct library
	{
		char bn[20],au[20];
		int an,p;
	}b[*pe];
	         for(*pi=0;*pi<*pe;(*pi)++)
		     {
		     	printf("Enter book %d information\n",i+1);
			 printf("1.name of the book\n2.auther of the book\n3.accesion number of the book\n4.price of the book\n");
			 scanf("%s %s %d %d",&b[i].bn,&b[i].au,&b[i].an,&b[i].p);
		     }
for(*ps='y';*ps=='y'||*ps=='Y';)
{
	printf("1.display book details\n");
    printf("2.list of book of given auther\n");
	printf("3.list of titel of specified book\n");
	printf("4.list of count of books in given library\n"); 
	printf("5.list of books in order of accesion number\n");
	printf("6.exit\n");
	printf("enter opption\n");
	scanf("%d",pbook);
	switch(*pbook)
	{
 	  
		case 1:
			{
				printf("enter the serial number of the book");
				scanf("%d",psl);
				printf("book name:%s \n auther:%s \n accesion number:%d\n price:%d\n",b[sl-1].bn,b[sl-1].au,b[sl-1].an,b[sl-1].p);
			}
			break;
		case 2:
		{
			printf("enter name of auther: ");
			scanf("%s",pst);
			{
				for(*pi=0;*pi<*pe;(*pi)++)
					if(strcmp(st,b[i].au)==0)
						break;
					if(strcmp(st,b[i].au)==0)
						printf("book name:%s \n auther:%s \n accesion number:%d\n price:%d\n",b[i].bn,b[i].au,b[i].an,b[i].p);
	            	else
						printf("there is no book on the name of auther\n");
					getch();
			}
		}
		break;
		case 3:
		{
			printf("enter title of the book: ");
			scanf("%s",ptt);
			{
				for(*pi=0;*pi<*pe;(*pi)++)
					if(strcmp(tt, b[i].bn)==0)
					break;
				if(strcmp(tt,b[i].bn)==0)
				printf("book name:%s \n auther:%s \n accesion number:%d\n price:%d\n",b[i].bn,b[i].au,b[i].an,b[i].p);
				else
				printf("there is no book on the name of the title\n");				 
				getch();
			}
		}
		break;
		case 4:
		{
			for(*pi=0,*(pcd)=0;*pi<*pe;(*pi)++)
			(*pcd)++;
			printf("number of books: %d\n",*pcd);
		}	
		break;
		case 5:
			{
				printf("the order of books:...");
				for(*pi=0;*pi<*pe;(*pi)++)
				{
				for(*pj=*pi+1;*pj<*pe;(*pj)++)
				{
				  if(b[i].an>b[j].an)
	    		  {
				   t=b[i].an;
				   b[i].an=b[j].an;
				   b[j].an=t;
			      }
				}
			}
				for(*pi=0;*pi<*pe;(*pi)++)
				printf("book name:%s \n auther:%s \n accesion number:%d\n price:%d\n",b[i].bn,b[i].au,b[i].an,b[i].p);
			}
			break;
	     case 6:
		{
			printf("Thank you for visiting");
			exit(0) ;
		}	
	}
	printf("Do you want to do more operations (y/n)? ");
	scanf(" %c",ps);
}
	printf("Thank you for visiting");
}
