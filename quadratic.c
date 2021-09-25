#include<stdio.h>
#include<math.h>

double root(double a,double b,double c,double w,double x)
{
    double u,y;
    y=sqrt(w);
    u=(-b+y)/x;
    return u;
}
double root2(double a,double b,double c,double w,double x)
{
    double v,y;
    y=sqrt(w);
    v=(-b-y)/x;
    return v;
}
void main()
{
 double a,b,c,x,w,e,f;
 printf("the coefficient 1 of equation 1 is:");
 scanf("%lf",&a);
 printf("the coefficient 2 of equation 1 is:");
 scanf("%lf",&b);
 printf("the constant of equation 1 is:");
 scanf("%lf",&c);
w=(b*b)-4*a*c;
x=2*a;
f=root(a,b,c,w,x);
e=root2(a,b,c,w,x);
if (w<0)
{
    w=-1*w;
    printf("the roots are (-%.2lf+%.2lf*i)/%.2lf \n",b,w,x);
    printf("the roots are (-%.2lf-%.2lf*i)/%.2lf \n",b,w,x);
}
else{
 printf("the root values are %.2lf and %.2lf\n",f,e);

}
}
