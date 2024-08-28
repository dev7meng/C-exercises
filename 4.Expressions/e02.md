If `i` and `j` are positive integers, does `(-i)/j` = `-(i/j)`?

ANSWER: NO but since C99, YES

##### Explanation: 
- In C89: if either operand in `i / j` is negative, the result can be round up or down
    - EXAMPLE: `-9/7` might be `-1` or `-2`
- In C99: the result of a division is always truncated toward `0`
    - EXAMPLE: so `-9/7` will always be `-1`
- In the question above, the first expression always have `-i` is negative and `j` is positive. Therefore, (C89) the result might be round up or down. On the other hand, the 2nd expression have parenthess outside `i/j` -> `i/j` will be calculate first, then be given negative sign. Since `i` and `j` are both postive, The result of 2 positive `int` will be truncate by discard all digits after decimal point (round down so to speak)
- EXAMPLE: i = 9, j = 7
    - 1st Expression's result might be `-1` or `-2`
    - 2nd Expression's result will be `-1`
- But if we talk about C99 and newer version of C, the answer of this question might be YES.
