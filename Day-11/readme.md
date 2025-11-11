###  while Loop in C++

The **while loop** is used to execute a block of code repeatedly **as long as a specified condition is true**. Before each iteration, the condition is checked. If it’s true, the code runs; if it’s false, the loop stops. This means the loop may **not run even once** if the condition is false at the start.

It is mainly used when the number of iterations is **not known in advance**.

---

###  do...while Loop in C++

The **do...while loop** is similar to the while loop, but the **condition is checked after** the execution of the loop body. This ensures that the code inside the loop runs **at least once**, regardless of whether the condition is true or false.

It is mainly used when you want the loop body to execute **at least once**, even if the condition might fail later.

---

### Difference between while and do...while Loop

| Feature           | while Loop                              | do...while Loop                                |
| ----------------- | --------------------------------------- | ---------------------------------------------- |
| Condition Check   | Before executing the loop body          | After executing the loop body                  |
| Minimum Execution | May execute 0 times                     | Executes at least 1 time                       |
| Semicolon         | No semicolon after condition            | Requires semicolon after condition             |
| Use Case          | When condition needs to be tested first | When code must run once before condition check |

## Break and Continue Statements in C++

### Break Statement
The **break statement** is used to immediately exit from a loop or a switch statement.  
When the break statement is encountered inside a loop, the control jumps out of the loop and continues with the next statement after the loop.

**Key Points:**
- Used to terminate the loop early.
- Commonly used when a certain condition is met and no further iterations are required.
- Can also be used in `switch` statements to end a particular case.

---

### Continue Statement
The **continue statement** is used to skip the current iteration of a loop and move to the next iteration.  
When the continue statement is encountered, the remaining code inside the loop for that iteration is skipped, and the loop continues with the next iteration.

**Key Points:**
- Does not terminate the loop, only skips the current iteration.
- Commonly used when a certain condition needs to be ignored but the loop should continue running.
- Useful for filtering or skipping unwanted values within loops.

## Switch Statement in C++

### What is a Switch Statement?
The **switch statement** is a control statement that allows you to execute one block of code among multiple options based on the value of an expression (usually an integer or character).

It works like an advanced form of **if-else-if** ladder, making the code cleaner and more readable when multiple conditions depend on the same variable.

---

### Syntax
switch(expression) {
    case value1:
        // code to be executed if expression == value1
        break;

    case value2:
        // code to be executed if expression == value2
        break;

    ...
    default:
        // code to be executed if no case matches
}
### Key Points
Each case represents a possible value of the expression.

The break statement stops further case checking; without it, the control continues to the next case (called fall-through).

The default case runs if no other case matches.

Works only with integral or character data types (like int, char, enum).
---
## Scope of a Variable in C++

| Type            | Where Declared         | Accessible In             | Lifetime Ends        |
|------------------|------------------------|----------------------------|----------------------|
| Local Variable   | Inside function/block  | Within that block only     | When block ends      |
| Global Variable  | Outside all functions  | Entire program             | When program ends    |
| Block Variable   | Inside `{ }` braces    | Only inside that block     | When block ends      |

