#include "partie.h"
#include<QDebug>

Partie::Partie(int niveau) {
        plateau = new Plateau(niveau);
}

bool Partie::testersigagne(){
    int caissesurcible=0;
    int nbcaisse=0;


    for (int m = 0; m < plateau->ligne; m++) {
        for (int n=0; n < plateau->col; n++){
            if (plateau->tableau[m][n]->classe==2){ // teste sur toutes les cases cibles
                nbcaisse+=1;

                if (plateau->indexof(m*50,n*50,plateau->tableauCaisse1, plateau->tableauCaisse2)!=400){
                    caissesurcible+=1;
                }
            }
        }
    }
    if (caissesurcible==nbcaisse){
        return true;
    }
    else{
        return false;
    }
}
Partie::~Partie() {
    delete plateau;
}
