# Matematica 

## GetLength       Σ*-> N

```
GetLength: Σ*-> N  ∪  {0} / GetLength(c) |  c == Σ = 0
                                         |  (c==h*t)&& (h ∈ Σ^1) = 1+GetLength(a)
 ```
## IsEmpty  Σ*-> Bool
```
 IsEmpty : Σ*-> B / IsEmpty(c) | c==Σ = True
                               | c!=Σ = False
```
## Power  Σ* x N -> Σ*
```
Power: Σ* x N -> Σ* / Power(c,p) | (c==Σ) || (p==0) = Σ
                                 |  p>0  = c * Power(c,p-1)
```



## Compare Σ*xΣ->{-1,0,1}

> -1 si la el par ordenado es menor que el segundo entonces sera un -1.
> 
> si Ambas cadenas son iguales 0 
>
>Si la primer cadena es mayor que la segunda entonces devolvera un 1 



```
Compare: Σ*xΣ->{-1,0,1} / Compare (C1,C2) |  c1=h1 * t1

```