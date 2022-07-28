

extern int StartRendering( );
#include <Windows.h>
int main()
{
    bool show = false;

    Sleep(2500);
    if (GetAsyncKeyState(VK_INSERT) & 0x1)
    {
        show = !show;
    }
    Sleep(2500);

    if (show)
    {
        StartRendering();
    }
    else
    {
        Sleep(25000);
        exit(9);
    }
}
