Użyte na wykładzie komendy:

* `gcc sum.c -S -O2`, `gcc main.c -S -O2` - kompilacja plików do kodu w asemblerze,
* `gcc main.s -c`, `gcc sum.s -c` - kompilacja do *relokowalnych* plików obiektowych,
* `gcc main.o sum.o -fno-pic -no-pie` - kompilacja do *wykonywalnego* pliku obiektowego.
* `./a.out` - uruchomienie programu.

Przeglądanie zawartości plików ELF:

* `objdump -d sum.o` - podglądanie kodu (binarnego) z tłumaczeniem na czytelnego asemblera,
* `readelf -a sum.o` - podglądanie kilku podstawowych sekcji pliku ELF,
* `readelf -x 3 sum.o` - podglądanie zawartości wybranej przez siebie sekcji,
* `readelf -s sum.o` - podglądanie tablicy symboli,
* `objdump -d -r sum.o` - podglądanie kodu łącznie z rekordami relokacji.

Podglądanie dynamicznej relokacji za pomocą gdb:

* `gcc print.c -g -O2 -no-pie -fno-pic` - kompilacja pliku `print.c`,
* `gdb a.out` - uruchomienie gdb,
* `break wypisz` - ustawienie breakpointa,
* `run`, `si`, `c` - uruchamianie programu na kolejne instrukcje.
