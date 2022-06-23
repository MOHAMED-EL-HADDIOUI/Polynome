#include<stdio.h>
#include<math.h>
#include"Polynome_t.h"
#include"Polynome.h"
int isNull(monome_t m){
    return m.d==0 && m.a==0;
}
poly_t saisir(){
    poly_t R;
    monome_t m;
    int i=0;
    do{
        printf("degre : ");scanf("%d",&m.d);
        printf("coeff : ");scanf("%lf",&m.a);
        if(i==0 ||!isNull(m)){
            R.p[i++]=m;
            /*
            R.p[i]=m;
            i++;
            */
        }
    }while(!isNull(m));
    R.n=i;
    return R;
}
void afficher(poly_t P){ 
    int i;
    for(i=0;i<P.n;i++)
        printf("(%f,%d),",P.p[i].a,P.p[i].d);
    puts("");
}
double eval(poly_t P,double x){
    double res=0;
    int i;
    for(i=0;i<P.n;i++)
        res+=P.p[i].a*pow(x,P.p[i].d);
    return res;
}
int main(){
    poly_t P,Q;
    P=saisir();
    afficher(P);
    printf("P(3)=%.5f\n",eval(P,3));
    printf("P(0)=%.5f\n",eval(P,0));
    printf("P(1)=%.5f\n",eval(P,1));

    Q=saisir();
    afficher(Q);
    return 0;
}