#include<stdio.h>
int sum(int,int);
int product(int,int);
float div(int,int);
float mod(int,int);
int sub(int,int);
main()
{   int a,b,z,x,n;
    float c,v;
   printf("enter a,b\n");
   scanf("%d%d",&a,&b);
   z=sum(a,b);
   x=product(a,b);
   c=div(a,b);
   v=mod(a,b);
   n=sub(a,b);
   printf("%d\n",z);
    printf("%d\n",x);
     printf("%f\n",c);
      printf("%f\n",v);
       printf("%d\n",n);
       return 0;
}

int sum(int c,int d)
{    int a;
a=c+d;
return a;
	}	
	int product(int c,int d)
{    int a;
a=c*d;
return a;
	}
	float div(int c,int d)
{    float a;
a=c/d;
return a;
	}	
	float mod(int c,int d)
{    int a;
a=c%d;
return a;
	}
	int sub(int c,int d)
{    int a;
a=c-d;
return a;
	}			

       
          		
