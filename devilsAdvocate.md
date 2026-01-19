## Part 3 Devil’s Advocate:

There are several ways the leapYear function could pass the testing suite, but still fail in use.  
As mentioned in the project document, we could be inadvertently testing values that are “hard-coded” into the program, and any actual years not included would cause a failure. 

Another scenario where the leapYear function could pass my test suite, but still fail in use, would be if the user input a negative integer (-2026), either through mistake or by design. In that case the function might process the input and return a true or false, but in reality, this would be a failure. There is no such thing as year \-2026, so it can’t be correctly evaluated.

Similarly, an input like 9999999999 could evaluate as false, but in reality, this result is meaningless, as that year is outside the reasonable bounds of this program being used. It also potentially opens up the risk for an overflow error depending on the data type and implementation. 

Another failure point could also be an input of 0\. There is no such thing as a year 0, yet the function could conceivably return a value anyway.

