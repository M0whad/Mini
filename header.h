#ifndef LIVRE_H
#define LIVRE_H

#define MAX_LIVRES 100

typedef struct{
    char b_name[50];
    char b_author[50];
    float b_price;
    int Q_I_S;
}Livre;


void Add_book();
void Dis_book();
void Del_book();
void Mett_book();
void Ch_book();

#endif