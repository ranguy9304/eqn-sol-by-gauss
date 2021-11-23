#include <stdio.h>
#include <math.h>

double a[3][4]={{10,1,1,12},{1,10,1,12},{1,1,10,12}};//the values in the matrix A:B

float diff=0.1;//the degree of accuracy put zero if solving with no of iterations 

int iterations=10;

int i=0;//no need to mess with

double xb,xa,yb,ya,za,zb;//no need to mess with


int main() {
   

    for (i;i<iterations;i++){

        // printf(" before %i %i %i \n",xb,yb,zb);

        xa=(a[0][3]-yb*(a[0][1])-zb*(a[0][2]))/a[0][0];
        ya=(a[1][3]-xa*(a[1][0])-zb*(a[1][2]))/a[1][1];
        za=(a[2][3]-xa*(a[2][0])-ya*(a[2][1]))/a[2][2];

        printf("iteration no %i : \n x = %f y = %f z = %f \n",(i+1),xa,ya,za);

        if(diff !=0){
            if(xa-xb<diff && xa-xb>(-diff)){
                printf("accuracy of %f is obtained at iteration %i\n",xa-xb,i+1);
                break;
            }

            
        }
        
        xb=xa;
        yb=ya;
        zb=za;
        

       

    }

    // xa=(a[0][3]-yb*(a[0][1])-zb*(a[0][2]))/a[0][0];
    // ya=(a[1][3]-xb*(a[1][1])-zb*(a[1][2]))/a[1][0];
    // za=(a[2][3]-xb*(a[2][1])-zb*(a[2][2]))/a[2][0];



    
    
    return 0;
}