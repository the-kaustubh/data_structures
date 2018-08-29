# Stacks

*Usage*

- Creating a Stack
  ```
   Stack createStack(int size);

    Creates a stack of given size.

   `size` : integer : size of the Stacks

  ```

- The `Push` function
   ```C
   int stPush(Stack s, int value);

    Pushes a value onto the stack.

   s     : Stack : The _stack_ to which the value has to be pushed
   value : int   : the value to be pushed
   ```

 - The `Pop` function
    ```C
    int stPop(Stack s);

      Pops the top value from stack and _returns_ the popped value.

    s     : Stack : The _stack_ to which the value has to be pushed
    ```
- The `Peek` function
  ``` C
   int stPeek(Stack s);

    Return the top value without popping it.

   s     : Stack : The _stack_ to which the value has to be pushed

  ```
