```c
scanf("%d%f%d", &i, &x, &j);
```
User input: 
```
10.3 5 6
```
What will be the values of i, x and j after the call?

### Answer
- i = 10
- x = 0.3
- j = 5

BUT what happend to the extra space and a 6:
scanf when search for the 2nd %d (or search for a value to assign to j) eventually
will reach that blank character. Know that blank space can't appear inside an int
It then "put it back". So the string " 6" will be the first string read by the next
called of scanf
I created a `test.c` file include: 
```c
	int i, j, k;
	float x;

	scanf("%d%f%d", &i, &x, &j);
	printf("i = %d\nx = %f\nj = %d\n", i, x, j);

	scanf("%d", &k);
	printf("k = %d\n", k);

	return 0;
```
and the output was: 
```
i = 10
x = 0.300000
j = 5
k = 6
```
