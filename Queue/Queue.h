/*
 * Implementation of Queue in C.
 * Author : Kaustubh K Murumkar.
 */

  #ifndef __STDIO_H
   #include <stdio.h>
  #endif
  #ifndef __STDLIB_H
   #include <stdlib.h>
  #endif

/*
 * Define a Queue
 * A Queue has a front and a rear
 * data can be added from the rear end
 * and removed from front end.
 * It is a FIFO (First-In First-Out) data Structure
 */
 typedef struct queue {
  int size, rear;
  int *data;
 } *Queue;

/*
 * This function creates an instance of a queue
 * It should allocate `size` amount of memory
 * to the `data` field.
 * fields `front` an `rear` should be initialized to -14
 *
 * Usage:
 *    Queue q1 = createQueue(40);
 *
 *  creates a queue of size 40
 */
 Queue createQueue(int size);

/*
 * Removes the first data in line
 * and returns it
 *
 * takes one parameter `q`
 * `q` specifies the instance of the Queue DS.
 * Usage:
 * int first = DeQueue(q1);
 */
 int DeQueue(Queue q);

/*
 * Append the data in line
 *
 * takes two parameters `q` & `value`
 * `q` specifies the instance of the Queue DS.
 * `value` specifies the value to be appended last.
 * Usage:
 * int first = DeQueue(q1);
 */
 void EnQueue(Queue q, int value);

/*
 * Displays the contents of the Queue
 * without removing any element.
 * Usage:
 *  displayQueue(q1);
 */
 void displayQueue(Queue q);

/*
 * Returns true `1` if empty
 * false `0` if not
 *
 */
int isEmpty(Queue q);

/*
 * internally used to adjust the Queue
 */
 static void __adjust__(int * arr, int end);
