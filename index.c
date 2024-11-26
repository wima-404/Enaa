
#include<stdio.h>
#include <string.h>
typedef struct {
    int jour[50];
    int mois[50];
    int annee[50];
} Date;

typedef struct {
    char titre[50];
    char descreption[50];
    char priorite[50]; //high and law
    char etat[50];
    Date date;
} Tache;

/*void  creer(){
    printf("entrez votre titre:");
    scanf("%s",Tc[t].titre);

}
void  afficher(){}
void  modifier(){}
void  supprimer(){}
void  creer(){}*/
int main(){
    Tache Tc[60];
    int t=0;
    int action;
    void afficherMenu(){
        printf("\n=== Gestion des Tâches ===\n");
    printf("1. Ajouter une Tâche\n");
    printf("2. Afficher les Tâches\n");
    printf("3. Modifier une Tâche\n");
    printf("4. Supprimer une Tâche\n");
    printf("5. Filtrer les Tâches\n");
    printf("6. Quitter\n");
};
    void creerTache(){
    printf("entrez votre titre:");
    scanf("%s",Tc[t].titre);
    printf("entrez votre descreption:");
    scanf("%s",Tc[t].descreption);
    printf("entrez votre priorite "law high":");
    scanf("%s",Tc[t].priorite);
    printf("entrez votre etat:");
    scanf("%s",Tc[t].etat);
    printf("entrez le jour");
    scanf("%d",Tc[t].Date.jour);
    printf("entrez le jour");
    scanf("%d",Tc[t].Date.jour);
    printf("entrez le mois");
    scanf("%d",Tc[t].Date.mois);
    printf("entrez l'année");
    scanf("%d",Tc[t].Date.annee);

    t++;

};
    void  afficherTache(){
        for ( i = 0; i < t ; i++){
            printf("%d" , i+1);
            printf("Titre : %s\n", Tc[i].titre);
            printf("Description : %s\n", Tc[i].description);
            printf("Priorité : %s\n", Tc[i].priorite);
            printf("etat : %s\n", Tc[i].etat);
            printf("jour : %s\n", Tc[i].date.jour);
            printf("mois : %s\n", Tc[i].date.mois);
            printf("annee : %s\n", Tc[i].date.annee);
        }
    };
    void  modifierTache(){
        int index;
        printf("entree le numéro de la tache pour modifier:");
        scanf("%d",&index);
        if(index < 1 || index > t){
            printf(" Numéro de tache invalide");
            return;
        }
        printf("Modifier le titre (%s): ", Tc[index - 1].titre);
        scanf("%[^\n] ,"Tccf [index - 1].titre);
        printf("Modifier la descreption (%s): ", Tc[index - 1].titre);
        scanf("%[^\n],"Tc[index - 1].descreption);

        printf("Jour: ");
        scanf("%d", &Tc[index - 1].date_echeance.jour);
        printf("Mois: ");
        scanf("%d", &Tc[index - 1].date_echeance.mois);
        printf("Année: ");
        scanf("%d", &Tc[index - 1].date_echeance.annee);!
        printf("Modifier la priorité (%s) : ", taches[index - 1].priorite);
        scanf("%s", Tc[index - 1].priorite);

        printf("Tâche modifiée avec succès.\n");
    };
    void  supprimerTache(){
        int index;
        printf("Entrez le numéro de la tâche à supprimer : ");
        scanf("%d", &index);
        if (index < 1 || index > t) {
        printf("Numéro de tâche invalide.\n");
        return;
    }
    for (int i = index -1 ; i< t - 1; i++){

    }


    };
    void  filtrerTache(){};
    do{
        printf("entrez un choix ");
        printf("1-creer:");
        printf("2-afficher:");
        printf("3-modifier:");
        printf("4-supprimer:");
        printf("5-filtrer:");
        printf("6-quitter:");
        scanf("%d",&action);
        switch (action)
        {
            case 1: creerTache();
                break;
            case 2: afficherTache();
                break;
            case 3: printf("Entrez element:");

            modifierTache();
                break;
            case 4: printf("Entrez element:");

            supprimerTache();
                break;
            case 5: filtrerTache();
                break;



        default:printf("choix introuvable");

        }
    }while(action != 6);

   return 0;
}
