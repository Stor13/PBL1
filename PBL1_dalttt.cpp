#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhap(int a[],int d)
{ for (int i=0;i<d*2;i++)
  scanf ("%d",&a[i]);
}

int thu(int a[],int d,int s,int l)
{ int dem=0;
  for (int i=0;i<2*d;i=i+2)
 {
  {
  if (s-a[i]>=l)
  {dem++;}}
  if ((s-a[i]) <l){ dem=dem;}
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
     l=a[k+1]+l-(s-a[k]); printf ("\nCon %d lit",l);
     s=a[k]; printf ("\n Can di %d km",s);
     q=k;    
     {
	 if (thu(a,d,s,l)==1)
	 { dem++;}
    if (thu(a,d,s,l)==0) return -1;	}}
    else return -1; 
}} 
 return dem;
}
  
     
main ()
{ int t,n,s,l,a[100],k,d;int dem=0;
  scanf ("%d",&t);
  for (int i=1;i<=t;i++)
  { 
  scanf ("\n%d",&d);// so tram dung
  scanf ("%d %d",&s,&l);// so km va lit ban dau
  nhap(a,d);
  printf ("\n%d\n",tinh(a,d,s,l));
  }
return 0;
}

