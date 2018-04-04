# Fillit

Project Fillit is a team project (2 people). Fillit is a program which assembles a given Tetriminos set altogether in the smallest possible square - like a Tetris. 

Project of UNIT Factory (école 42).

__----------------------------------------------------------------------------------__

Program takes only one parameter, a file which contains a list of Tetriminos to assemble. This file must has a very specific format : every Tetrimino must exactly fit in a 4 by 4 chars square and all Tetrimino are separated by an newline each.
If the number of parameters is not 1, program displays its usage and exits properly. Your file should contain between 1 and 26 Tetriminos.

A few examples of valid descriptions of Tetriminos:

....    ....    ####    ....    .##.    ....    .#..    ....    ....
..##    ....    ....    ....    ..##    .##.    ###.    ##..    .##.
..#.    ..##    ....    ##..    ....    ##..    ....    #...    ..#.
..#.    ..##    ....    ##..    ....    ....    ....    #...    ..#.

A few examples of invalid descriptions of Tetriminos

####    ...#    ##...   #.      ....    ..##    ####    ,,,,    .HH.
...#    ..#.    ##...   ##      ....    ....    ####    ####    HH..
....    .#..    ....    #.      ....    ....    ####    ,,,,    ....
....    #...    ....            ....    ##..    ####    ,,,,    ....

__Example:__

File consits of:

....$
##..$ 
.#..$
.#..$ 
$
....$
####$
....$ 
....$
$ 
#...$
###.$
....$
....$
$
....$
##..$ 
.##.$
....$

Program output:

DDAA$ 
CDDA$
CCCA$ 
BBBB$
