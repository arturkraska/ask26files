Kompilacja pliku `.c` do pliku obiektu `.o` (jeszcze nie gotowego do wykonania):
```
gcc sub.c -c -O2
```
Podglądanie kodu assemblerowego:
```
objdump -d sub.o
```