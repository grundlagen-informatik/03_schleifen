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

void zahlenAusgabeAddition(){
    // Hier muss der Code für die Zahlen-Ausgabe mit Addition geschrieben werden.
    int eingabe; int zaehler = 0;
    printf("Bitte wähle eine ganzzahlige positive Zahl: \n");
    scanf("%d", &eingabe);
    printf("Hier sind alle ganzzahligen Zahlen von 0 bis %d: \n", eingabe);
    for(int i = 0; i<=eingabe; i++){
        printf("%d ", i);
        zaehler=zaehler+i;
    }
    printf("\nHier ist die Summe der ganzzahligen Zahlen von 0 bis %d: \n", eingabe);
    printf("%d",zaehler);
}

void zahlenAusgabe(){
    // Hier muss der Code für die Zahlen-Ausgabe geschrieben werden.
}
