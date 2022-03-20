# printf
========

This project aims at rebuilding the printf library with basic functionality. I
tried to implement as much of the original as possible, and also have a few
extra things which I found to be rather useful.

Some choices were not intentional (some behaviors were replicated from OS X's
printf, others were not replicated) and overall the code is messier than I would
have hoped. At least it works!

## Compiling
Make sure to edit the `Makefile` to point to
[libft](https://github.com/pbondoer/42-libft). Run `make` to compile the
library. Use it like you would use the `printf` function:

```c
int i;
i = 42;
ft_printf("value: %d\n", i);
// value: 42
```
