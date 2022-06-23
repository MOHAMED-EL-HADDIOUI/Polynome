#ifndef _POLYNOME_T
    #define _POLYNOME_T
    //Modele 2 : Pol=Tableau de monome mais incorporé dans une structure
    #define NMAX 1000
    typedef struct {
        int d; // degre
        double a; // coeff
    }monome_t;
    typedef struct{
        int n; // le nbre de monomes
        monome_t p[NMAX];
    }poly_t;
#endif