//@1;1
#include <stdio.h>

int x ();
int y ();
int z ();

int main () {
    return x ();
}       /* │ */
        /* │ */
 /******** │ */
 /*        │ */
 /* ╭──────╯ */
 /* │        */
 /* │ ********/       /***************/
 /* │ */              /*             */
 /* │ */              /* ╭─────────╮ */
 /* │ */              /* │         │ */
 /* ▼ */              /* │ ******* ▼ */
                      /* │ */
int x () {            /* │ */
    puts ("lol hi");  /* │ */
    return y ();      /* │ */
}       /* │ */       /* │ */
        /* │ *********** │ */
        /* │             │ */
//@21;32
int y () {
    puts ("hehe!");
    return z ();
}       /* │ */
        /* │ */
        /* │ */
//@27;1
 /******** ╰─────────────╯ ************** │ */
 /*                                       │ */
 /* ╭─────────────────────────────────────╯ */
 /* │                                       */
 /* ▼ ***************************************/

int z () {
    puts ("huhu!");
    return 0;
}
