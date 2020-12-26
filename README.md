# Most-X-s
In F3.c implement a program that determines which line of
file F3file (in the current directory) contains the most X's.
F3.c prints:
Most Xs is M on line L
where
  -L is the LINE NUMBER of the line containing the most Xs
  -M is the NUMBER of Xs found on that line

If there are no X's in the file, print:
Most Xs is 0 on line 0

Do not error-check the opening of F3file; simply assume it
opens properly.

Examples:

> cat F3file
1234XXXabcde    XXX
XfXXghXXXij kl 5 X   ABCXXX
XXXXXXXXX
> ./a.out
Most Xs is 10 on line 2

