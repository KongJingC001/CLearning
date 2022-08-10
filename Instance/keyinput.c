#include <stdio.h>
#include <windows.h> 

int main()
{
    int i;
    int time = 0;
    system("mode con cols=50 lines=12");
    system("title Author KongJingC V0.1");
    printf("Please enter interval Time(ms):");
    scanf("%d", &i);
    system("cls");
    system("color 2f");
    system("title Press $SPACE$/$ESC$ to click/quit.");
    //printf("Press <space> to start, <space> to pause, <esc> to exit.\n");
    while (1)
    {
        // <space> to start
        if (GetAsyncKeyState(VK_SPACE))
        {
            Sleep(500);
            time = 0;
            printf("Clicking...\n");
            system("color f2");
            system("title Press $SPACE$ / $ESC$ to pause/quit.");
            while (1)
            {
                mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0); 
                Sleep(i);
                time++;
                // <space> to pause
                if (GetAsyncKeyState(VK_SPACE))
                {
                    printf("Pause\n");
                    printf("Click times:%d\n", time);
                    Sleep(500);
                    system("cls");
                    system("color 2f");
                    system("title Press $SPACE$ / $ESC$ to click/quit.");
                    break;
                }
                // <esc> to end
                if (GetAsyncKeyState(VK_ESCAPE))
                {
                    return 1;
                }
            }
        }
        // <esc> to end
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            break;
        }
    }
    return 0;
}