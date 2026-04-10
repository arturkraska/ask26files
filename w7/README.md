Kody w języku C możemy przetłumaczyć na assemblera tak jak zawsze, np. komendą `gcc sum.c -S -O2`.
Jednakże część przedstawionych tutaj kodów została napisana ręcznie, w celu uzyskania konkretnych powiązań między użytymi rejestrami.

Aby zbadać wydajność naszego programu na konkretnej mikroarchitekturze (my na przykład użyjemy mikroarchitektury Haswell), możemy użyć narzędzia `llvm-mca`. 
Przykładowo, wyniki z repozytorium uzyskałem za pomocą komend:
```
llvm-mca -mcpu=haswell -timeline sum_v1.s > v1.out
llvm-mca -mcpu=haswell -timeline sum_v2.s > v2.out
llvm-mca -mcpu=haswell -timeline sum_v1_1.s > v1_1.out
```

Narzędzie to symuluje ciąg instrukcji assemblerowych z pliku `.s` pewną liczbę razy (można dodać parametr `-iterations`)  i oblicza w którym cyklu zegarowym będzie się wykonywać każda z kolejnych instrukcji.
Warto pamiętać, że w symulacji nie są brane pod uwagę żadne instrukcje sterowania (skoki, `ret`), instrukcje są po prostu analizowane po kolei.

Warto zauważyć, że konsekwencją tego jest zaskakująca poprawa współczynnika CPI w kodzie `sum_v1_1.s`, która wynika z usunięcia zależności między odwołaniami do rejestru `rdi` w kolejnych iteracjach programu. Podobna sytuacja może zachodzić w analizie programów z pracowni.

Więcej szczegółów na temat narzędzia albo charakterystyki wypisanego schematu można znaleźć na przykład [tutaj](https://llvm.org/docs/CommandGuide/llvm-mca.html).

Charakterystykę jednostek funkcyjnych w mikroarchitekturze Haswell można zobaczyć na przykład [tutaj](https://www.agner.org/optimize/microarchitecture.pdf), na stronie 142.
