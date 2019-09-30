#include "pch.h"
#include <Windows.h>
#include <iostream> 
#include "consolecolors.h"


using namespace std;

int redcash; 
int redammo1; 
int redammo2;
int redammo3;
int Money = 69696969; 
int Ammo1 = 6969; 
int Ammo2 = 6969; 

int main()
{
    SetConsoleTitleA("69er By FadedUnder");
    DWORD processid;
    HWND windowhandle = FindWindow(NULL, "Call of Duty®: Black Ops II - Zombies");
    if (windowhandle == NULL)
    {
        std::cout << red << "Internal Error (could not find sixnine)";

        system("PAUSE");

    }
    else
    {
        GetWindowThreadProcessId(windowhandle, &processid);
        HANDLE handlez = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processid);
        std::cout << igreen <<"69er, By FadedUnder";
        WriteProcessMemory(handlez, (LPVOID)0x0234C068, &Money, sizeof(Money), 0);
        cout << blue << "Edited Score!" << endl;

     WriteProcessMemory(handlez,(LPVOID)0x02346E90,&Ammo1,sizeof(Ammo1),0);
     cout << blue << "Edited Ammo!" << endl;

 WriteProcessMemory(handlez,(LPVOID)0x02346E98,&Ammo2,sizeof(Ammo2),0);
 cout << blue << "Edited Ammo2!" << endl;

        std::cout << ipurple << "Reading new Values..\n";


        ReadProcessMemory(handlez, (LPVOID)0x0234C068, &redcash, sizeof(int), 0);
        cout << green << "Money: " << redcash << endl;

        ReadProcessMemory(handlez, (LPVOID)0x02346E90, &redammo1, sizeof(int), 0);
        cout << green << "Ammo: " << redammo1 << endl;

        ReadProcessMemory(handlez, (LPVOID)0x02346E98, &redammo2, sizeof(int), 0);
        cout << green << "Ammo For Second Gun: " << redammo2 << endl;

        ReadProcessMemory(handlez, (LPVOID)0x02346E8C, &redammo3, sizeof(int), 0);
        std::cout << green << "GAME 69ED!\n";
        system("PAUSE");
    }

    return 0;
}
