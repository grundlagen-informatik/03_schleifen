#include <stdio.h>
#include <stdbool.h>

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
    bool eingabecheck = false;
    printf("Bitte wähle eine ganzzahlige positive Zahl. \n");
    printf("Bei Eingabe einer nicht-ganzzahligen Zahl wird diese abgerundet auf die nächste ganzzahlige Zahl. \n");
    while (!eingabecheck) {
        scanf("%d", &eingabe);
        if (eingabe >= 1000) {
            printf("Eingabe overflow. Wähle eine Zahl kleiner als 1000. \n");
            } else {eingabecheck = true;}
    }
    printf("Hier sind alle ganzzahligen Zahlen von 0 bis %d: \n", eingabe);
        for (int i = 0; i <= eingabe; i++) {
            if (i<10) {printf("  %d ", i);}
                 else if (i<100) {printf(" %d ", i);}
                 else {printf("%d ",i);}
            zaehler = zaehler + i;
            if (i%20==0) {printf("\n");}
        }
    printf("\nHier ist die Summe der ganzzahligen Zahlen von 0 bis %d: \n", eingabe);
    printf("%d",zaehler);
}

void zahlenAusgabe(){
    // Hier muss der Code für die Zahlen-Ausgabe geschrieben werden.
    int eingabe=1002; bool eingabecheck = false;
    while(!eingabecheck) {
        if (eingabe>1000) {
            printf("Bitte wähle eine ganzzahlige Zahl <= 1000: \n");
            scanf("%d",&eingabe);
        } else {eingabecheck = true;}
    }
    printf("Hier sind alle ganzzahligen Zahlen von %d bis 0: \n", eingabe);
    for (int k=eingabe; k>=0; k--) {
            if (k<10) {printf("  %d ", k);}
            else if (k<100) {printf(" %d ", k);}
            else {printf("%d ", k);}
            if (k%20==0) {printf("\n");}
    }
    printf("\nMeldung: Programm wurde korrekt ausgeführt.");
}
