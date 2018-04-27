#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* thr0(void* data)
{
    int* b = (int*) data;
    int a=0;
    int l;
	for(l=0;l<100;l++)
		{
			a = a + b[l];
		}
    return (void*)a;
}
void* thr1(void* data)
{
    int* b = (int*) data;
    int a=0;
    int l;
	for(l=100;l<200;l++)
		{
			a = a + b[l];
		}
    return (void*)a;
}
void* thr2(void* data)
{
    int* b = (int*) data;
    int a=0;
    int l;
	for(l=200;l<300;l++)
		{
			a = a + b[l];
		}
    return (void*)a;
}
void* thr3(void* data)
{
    int* b = (int*) data;
    int a=0;
    int l;
	for(l=300;l<400;l++)
		{
			a = a + b[l];
		}
    return (void*)a;
}
void* thr4(void* data)
{
    int* b = (int*) data;
    int a=0;
    int l;
	for(l=400;l<500;l++)
		{
			a = a + b[l];
		}
    return (void*)a;
}
void* thr5(void* data)
{
    int* b = (int*) data;
    int a=0;
    int l;
	for(l=500;l<600;l++)
		{
			a = a + b[l];
		}
    return (void*)a;
}
void* thr6(void* data)
{
    int* b = (int*) data;
    int a=0;
    int l;
	for(l=600;l<700;l++)
		{
			a = a + b[l];
		}
    return (void*)a;
}
void* thr7(void* data)
{
    int* b = (int*) data;
    int a=0;
    int l;
	for(l=700;l<800;l++)
		{
			a = a + b[l];
		}
    return (void*)a;
}
void* thr8(void* data)
{
    int* b = (int*) data;
    int a=0;
    int l;
	for(l=800;l<900;l++)
		{
			a = a + b[l];
		}
    return (void*)a;
}
void* thr9(void* data)
{
    int* b = (int*) data;
    int a=0;
    int l;
	for(l=900;l<1000;l++)
		{
			a = a + b[l];
		}
    return (void*)a;
}
int main()
{
int sumarr[1000];
    int loopvar; 

    for(loopvar=0;loopvar<1000;loopvar++)
	{
		sumarr[loopvar]=loopvar;
	}
	    pthread_t threadnum0;
	    pthread_t threadnum1;
	    pthread_t threadnum2;
	    pthread_t threadnum3;
	    pthread_t threadnum4;
	    pthread_t threadnum5;
  	    pthread_t threadnum6;
	    pthread_t threadnum7;
	    pthread_t threadnum8;
	    pthread_t threadnum9;
	pthread_create(&threadnum0, NULL, thr0, (void*) sumarr );
	pthread_create(&threadnum1, NULL, thr1, (void*) sumarr );
	pthread_create(&threadnum2, NULL, thr2, (void*) sumarr );
	pthread_create(&threadnum3, NULL, thr3, (void*) sumarr );
	pthread_create(&threadnum4, NULL, thr4, (void*) sumarr );
	pthread_create(&threadnum5, NULL, thr5, (void*) sumarr );
	pthread_create(&threadnum6, NULL, thr6, (void*) sumarr );
	pthread_create(&threadnum7, NULL, thr7, (void*) sumarr );
	pthread_create(&threadnum8, NULL, thr8, (void*) sumarr );
	pthread_create(&threadnum9, NULL, thr9, (void*) sumarr );
  	int*  returningvalues[10];
	pthread_join(threadnum0,(void*)&returningvalues[1]);
	pthread_join(threadnum1,(void*)&returningvalues[2]);
	pthread_join(threadnum2,(void*)&returningvalues[3]);
	pthread_join(threadnum3,(void*)&returningvalues[4]);
	pthread_join(threadnum4,(void*)&returningvalues[5]);
	pthread_join(threadnum5,(void*)&returningvalues[6]);
	pthread_join(threadnum6,(void*)&returningvalues[7]);
	pthread_join(threadnum7,(void*)&returningvalues[8]);
	pthread_join(threadnum8,(void*)&returningvalues[9]);
	pthread_join(threadnum9,(void*)&returningvalues[0]);
    int convertedsums[10];
	for(loopvar=0;loopvar<10;loopvar++)
	{
		convertedsums[loopvar] =  (int)returningvalues[loopvar];
	}
    int sum = 0;
    for(loopvar=0;loopvar<10;loopvar++)
	{
		sum = sum + convertedsums[loopvar];
	}
    
    printf("sum : %d",sum);

    exit(0);
}
