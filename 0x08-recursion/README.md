# 0x08. C - Recursion


Recursion is a programming concept where a function calls itself to solve a problem. It's like a puzzle that breaks down into smaller pieces of the same puzzle until you reach a point where the piece is so small, it's easy to solve.

To implement recursion, you need a base case and a recursive case. The base case is the simplest version of the problem that can be solved directly. The recursive case is where you break the problem down into smaller parts and call the same function with those smaller parts.

You should use recursion when a problem can be divided into smaller, similar subproblems. For example, solving a maze can be recursive because you can think of each smaller section of the maze as a smaller maze itself. Also, some mathematical problems are naturally solved using recursion, like calculating factorial or Fibonacci numbers.

However, you shouldn't use recursion for every problem. If the problem doesn't have a clear way to break it down into smaller subproblems, recursion might not be the best choice. It can also be less efficient than using iterative (loop-based) solutions, especially if the recursion goes too deep and uses a lot of memory.

In summary, recursion is like solving a big problem by breaking it down into smaller versions of the same problem. It's useful when problems naturally divide into smaller subproblems, but you need to be careful not to use it for everything and be mindful of potential efficiency issues.
