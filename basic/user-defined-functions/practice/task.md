# Practice questions


1.  WAP to find factorial of a number.
```
The factorial of a number 𝑛 is defined as n!=n×(n−1)×(n−2)×⋯×1

 It can be solved recursively by defining n!=n×(n−1)!,
 with the base case being 1! = 1.

```
2.  WAP to find Fibonacci Series
```
The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones, starting from 0 and 1. It can be recursively defined as:

F(0)=0
F(1)=1
F(n)=F(n−1)+F(n−2) for n>1
```

3. WAP to find power of a number
```
The power of a number x^n can be defined recursively as:
- x^0 =1
- x^n = x * x ^ n−1 for n>0
``` 
4.  WAP to find sum of digits
```
To calculate the sum of digits of a number, the recursive relation can be defined as:

- Base case: If the number is less than 10, return the number itself.
- Recursive case: Sum the last digit 𝑛 % 10
with the sum of digits of 𝑛 / 10

```

5. WAP to find Greatest Common Divisor (GCD) i.e HCF
```
The GCD of two numbers can be found using Euclid’s algorithm, which recursively defines GCD as:

- gcd(a,b)=gcd(b,a%b) until 𝑏 = 0
where gcd(a,0)=a.
```