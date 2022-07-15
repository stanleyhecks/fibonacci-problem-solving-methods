# What is fibonacci?
In mathematics, the Fibonacci numbers, commonly denoted Fn , form a sequence, the Fibonacci sequence, in which each number is the sum of the two preceding ones. /wikipedia

# Then, what are we going to do then?
We will find out the Fibonacci numbers' general term and verify it w/ some code bytes using memoization and recursion.

# Finding out Fibonacci numbers' general term
Refer to the word file in 'main'

# Checking out if found general term is right
## First method is memoization
You can start by storing first and second fibonacci numbers in the corresponding arrays <br />
eg) arr[1]=1, arr[2]=1 <br />
And then, you can code to add the values and storing it to the next array <br />
eg) arr[n]+arr[n+1]=arr[n+2]

## Second method is recursion
You can start by making a simple recursion function which returns 0 if the given number is equal or smaller than 0 and returns 1 if the given number is 1. <br />
Then, just simply make it repeat adding two corresponding values by calling functions in recursion <br />
eg) recursion(n-2)+recursion(n-1)

## Third method is general term, which we want to verify
(You can check out how I made the general term mathematically!) <br />
Just simply move it to code <br />
Warning! : You should use data type "float" to move it to code because it uses sqrt function
