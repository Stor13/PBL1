#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int t,s,l,a[100],d,cv;

void nhap(int a[],int d)
{ for (int i=0;i<d*2;i++)
  scanf ("%d",&a[i]);
}

int thu(int a[],int d,int s,int l)
{ int dem=0;
  for (int i=0;i<2*d;i=i+2)
 {
  {
  if ((s-a[i])>=l)
  {dem++;}}
  if ((s-a[i])<l){ dem=dem;}
  }
  if (dem==d) return 0;
  return 1;
}
int tinh(int a[],int d,int s,int l)
{ int k,q=1;
  int dem=0;
  if (thu(a,d,s,l)==0) return -1; 
  if (thu(a,d,s,l)==1)
 {
   while (s>l)
  { int min=s;
    for ( int i=0;i<2*d;i=i+2)  
     if (a[i]<min && (s-a[i])>1 && (s-a[i])<l )
	  {  min=a[i];
    	k=i;
		}
     if (q!=k)
	{
     l=a[k+1]+l-(s-a[k]);  printf ("\ncon %d lit",l);
     s=a[k]; printf ("\ncan di %dkm",s);
     q=k;    
     {
	 if (thu(a,d,s,l)==1)
	 { dem++;}
    if (thu(a,d,s,l)==0) return -1;	}}
    else return -1; 
}} 
 return dem;
}
void Nhap(int a[],int d,int s,int l)
{
  scanf ("%d",&t);  // so test case
  for (int i=1;i<=t;i++)
  { 
  scanf ("\n%d",&d);// so tram dung
  scanf ("%d %d",&s,&l);// so km va lit ban dau
  nhap(a,d);
  printf ("\n\nkq:%d\n",tinh(a,d,s,l));
   }
}
void ghifile(char tenfile[20], int a[],int &d,int &s,int &l)
{    
	FILE *f;
	f=fopen(tenfile,"w");
	if (f==NULL)
	{
		printf("\nLoi moi file");
		return;
	}
   scanf ("%d",&t);  // so test case
   fprintf(f,"%d\n",t);
  for (int i=1;i<=t;i++)
  {  
  scanf ("\n%d",&d);// so tram dung
  fprintf(f,"%d\n",d);
  scanf ("%d %d",&s,&l);// so km va lit ban dau
  fprintf(f,"%d %d\n",s,l);
  for (int i=0;i<d*2;i++)
  {  scanf ("%d",&a[i]);
  fprintf(f," %d ",a[i]);
  if (i%2) fprintf(f,"\n");
  }
  }
fclose(f);
}

void docfile(char tenfile[20], int a[],int &d,int &s,int &l)
{
  FILE *f;
  f=fopen (tenfile,"r");
  if(f==NULL)
  {
  	printf("\nLoi mo file");
  	return;
  }
    fscanf(f,"%d",&t);  // so test case
  for (int i=1;i<=t;i++)
  { 
  fscanf(f,"\n%d",&d);// so tram dung
  fscanf(f,"%d %d",&s,&l);// so km va lit ban dau
  for (int i=0;i<d*2;i++)
   fscanf(f,"%d",&a[i]);
   printf("\n\nkq:%d\n",tinh(a,d,s,l));
  }
  fclose(f); 
} 

main ()
{ 
  do
  {
  	printf("\n1.Nhap moi test case.");
  	printf("\n2.Xuat tu file 1:");
  	printf("\n3.Xuat tu file 2:");
  	printf("\n4.Xuat tu file 3:");
  	printf("\n5.Xuat tu file 4:");
  	printf("\n0.Ket thuc");
  	printf("\nNhap STT cong viec:");
  	scanf("%d",&cv);
  	switch(cv)
  	{
  		case 1:Nhap(a,d,s,l);break;
  		case 2://ghifile("thu1.txt",a,d,s,l);
		docfile("thu1.txt",a,d,s,l);	
	    break;
		case 3://ghifile("thu2.txt",a,d,s,l);
		docfile("thu2.txt",a,d,s,l);
		break;
		case 4://ghifile("thu3.txt",a,d,s,l);
		docfile("thu3.txt",a,d,s,l);
		break;
		case 5://ghifile("thu4.txt",a,d,s,l);
		docfile("thu4.txt",a,d,s,l);
       break;
	}
  }while(cv!=0); 	
}
