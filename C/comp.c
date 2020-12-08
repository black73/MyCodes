#include<stdio.h>

struct com{
	float r;
	float i;
}a1,a2;
void add(struct com a, struct com b){
	printf("%f+(%f)i \n", a.r+b.r, a.i+b.i);
} 
void sub(struct com a, struct com b){
	printf("%f+(%f)i \n", a.r-b.r, a.i-b.i);
}
void multi(struct com a, struct com b){
	printf("%f+(%f)i \n", (a.r*b.r-a.i*b.i), (a.r*b.i-a.i*b.r));
}
void div(struct com a, struct com b){
	float x= b.r*b.r+b.i*b.i;
	printf("%f+(%f)i \n", (a.r*b.r-a.i*b.i)/x,(a.r*b.i-a.i*b.r)/x);
}
void main(){
	scanf("%f%f%f%f%f", &a1.r, &a1.i, &a2.r, &a2.i);
	add(a1,a2);
	sub(a1,a2);
	multi(a1,a2);
	div(a1,a2);
}