#include <stdio.h>
int jeu_nul(int n){
    if (n==1){
        return 2;
    } if (n==2){
        return 3;
    } if (n==3){
        return 4;
    } if (n==4){
        return -3;
    } if (n==5){
        return 6;
    } if (n==5){
        return 7;
    }
}
int main() {
    int nb;
    printf("choisir un nombre entre 1 et 6.\n selecionner le bon nombre, si vous tombez sur un nombre inférieur à votre choix, vous gagnez");
    scanf("%d", &nb);
    printf("%d", jeu_nul(nb));
    return 0;
}