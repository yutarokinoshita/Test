#include <DxLib.h>
#include <string>

int WINAPI WinMain(_In_ HINSTANCE hInstance,_In_opt_ HINSTANCE hPrewInstance,_In_ LPSTR lpCmdLine,_In_ int mShowCmd) 
{
	DxLib::SetWindowText("1916013_–Ø‰º—S‘¾˜N");
	ChangeWindowMode(true);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	while (ProcessMessage() != -1)
	{
		ClearDrawScreen();
		ScreenFlip();
	}
	DxLib_End();
}
