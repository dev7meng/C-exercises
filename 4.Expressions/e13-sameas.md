Between `++i` and `i++`, Only `i++` are identical to `i += 1`. 

##### Explanation: 
- `++i` increase the value of `i` by 1 **immediately**
- While `i++` increase the value of `i` after the current expression
- `i += 1` first have to use the *origin* value of `i` to compute the new value ( which in this case is add 1 ) and then assign it to `i`

### I was wrong. Here is why
- Turn out, I miss understood statement and expression
- The question is comparing expression, while I explain in term of statement
- Since C allow us to use any expression as a statement, I was confused and misleaded

##### Correct explanation
K.N.King (author of the book) said: 

> The expression ++i is equivalent to (i += 1). The value of both expressions is i after the increment has been performed. 

- `i++` increase the value of `i` before the next statement. While `++i` and `(i += 1)` increase it right at the current statement they are used.
- Consider this program:
```c 
int i, j, k;
i = j = k = 1;

printf("%d ", i++);
printf("%d ", ++j);
printf("%d ", k += 1);
```
- The output is:
```
1
2
2
```
