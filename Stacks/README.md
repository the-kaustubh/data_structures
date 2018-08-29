# Stacks

*Usage*

- Creating a Stack
  ```C
   Stack createStack(int size);

  ```
    > Creates and Returns a stack of given size.

   - size : integer : size of the Stacks


- The `Push` function
   ```C
   int stPush(Stack s, int value);

   ```
    > Pushes a value onto the stack.

   - s     : Stack : The stack to which the value has to be pushed
   - value : int   : the value to be pushed

 - The `Pop` function
    ```C
    int stPop(Stack s);

    ```
      > Pops the top value from stack and _returns_ the popped value.

    - s     : Stack : The stack to which the value has to be pushed

- The `Peek` function
  ```C
   int stPeek(Stack s);

   ```
    > Returns the top value without popping it.

   - s     : Stack : The stack to which the value has to be pushed
