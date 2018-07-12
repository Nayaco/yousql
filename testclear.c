#include <stdio.h>

#ifdef WIN32
#include <windows.h>
#endif

void _ResetCursor()
{
#ifdef WIN32
system("cls");
#elif __linux__
printf("\033[H\033[J");
#else
printf("Platform not supported\n");
#endif
}

int main(int argc, char const *argv[])
{
    printf("10000");
    _ResetCursor();
    while(1)getchar();      
    return 0;
}
