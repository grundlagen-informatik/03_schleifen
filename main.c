#include <stdio.h>

// Funktionsprototyp für Aufgabe 1
void zahlenAusgabeAddition();

// Funktionsprototyp für Aufgabe 2
void zahlenAusgabe();

// Am Hauptteil muss nichts geändert werden. Der Code kann in die zwei Funktionen geschrieben werden.
int main() {
    int aufgabe;

    printf("Fuer die Zahlen-Ausgabe mit Addition druecke: 1\n"
           "Fuer die Zahlen-Ausgabe druecke: 2\n");
    scanf("%d", &aufgabe);

    if (aufgabe == 1) {
        zahlenAusgabeAddition();
    } else if (aufgabe == 2) {
        zahlenAusgabe();
    } else {
        printf("Ungueltige Eingabe, Programm muss neu gestartet werden.\n");
    }
    return 0;
}

void zahlenAusgabeAddition() {
    int zaehler;
    int resultat = 0;
    int zahl;

    printf("Bitte geben Sie eine Zahl ein : ");
    scanf_s("%d", &zahl);

    for (zaehler = 0; zaehler <= zahl; zaehler++) {
        printf("%d \n", zaehler);
        resultat = resultat + zaehler;
    }

    printf("\nDas Resultat ist: %d \n", resultat);

}

void zahlenAusgabe() {
    int zaehler;
    int zahl = 0;

    printf("Bitte geben Sie eine Zahl ein : ");
    scanf_s("%d", &zaehler);

    while (zaehler >= zahl) {
        printf("%d \n", zaehler);
        zaehler--;
    }

    printf("\nAlle Zahlen wurden ausgegeben. \n");

}
