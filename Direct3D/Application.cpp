#include "iostream"
#include "windows.h"

int CALLBACK WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpCmdLine, int nCmdShow)
{
	const auto pClassName = "InitialClass3D";

	// register window class: set up descriptor
	WNDCLASSEX wc = { 0 };
	wc.cbSize = sizeof(wc);
	wc.style = CS_OWNDC;
	wc.lpfnWndProc = DefWindowProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInst;
	wc.hIcon = nullptr;
	wc.hCursor = nullptr;
	wc.hbrBackground = nullptr;
	wc.lpszMenuName = nullptr;
	wc.lpszClassName = pClassName;
	wc.hIconSm = nullptr;

	RegisterClassEx( &wc );


	// create window instance
	HWND hWnd = CreateWindowEx(0, pClassName, "Window", WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU, 200,200,640,480,nullptr, nullptr, hInst, nullptr);

	// display window
	ShowWindow(hWnd, SW_SHOW);
	while (true)
	{
		std::cin.get();
	}
	return 0;
}