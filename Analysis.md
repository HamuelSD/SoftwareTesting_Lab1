  
## Part 2: Analyze Tests:

| Test Case | Input | Expected Output | What the Test Shows |
|-----------|-------|-----------------|---------------------|
| Case 1 | 2800 | True | This tests requirement 1: that numbers divisible by 400 are correctly flagged as leap years. |
| Case 2 | 1900 | False | This tests requirement 2: that if the integer is not divisible by 400, but IS divisible by 100, then it is not a leap year. This order is important, as 1900 IS divisible by 4, but is not a leap year, and if we checked divisibility by 4 first, it might get incorrectly flagged as a leap year. |
| Case 3 | 2024 | True | This tests requirement 3: that if the integer is evenly divisible by 4, but not evenly divisible by 100, then it is in fact a leap year. |
| Case 4 | 2026 | False | This tests requirement 4: if the number is not evenly divisible by 400, 100, or 4, then it is not a leap year. |  

## Rationale
I selected this test suite, because it completely cover all equivalence partitions for the described leap year function. Each test input is designed to test a specific branch of the if/else logic described in our function overview. By testing inputs from each equivalence partition, we can verify that the function is working through the logic paths correctly. Additionally, the input for test case 1 is a far future date (2800), and the input for test case 2 is a date in the past (1900), this should help verify the function is working correctly by doing the mentioned logical math in the specification sheet. If all four test are successful we can be reasonably confident the leap year program works as described.	
