Użyte komendy:
* `gcc mem.c -lm` -- kompilacja pliku
* `./a.out` -- uruchomienie
* `crtl+Z` -- zatrzymanie procesu (który ciągle chodzi w tle)
* `ps` -- podejrzenie numerów procesów
* `pmap -x 1745` -- podejrzenie mapy pamięci procesu o numerze $1745$

* `gcc mem_bug.c -z execstack -fno-stack-protector` -- kompilacja pliku z wykonywalnym stosem i bez *kanarków*

* `make` -- zbudowanie plików za pomocą komend dodanych w pliku Makefile
* `make ropex.in` -- tłumaczenie pliku `ropex.in.txt` na ciąg bajtów w pliku `ropex.in`
* `./ropex ropex.in` -- uruchomienie programu z plikiem wejściowym
* `gdb ./ropex` -- odpalenie gdb
* `break echo` -- ustawienie breakpointa
* `run ropex.in` -- uruchomienie programu w gdb z dodanym plikiem wejściowym
* `ni` -- przejście do kolejnej instrukcji (bez wchodzenia w głąb)
* `x/60bx $rsp` -- podejrzenie $60$ górnych bajtów na stosie