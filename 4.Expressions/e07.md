Basically, the question is why these 2 algorithms do not produce same result:
1. 9 - ( ( x - 1 ) % 10 )
2. 10 - ( x % 10 )

ANSWER: x = 140 => A1 = 0, A2 = 10
- Obviously, 2 values are difference
- Another reason is a check digit cannot be `10`
