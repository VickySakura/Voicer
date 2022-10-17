#ifndef SOUNDTRACK_H__
#define SOUNDTRACK_H__ 1

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef PI
#define PI 3.14159265358979323846f
#endif

typedef struct{
	int size;
	float *wave;
} track;

float vSin(float x){
	for(;x>=(PI);x-=PI);
	for(;x<=(-PI);x+=PI);
	return 
x
-(x*x*x)/(6)
+(x*x*x*x*x)/(120)
-(x*x*x*x*x*x*x)/(720*7)
+(x*x*x*x*x*x*x*x*x)/(720*7*8*9)
-(x*x*x*x*x*x*x*x*x*x*x)/(720*7*8*9*10*11);
}

float vCos(float x){
	return vSin(x+0.5*PI);
}

#endif
