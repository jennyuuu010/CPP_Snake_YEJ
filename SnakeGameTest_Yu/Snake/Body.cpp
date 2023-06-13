#include "Body.h"
#include "ConsoleEngineCore.h"
#include "ConsoleObject.h"
#include <conio.h>


Body::Body() 
{
	SetChar('B');
	SetPos({ 0,0 });

}

Body::~Body() 
{
}

void Body::Tick(float _Time)
{
	char Select = (char)_getch();

	int4 MovePos = { 0, 0 };

	int4 srand(Pos(NULL));

	AddPos(MovePos);


}


