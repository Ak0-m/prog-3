# Gnome Sort (Stupid Sort)
Gnome Sort, исто познат како и *Stupid Sort* е варијација на *insertion sort* кој не користи вгнездени циклуси

## Како работи алгоритамот
Алгоритамот користи еден циклус кои врти се додека индексот i(почетна вредност е 1 за 0-индекс низа) е помал од бројот на елементи во низата. При едно вртење на циклусот проверува дали моменталниот елемент е помал од претходниот елемент. Ако ова важи се менуваат местата на двата елемента и се менува индексот за -1. Ако индексот i е 0 или сегашниот елемент е поголем или еднаков на претходниот i се менува за +1.

>Gnome Sort is based on the technique used by the standard Dutch Garden Gnome.
>Here is how a garden gnome sorts a line of flower pots.
>Basically, he looks at the flower pot next to him and the previous one; if they are in the right order he steps one pot forward, otherwise, he swaps them and steps one pot backward.
>Boundary conditions: if there is no previous pot, he steps forwards; if there is no pot next to him, he is done.
>> "Gnome Sort - The Simplest Sort Algorithm". Dickgrune.com

## Временска комплексност на алгоритамот
Очигледно е дека најлошиот случај за Gnome sort е кога целата низа е подредена во опаѓачки редослед $(a_0 > a_1 >...> a_{n-1})$ во овој случај секој елемент ќе биде преместен до позиција 0 пред да оди на следниот елемент, така временската комплексност ќе е еднаква на збирот на броеви од 0 до n-1

$\mathcal{O}(\sum_{i=0}^{n-1}i) = \mathcal{O}(\frac{n(n-1)}{2}) = \mathcal{O}(\frac{n^2-n}{2})$

константи и помали променливи не се сметаат ($n^{2}$ многу побрзо ќе расте отколку $n$) па крајната комплексност е $\mathcal{O}(n^2)$

## Време потребно да се сортира низа со n елементи (in nanoseconds):

Спецификации на компјутер на кој се правени овие benchmarks:
- OS: Fedora Linux 44 (KDE Plasma Desktop Edition) x86_64
- CPU: Intel(R) Core(TM) i5-9400 (6) @ 4.10 GHz
- Memory: 15.5GiB

| size of n      | time needed     |
| :------------- | ---------------:|
| 100            | 21598ns         |
| 1000           | 1873584ns       |
| 10000          | 207217839ns     |
| 100000         | 1873584μs       |
| 1000000        | >1h             |
| 1000000000     | >1h             |

