#include <stdio.h>
#include <conio.h>
#include <conio2.h>

int main ()
{
    int i, j, demora = 20000000;

    printf ("Maximize a tela e digite algo: ");
    getche ();
    clrscr ();

    for (i = 10; i <= 90; i++)
    {
        textcolor(11);
        gotoxy (i, 5);  printf ("      |\\");
        gotoxy (i, 6);  printf ("      | \\");
        gotoxy (i, 7);  printf ("      |  \\");
        gotoxy (i, 8);  printf ("      |   \\");
        gotoxy (i, 9);  printf ("      |    \\____________________________________________");
        gotoxy (i, 10); printf ("      |_____|     |      _____  _____              |    \\");
        gotoxy (i, 11); printf ("      |     |     |        |      |      /\\        |     \\");
        gotoxy (i, 12); printf ("      |#####|     |        |      |     /  \\       |  ___ \\");
        gotoxy (i, 13); printf ("      |#####|     |        |      |    /____\\      | | / | \\");
        gotoxy (i, 14); printf ("      |#####|     |      __|__    |   /      \\     | |_/_| /");
        gotoxy (i, 15); printf ("      |#####|     |                                |      /");
        gotoxy (i, 16); printf ("      |_____|     |      ####    T-25    ####      |     /");
        gotoxy (i, 17); printf ("      |     |_____|________________________________|____/");
        gotoxy (i, 18); printf ("      |    /");
        gotoxy (i, 19); printf ("      |   /");
        gotoxy (i, 20); printf ("      |  /");
        gotoxy (i, 21); printf ("      | /");
        gotoxy (i, 22); printf ("      |/");

        textcolor(4);
        gotoxy (i, 10); cprintf ("    *");
        gotoxy (i, 17); cprintf ("    *");

        textcolor(12);
        gotoxy (i, 15); cprintf ("*****");
        gotoxy (i, 12); cprintf ("*****");

        textcolor(14);
        gotoxy (i, 11); cprintf ("   **");
        gotoxy (i, 16); cprintf ("   **");
        gotoxy (i, 13); cprintf ("*****");
        gotoxy (i, 14); cprintf ("*****");

        textcolor(15);

        for (j = 1; j <= demora; j++);
    }

    printf ("\n\nDigite algo para encerrar: ");
    getch ();
    return 0;
}
