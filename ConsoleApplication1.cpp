/* Ditt första program i Visual Studio.
   Detta är en så kallad flerradskommentar
   som sträcker sig över flera rader. */

#include <iostream>
#include <Windows.h> // Denna rad behövs för att rad 11 och 12 ska fungera.
using namespace std;

int main() // Här börjar funktionen main (och detta är en enradskommentar).
{
	SetConsoleCP(1252);       // Dessa två rader hänger ihop med rad 6
	SetConsoleOutputCP(1252); // och de behövs för tecknen ä, å, ö, Ä, Å, Ö.

	cout << "Hej, programmerare. Ha tålamod!" << endl;
	return 0;
} // Här slutar funktionen main.