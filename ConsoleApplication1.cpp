/* Ditt f�rsta program i Visual Studio.
   Detta �r en s� kallad flerradskommentar
   som str�cker sig �ver flera rader. */

#include <iostream>
#include <Windows.h> // Denna rad beh�vs f�r att rad 11 och 12 ska fungera.
using namespace std;

int main() // H�r b�rjar funktionen main (och detta �r en enradskommentar).
{
	SetConsoleCP(1252);       // Dessa tv� rader h�nger ihop med rad 6
	SetConsoleOutputCP(1252); // och de beh�vs f�r tecknen �, �, �, �, �, �.

	cout << "Hej, programmerare. Ha t�lamod!" << endl;
	return 0;
} // H�r slutar funktionen main.