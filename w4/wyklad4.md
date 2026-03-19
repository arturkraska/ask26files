Użyte komendy:

* `gcc main.c fun.c` - kompilacja dwóch plików jednocześnie, powstaje plik `a.out`,
* `./a.out` - uruchomienie pliku wykonywalnego,
* `gcc fun.c -S -O2` - generowanie pliku `fun.s` z kodem asemblerowym,
* `gcc main.c fun.s` - plik asemblerowy można kompilować razem z plikiem w kodzie `c`,
* `gcc fun.s -c` - generowanie pliku binarnego (relokowalnego) `fun.o`,
* `objdump -d fun.o` - podejrzenie kodu binarnego (w formie asemblera),
* `gcc main.c fun.o` - kompilacja pliku `c` razem z plikiem binarnym.