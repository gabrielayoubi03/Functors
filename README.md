# Using Functors to Sort Pairs in C++
#### by Gabriel Ayoubi
## Overview
For this question, you will look at the concept of functors in C++. A functor or function object is an object that can be implemented as if it were a function. We can achieve this by overloading the **'operator()'**.

For this question, you are tasked with creating a functor that will sort a **'std::vector'** of **'std::pair<int, int>'** based on some sorting criteria.

## Requirements
- Create a functor and name it **'PairSumComparator'**.
- This functor should compare two pairs **('std::pair<int, int>')** based on the sum of their elements.
- If there is a tie (i.e., where two pairs have an equal sum), the pair with the smaller first element will be considered 'smaller'.

You will use **'PairSumComparator'** to sort a **std::vector<std::pair<int, int>>**. <ins>Pay close attention</ins> to how pairs should appear after they are sorted. 

### Implementation
- Make sure that your functor is implemented correctly and can be used with standard sorting functions like '**std::sort**'.
- Your implementation will be tested with multiple tests which will also check for edge cases. 
- Test cases are provided in the **'main'** function. 

## Important Notes and Submission
- Remember to write comments explaining the logic behind your solution (even if your code does not compile, we can look at your comments to give partial credit if you understood a concept but did not know the syntax for implementing it).
- <ins>**DO NOT**</ins> modify the given tests in main. Feel free to add your own tests if you have time. 

Good Luck!