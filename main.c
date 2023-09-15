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
}

void zahlenAusgabe(){
    // Hier muss der Code für die Zahlen-Ausgabe geschrieben werden.
}
