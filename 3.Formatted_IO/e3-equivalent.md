For each of the following pairs of `scanf` format strings. Indicate whether or not the 2 strings are equivalent. If not, show how they can be distinguished!

(a) "%d" 	vs.	" %d"		EQUIVALENT

(b) "%d-%d-%d"	vs.	"%d -%d -%d"	NOT EQUIVALENT

(c) "%f" 	vs.	"%f "		NOT EQUIVALENT

(d) "%f,%f"	vs.	"%f, %f"	EQUIVALENT

EXPLAINATION: 

(a) the difference is in the 2nd FS, there is an OC before "%d"
    since this OC is a WSC: scanf will repeatedly reads WSC from the input
    until it reaches a non-WSC (which then "put it back"). Then process
    to the "%d", which now the first input it read is the non-WSC have been
    "put back" before.
    On the other hand, a single "%d" without any OC do exactly the samething
    it search for the frist non-blanked input char,...

(b) - 1st FS: looking for an integer first. When it reach the invalid char
      (for an int variables) it then "put back" and process to the next 
      instruction - which is the OC: "-". Obviously "-" is a non-WSC => If 
      the input does not match it (in this exercise: if the user do not
      input a "-" after the first integer) scanf will aborts
    - 2nd FS: looking for int -> reach invalid int char -> put back -> next
      characters is OC but a WSC -> repeatedly read WSC from the input ->
      reach non-WSC -> put back -> countinue processing FS; next is an OC,
      non-WSC => check if that "put back" char match -> NO? abort! YES? keep
      going
    
    If the input is something like: "1-12-123" or "1-  12- 123", both FS will 
    successfully store 3 variables value 1, 12, 123 correctly. But if the input
    is smt like "1  -  12 -   123", only the 2nd FS will do the trick correctly

(c) Putting WSC at the end of the FS make the program countinuously read WSC until
    it reach a non one. In other words, user, after input the desired float value
    have to input another non-WSC to end the program
    Input like this will work with 2nd FS: 
	231.23 <n*WSC> <non-WSC> <Enter>

(d) Same as (a)
      
NOTE: 
FS - formatted string(s)
WSC - white-spaced character
OC - ordinary character(s)
