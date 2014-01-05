#ifndef DEF_LIST_H
#define DEF_LIST_H

const int MAX_ELEM_LISTINT = 500;

typedef struct {
    int data[MAX_ELEM_LISTINT];
    int length;
} ListeInt;

void InitList(ListeInt &liste);
void AddElement(ListeInt &liste, int position, int valeur);
void SuppElement(ListeInt &liste, int position);
int Taille(ListeInt &liste);
int Rechercher(ListeInt &liste, int element);
void ViderListe(ListeInt &liste);
void Afficher(ListeInt &liste);
void AddQueue(ListeInt &liste, int valeur);
void SuppTete(ListeInt &liste);
void TrierListe(ListeInt &liste);

#endif
