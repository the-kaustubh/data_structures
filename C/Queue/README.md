# Queues

*Usage*

- Creating a Queue
  ```C
   Queue createQueue(int size);

  ```
    > Creates and Returns a Queue of given size.

   - size : integer : size of the Queues


- The `Enqueue` function
   ```C
   int EnQueue(Queue q, int value);

   ```
    > Enqueues a value onto the Queue.

   q     : Queue : The Queue to which the value has to be appended
   value : int   : the value to be appended
    > Appends a value onto the Queue.

   - q     : Queue : The Queue to which the value has to be appended
   - value : int   : the value to be appended

 - The `DeQueue` function
    ```C
    int DeQueue(Queue q);

    ```
      > Removes the top value from Queue and _returns_ the removed value.

    - q     : Queue : The Queue to which the value has to be appended
