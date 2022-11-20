#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int add (int n,int r)
{
	int j,k,rep;
	char re[10],ch1[]="oui",ch2[]="non";
	do{
	printf("2eme valeur= ");scanf("%d",&j);
	}while(j<0);
	r=n+j;
	do{
		rep=0;
		printf("est-ce-que vous voulez ajouter un autre valeur\n ");
		printf("\t oui ou non \n");scanf("%s",&re);
		if(strcmp(re,ch1)==0)
			{
			rep=1;
			scanf("%d",&k);
			r=k+r;
			}
		else if (strcmp(re,ch2)==0)
			printf(" ");
		else{
			printf("Error");
			r=00;
			}
	}while(rep==1);
	return r;
}
int sous (int n,int r)
{
	int j,k,rep;
	char re[10],ch1[]="oui",ch2[]="non";
	printf("2eme valeur");scanf("%d",&j);
	r=n-j;
	do{
		rep=0;
		printf("est-ce-que vous voulez ajouter un autre valeur\n ");
		printf("\t oui ou non \n");scanf("%s",&re);
			if(strcmp(re,ch1)==0)
				{
				rep=1;
				scanf("%d",&k);
				r=k-r;
				}
			else if (strcmp(re,ch2)==0)
			printf(" ");
		else{
			printf("Error");
			r=00;
			}
	}while(rep==1);
	return r;
}
int mult (int n,int r)
{
	int j,k,rep;
	char re[10],ch1[]="oui",ch2[]="non";
	printf("2eme valeur");scanf("%d",&j);
	r=n*j;
	do{
		rep=0;
		printf("est-ce-que vous voulez ajouter un autre valeur\n ");
		printf("\t oui ou non \n");scanf("%s",&re);
		if(strcmp(re,ch1)==0)
			{
			rep=1;
			scanf("%d",&k);
			r=k*r;
			}
		else if (strcmp(re,ch2)==0)
			printf(" ");
		else{
			printf("Error");
			r=00;
			}
	}while(rep==1);
	return r;
}
float dev (int n,float y)
{
	int j,k,rep;
	char re[10],ch1[]="oui",ch2[]="non";
	printf("2eme valeur");scanf("%d",&j);
	y=(float)n/j;
	do{
		rep=0;
		printf("est-ce-que vous voulez ajouter un autre valeur\n ");
		printf("\t oui ou non \n");scanf("%s",&re);
		if(strcmp(re,ch1)==0)
			{
			rep=1;
			scanf("%d",&k);
			y=y/k;
			}
		else if (strcmp(re,ch2)==0)
			printf(" ");
		else{
			printf("Error");
			y=00;
			}
	}while(rep==1);
	return y;
}
int main ()
{
	int n,r;
	unsigned int p; 
	float y;
	printf("1ere valeur= ");scanf("%d",&n);
	printf("addition(1) soustraction(2) multiplication(3) devision(4) \n");
	scanf("%d",&p);
	switch(p)
	{
		case 1 :r=add(n,r);break;
		case 2 :r=sous(n,r);break;
		case 3 :r=mult(n,r);break;
		case 4 : y=dev(n,y);break;
		default :printf("\n \t error \n");
	}
	if(p<=4){
		if (p==4)
		printf("\n \t resultat=%.2f \n",y);
		else
		printf("\n \t resultat=%d \n",r);
	}
	return 0;
}