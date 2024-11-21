#include <iostream>
#include <cmath>
using namespace std;
#define MIN_MOD 0
#define MAX_MOD 5

/* Stampa i saluti iniziali */
void benvenuti() {
    cout << "Benvenuti nella Calcolatrice Avanzata della 3CI" << endl;
}

/* Stampa i crediti */
void crediti() {
    cout << "Al programma hanno contribuito i seguenti programmatori:" << endl;
    cout << "Riccardo Rosso" << endl;
}

/* Stampa le regole */
void regole_menu() {
    cout << "La calcolatrice lavora con input interi" << endl;
    cout << "Le modalità accessibili sono le seguenti:" << endl;
    cout << "Modalità espressione unaria di base [digitare 1]" << endl;
    cout << "Modalità espressione unaria avanzata [digitare 2]" << endl;
    cout << "Modalità espressione binaria di base [digitare 3]" << endl;
    cout << "Modalità espressione binaria manuale [digitare 4]" << endl;
    cout << "Modalità espressione unaria avanzata [digitare 5]" << endl;
    cout << "Stampa i crediti [digitare 0]" << endl;
}

/* Gestisci degli errori */
void gestisci_errore() {
    cout << "Errore nella scelta" << endl;
}

/* Scelta utente dal menu' */
int scelta_menu() {
    int scelta = 0;
    
    cout << "Inserisci la scelta: ";
    cin >> scelta;
    
    while (scelta > MAX_MOD || scelta < MIN_MOD) {
        cout << "Inserisci la scelta: ";
        cin >> scelta;
    }
    
    return scelta;
}

/* Scelte nella modalità unaria di base */
void scelte_mod_unaria () {
        cout << "Scegli tra: " << endl;	
		/*										
            radice quadrata [LEONARDO]
            quadrato
            cubo
            fattoriale: n! = 1 * 2 * 3 * ... * n [LEONARDO]
            logaritmo naturale [CORRADO]
            negazione: trovo -n [SEBASTIAN]
            incremento: n + 1 [NICOLO']
            decremento: n - 1 [NICOLO']
            doppio: 2*n [MATTIA]
            valore assoluto: numero senza segno [SEBASTIAN]
            pari: trovo se è pari (booleano) [NICOLO']
            positività: trovo se è positivo (booleano)
            uguale a 0: booleano
            potenza per se stesso [CORRADO]
            10 alla n [KOL]
            successione: se do n, stampa: 1 2 3 4 5 ... n-1 n [MATTIA]
            tabellina: se do n, trovo la tabellina di n [KOL]
         */
        cout << "Radice quadrata [digitare 0]"<< endl;
        cout << "Quadrato [digitare 1]" << endl;
        cout << "Cubo [digitare 2]" << endl;
        cout << "Fattoriale [digitare 3]" << endl;
        cout << "Logaritmo naturale [digitare 4]" << endl;
        cout << "Negazione [digitare 5]" << endl;
        cout << "Incremento [digitare 6]" << endl;
        cout << "Decremento [digitare 7]" << endl;
        cout << "Doppio [digitare 8]" << endl;
        cout << "Valore assoluto [digitare 9]" << endl;
        cout << "Pari [digitare 10]" << endl;
        cout << "Positività [digitare 11]" << endl;
        cout << "Uguale a 0 [digitare 12]" << endl;
        cout << "Potenza per se stesso [digitare 13]" << endl;
        cout << "10 alla n [digitare 14]" << endl;
        cout << "Successione [digitare 15]" << endl;
        cout << "Tabellina [digitare 16]" << endl;
}

/* Funzione radice quadrata */
int radice_quadrata (int n1) {
    if (n1 < 0) {
        cout << "Errore: il numero e' negativo, impossibile calcolare la radice quadrata." << endl;
        return -1;
    } else {
        return sqrt (n1);
    }
}

/* Funzione fattoriale */
int fattoriale (int n1) {
    int i=1, res=n1;
    if (n1 < 0) {
        // Controlla se il numero inserito è minore di 0
        cout << "Errore: il fattoriale non e' definito per i numeri negativi." << endl;
        return -1;
    } else if (n1 == 0) {
        // Controlla se il numero inserito è uguale a 0
        // cout << "Il fattoriale di 0 e' 1." << endl;
        return 1;
    } else {
        // Restituisce il fattoriale del numero inserito
        while (i < n1) {
            res= res * i;
            i++;
        }
        return res;
    }
}

/* Funzione principale */
int main() {
    int scelta = 0;
    
    benvenuti();
    regole_menu();
    scelta = scelta_menu();
    if (scelta == 0) {
        crediti();
    } else if (scelta == 1) {
        cout << "Sei nella modalita' unaria di base" << endl;
        scelte_mod_unaria();	
	}
		
    return 0;
}
