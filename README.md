
# HW1 EE599 - Computing Principles for Electrical Engineers

- For submission, please push your answers to Github.
- Deadline: Friday, September 4th by 6:30 pm
- Total: 120 points. 100 points is considered full credit.

## Question 1 (10 Points. Medium)
Use proof by contradiction to prove that the FindMax function always finds the maximum value in the input vector.
```cpp
int FindMax(std::vector<int> &inputs) {
   if (inputs.size() == 0) {
       return -1;
   }
   int result = INT32_MIN;
   for (auto n : inputs) {
       if (n > result) {
           result = n;
       }
   }
   return result;
}
```

### Answer

## Question 2 (20 Points. Medium)

### Answer

## Question 3 (10 Points. Easy)

### Answer

## Question 4 (30 Points. Medium)

### Answer
