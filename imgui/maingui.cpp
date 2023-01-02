#include "maingui.h"
#define gui ImGui

void maingui() 
{
	if(gui::Begin("Main"))
	{
		gui::Text("test");
		gui::End();
	}
}