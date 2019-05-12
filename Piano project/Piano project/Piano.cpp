#include "Piano.h"
#include <Windows.h>
#include <utilapiset.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;
[STAThreadAttribute]

//Beep Function
//Beep( frequency #, miliseconds#)

int main() {

	char key;

	switch (key)
	{
		//arranged to match the keyboard (approximately)
	case 'a': //C or C4 261.63
		Beep(262, 300);
		break;
	case 's': //D or D4 293.66
		Beep(294, 300);
		break;
	case 'd': //E or E4 329.63
		Beep(330, 300);
		break;
	case 'f': //F or F4 349.23
		Beep(349, 300);
		break;
	case 'g': //G or G4 392
		Beep(392, 300);
		break;
	case 'b': //A or A4 440
		Beep(440, 300);
		break;
	case 'n': //B or B1 61.7354
		Beep(62, 300);
		break;
	case 'h': //C1 32.7081
		Beep(32, 300);
		break;
	case 'j': //D1 36.8909
		Beep(37, 300);
		break;
	case 'k': //E1 41.2035
		Beep(41, 300);
		break;
	case 'w': //C#
		Beep(34, 300);
		break;
	case 'e': //D#
		Beep(39);
		break;
	case 'r': //F#
		Beep(46, 300);
		break;
	case 't': //G#
		Beep(52, 300);
		break;
	case 'y': //Bb
		Beep(29, 300);
		break;
	case 'u': //C#1
		Beep(35, 300);
		break;
	case 'i': //D#1
		Beep(39, 300);
		break;
	default:
		break;

	}
}
