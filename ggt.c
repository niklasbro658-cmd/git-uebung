/*  Programm zur Berechnung des GCD (Greatest Common Divisor) von zwei ganzen Zahlen mit Hilfe des euklidischen Algorithmus
    Dieses Programm nimmt zwei ganze Zahlen als Eingabe und berechnet ihren GCD mit Hilfe des euklidischen Algorithmus.
    Der GCD ist die größte positive ganze Zahl, die beide Zahlen teilt, ohne einen Rest zu hinterlassen.
    Das Programm verwendet eine while-Schleife, um den euklidischen Algorithmus wiederholt anzuwenden, bis die zweite Zahl Null wird.
    Die erste Zahl zu diesem Zeitpunkt ist die GCD.
    Das Programm ist in C geschrieben und enthält die notwendigen Header-Dateien für Ein- und Ausgabeoperationen. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int ggt(int a, int b) {
    while (b != 0){
        int rest = a % b;
        a = b;
        b = rest;

    }
    

    return a;

}

// Function to check if a string is a number
int is_number(const char *str) {
    if (!isdigit(*str)) {
        return 0;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Nutzung: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    if (!is_number(argv[1]) || !is_number(argv[2])) {
        printf("Beide Argumente müssen ganze Zahlen sein.\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    printf("Der ggT von %d und %d ist %d\n", num1, num2, ggt(num1, num2));
    return 0;
}