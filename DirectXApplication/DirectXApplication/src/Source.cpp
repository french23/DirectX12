#include <Windows.h>
#include "Matthew5Windows.h"
#include "Matthew5WindowsUserInput.h"
using namespace Matthew5;
using namespace Windows;
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE prevInstance, PSTR cmLine, int showCmd)
{
	//This is an object that is our way to interact with the Window.
	Matthew5Windows myWindow(hInstance,500,400);
	//This is our var that holds the info on what key was pressed. the varuable is set to the myWindow.GetWindowsMessages() function.
	Matthew5WindowsUserHoldingKeys myKeyBinding;
	while (true)
	{
		myKeyBinding = myWindow.GetWindowsMessages();
		if (myKeyBinding.CloseProgram == true)
		{
			break;
		}
	}
	return 0;
}