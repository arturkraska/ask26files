TODO: ładniej opisać

* `gcc forward.c -c -Og`
* `objdump -d forward.o`

* `gcc main.c forward.c -g -Og -no-pie -fno-pic`
* `gdb a.out`
* `break fun` 
* `run`
* `si`
* `c`
* `x/20gx $rsp`

* `gcc main.c fact.c -g -Og -no-pie -fno-pic`

* `gcc main.c fib.c -g -Og -no-pie -fno-pic`