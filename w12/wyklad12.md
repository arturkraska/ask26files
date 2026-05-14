* `lscpu` - sprawdzenie rozmiarów cache
* `cat /sys/devices/system/cpu/cpu0/cache/index0/size`
* `getconf -a | grep 'CACHE'` - więcej parametrów
* `gcc cache_test.c -O2` - kompilacja
* `time ./a.out` - pomiar czasu
* `valgrind --tool=cachegrind ./a.out` - sprawdzenie wyników