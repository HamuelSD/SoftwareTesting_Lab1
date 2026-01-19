// Samuel Harvey
// Software Testing Lab 1
// This is just pseudocode to give an idea on how to conduct the tests as described
// 1/18/26

// Test Case 1 - Divisible by 400 - Leap Year
if (leapYear(2800) == true)
{
    cout << "400 Test Passed" << endl;
}
else
{
    cout << "Test Failed on 400 Check" << endl;
    exit(1);
}

// Test Case 2 - Divisible by 100 but not 400 - Not Leap Year
if (leapYear(1900) == false)
{
    cout << "100 Test Passed" << endl;
}
else
{
    cout << "Test Failed on 100 Check" << endl;
    exit(1);
}

// Test Case 3 - Divisible by 4 but not 100 - Leap Year
if (leapYear(2024) == true)
{
    cout << "Only divisible by 4 test passed" << endl;
}
else
{
    cout << "Test Failed on only Divisible by 4 Check" << endl;
    exit(1);
}

// Test Case 4 - Not a Leap Year (All others)
if (leapYear(2026) == false)
{
    cout << "General Non-Leap Year test passed" << endl;
}
else
{
    cout << "General Non-Leap Year test failed" << endl;
    exit(1);
}

