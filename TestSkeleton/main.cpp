#include <DxLib.h>
#include <string>

int WINAPI WinMain(_In_ HINSTANCE hInstance,_In_opt_ HINSTANCE hPrewInstance,_In_ LPSTR lpCmdLine,_In_ int mShowCmd) 
{
<<<<<<< HEAD
	DxLib::SetWindowText("1916013_–Ø‰º—S‘¾˜N");
=======
	DxLib::SetWindowText("1916013_æœ¨ä¸‹ç¥å¤ªæœ—");
>>>>>>> 6e96ed8d3d48ce7d376fbb56ac0ca82bd65a1bdf
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
