// MineSweeperCalisthenics.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "Field.h"
#include "Output.h"

int main()
{
	Field field = initializeField(5);
	print(field);

    return 0;
}

