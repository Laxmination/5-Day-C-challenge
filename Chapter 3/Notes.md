## Conditional Statements
We use conditional statements to perform different actions for different decisions.<br><br>
C has following conditional statements:<br>
- Use 'if' to specify a block of code to be executed, if a specified condition is true.
- Use 'else' to specify a block of code to be executed, if the same condition is 'false'.
- Use 'else if' to specify a new condition to test, if the first condition is false.
- Use 'switch' to specify many alternative blocks of code to be executed.

### Working algorithm of if...else statement
If the test expression is evaluated to true,<br>
- Statements inside the body of 'if' are executed.
- Statements inside the body of 'else' are skipped from execution.<br><br>

If the test expression is evaluated to false,<br>
- Statements inside the body of 'else' are executed
- Statements inside the body of 'if' are skipped from execution.

## Break and Continue
- The break statement ends the loop immediately when it is encountered. 
- The continue statement skips the current iteration of the loop and continues with the next iteration. 

### Working algorithm of switch statement
-The expression is evaluated once and compafred with the values of each case label.
- If there is a match, the corresponding statements after the maching label are executed.
- If there is no match, the default statements are executed.
- If we do not use the break statement, all the statements after the matching label are also executed.
- The default clause inside the switch statement is optional.