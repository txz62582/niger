#include "injector.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow) {
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	Injector::Inject("csgo.exe", "de_stroyer.dll");

	return 0;
}