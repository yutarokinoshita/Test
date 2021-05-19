#include <DxLib.h>
#include <string>
#include <algorithm>

#define ABC
using namespace std;

int WINAPI WinMain(_In_ HINSTANCE hInstance,_In_opt_ HINSTANCE hPrewInstance,_In_ LPSTR lpCmdLine,_In_ int mShowCmd) {
	
	int lval = 3;
	int rval = 5;
	auto minval = std::min(lval, rval);
	auto maxval = std::max(lval, rval);

	DxLib::SetWindowText("サンプルプログラム");
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