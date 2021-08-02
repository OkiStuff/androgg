#include <SFML/Window.h>


int main()
{
    sfWindow* window = sfWindow_create((sfVideoMode){800,600}, "SFMLWindow", sfClose, NULL);
    if (!window) return 1;

    while (sfWindow_isOpen(window))
    {
        sfEvent ev;
        while (sfWindow_pollEvent(window, &ev))
        {
            if(ev.type == sfEvtClosed) sfWindow_close(window);
        }
    }


    return 0;
}