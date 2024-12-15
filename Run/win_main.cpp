#include "win_main.h"
#include "main.h"

int realMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    SHPY::Main main;
    main.run();
    return 0;
}