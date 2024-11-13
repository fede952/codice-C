#include <stdio.h>

int main(){
    int scelta;
    printf("\nBuongiorno, qui il manicomio:\n1 se sei schizofrenico\n2 se paranoico\n3 se hai bassa autostima\n ");
    scanf("%d", &scelta);
    switch(scelta){
        case 1: 
            printf("\nVorremmo parlare con un altra delle tue personalità");
            break;
        case 2:
            printf("\nTi avvisiamo che questa chiamata è condivisa con i poteri forty");
            break;
        case 3:
            printf("\nI nostri operatori stanno parlando con persone più importanti di te");
            break;
        default:
            printf("\nGrazie Artur per averci contattato");
    }
    return 0;
}