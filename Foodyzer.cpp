// Foodyzer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <Windows.h>


void openBrowser(LPCSTR url, LPCSTR name)
{
    /*
(string(dir) + string(originalFileName)).c_str()
    */

    LPCSTR text = "Your Browser will be opened";

    const int result = MessageBoxA(NULL, name , "Foodyzer", MB_YESNOCANCEL);
    if (result == IDYES)
    {
        ShellExecuteA(0, 0, url, 0, 0, SW_SHOW);
        exit(0);
    }
    else if (result == IDCANCEL)
    {
        exit(0);
    }
    else
    {
        //mt
    }
}

int main()
{
    //hide windows
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_HIDE);
    
    LPCSTR url;
    LPCSTR name;

    //true random generator
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<> range(1, 22);

    while (true)
    {
        int r = range(generator);

        switch (r)
        {
        case 1:
            url = "https://www.foody.com.cy/delivery/larnaka/la-veranda";
            name = "La Veranda";
            openBrowser(url, name);
            break;

        case 2:
            url = "https://www.foody.com.cy/delivery/larnaka/the-forest";
            name = "The Forest";
            openBrowser(url, name);
            break;

        case 3:
            url = "https://www.foody.com.cy/delivery/larnaka/kfc-oroklini";
            name = "KFC";
            openBrowser(url, name);
            break;

        case 4:
            url = "https://www.foody.com.cy/delivery/larnaka/balti-house-tandoori-larnaca";
            name = "Balti House Tandoori";
            openBrowser(url, name);
            break;

        case 5:
            url = "https://www.foody.com.cy/delivery/larnaka/chubby";
            name = "Chubby";
            openBrowser(url, name);
            break;

        case 6:
            url = "https://www.foody.com.cy/delivery/larnaka/corfu-tavern";
            name = "Corfu Tavern";
            openBrowser(url, name);
            break;

        case 7:
            url = "https://www.foody.com.cy/delivery/larnaka/alki-sport-grill-bar";
            name = "Alki Sport Grill Bar";
            openBrowser(url, name);
            break;

        case 8:
            url = "https://www.foody.com.cy/delivery/larnaka/vibes-restaurant";
            name = "Vibes Restaurant";
            openBrowser(url, name);
            break;

        case 9:
            url = "https://www.foody.com.cy/delivery/larnaka/lithos-grill-house";
            name = "Lithos Grill House";
            openBrowser(url, name);
            break;

        case 10:
            url = "https://www.foody.com.cy/delivery/larnaka/la-pietra-pizzaria";
            name = "La Pietra Pizzaria";
            openBrowser(url, name);
            break;

        case 11:
            url = "https://www.foody.com.cy/delivery/larnaka/voroklini-tavernio";
            name = "Voroklini Tavernio";
            openBrowser(url, name);
            break;

        case 12:
            url = "https://www.foody.com.cy/delivery/larnaka/curry-express";
            name = "Curry Express";
            openBrowser(url, name);
            break;

        case 13:
            url = "https://www.foody.com.cy/delivery/larnaka/sushi-noodlescom";
            name = "Sushi-Noodles.com";
            openBrowser(url, name);
            break;

        case 14:
            url = "https://www.foody.com.cy/delivery/larnaka/astoria-pizza";
            name = "Astoria Pizza";
            openBrowser(url, name);
            break;

        case 15:
            url = "https://www.foody.com.cy/delivery/larnaka/pizza-mia-larnaka";
            name = "Pizza Mia";
            openBrowser(url, name);
            break;

        case 16:
            url = "https://www.foody.com.cy/delivery/larnaka/vlachos-tavern";
            name = "Vlachos Tavern";
            openBrowser(url, name);
            break;

        case 17:
            url = "https://www.foody.com.cy/delivery/larnaka/yoko-sushi-bento";
            name = "Yoko Sushi Bento";
            openBrowser(url, name);
            break;

        case 18:
            url = "https://www.foody.com.cy/delivery/larnaka/due-pizza";
            name = "Due Pizza";
            openBrowser(url, name);
            break;

        case 19:
            url = "https://www.foody.com.cy/delivery/larnaka/torino-pizza-oroklini";
            name = "Torino Pizza";
            openBrowser(url, name);
            break;

        case 20:
            url = "https://www.foody.com.cy/delivery/larnaka/happy-nest-all-day";
            name = "Happy Nest";
            openBrowser(url, name);
            break;

        case 21:
            url = "https://www.foody.com.cy/delivery/menu/grigoris";
            name = "Grigoris";
            openBrowser(url, name);
            break;

        case 22:
            url = "https://www.foody.com.cy/delivery/larnaka/vergi-grill-house";
            name = "Vergi Grill House";
            openBrowser(url, name);
            break;
        }
    }

}