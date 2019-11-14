/**
* @author Rob Chirpich
* @file QueueTester.cpp
* @date 11/13/19
* @brief Function tests for QueueTester to verify they are working
**/
#include "QueueTester.h"

void QueueTester::runTests()
{
  test01();
  test02();
  test03();
  test04();
  test05();
  test06();
  test07();
  test08();
  test09();
  test10();
  test11();
  test12();
  test13();
}

void QueueTester::test01()
{
  Queue* testQueue = new Queue();
  if(testQueue->isEmpty() == true) // testQueue is empty
    std::cout << "[TEST #1] Does calling isEmpty() on a Queue with 0 elements return TRUE? PASSED\n";
  else // testQueue is not empty
    std::cout << "[TEST #1] Does calling isEmpty() on a Queue with 0 elements return TRUE? FAILED\n";
  delete testQueue;
}

void QueueTester::test02()
{
  Queue* testQueue = new Queue();
  testQueue->enqueue(1);
  if(testQueue->isEmpty() == false) // testQueue is not empty
    std::cout << "[TEST #2] Does calling isEmpty() on a Queue with 1 element return FALSE? PASSED\n";
  else // testQueue is empty
    std::cout << "[TEST #2] Does calling isEmpty() on a Queue with 1 element return FALSE? FAILED\n";
  delete testQueue;
}

void QueueTester::test03()
{
  Queue* testQueue = new Queue();
  for(int i = 1; i <= 5; i++)
    testQueue->enqueue(i);
  if(testQueue->isEmpty() == false) // testQueue is not empty
    std::cout << "[TEST #3] Does calling isEmpty() on a Queue with 5 elements return FALSE? PASSED\n";
  else // testQueue is empty
    std::cout << "[TEST #3] Does calling isEmpty() on a Queue with 5 elements return FALSE? FAILED\n";
  delete testQueue;
}

void QueueTester::test04()
{
  Queue* testQueue = new Queue();
  testQueue->enqueue(1);
  testQueue->dequeue();
  if(testQueue->isEmpty() == true) // testQueue is empty
    std::cout << "[TEST #4] Does calling isEmpty() on a Queue AFTER enqueing 1 element and dequeing 1 element return TRUE? PASSED\n";
  else // testQueue is not empty
    std::cout << "[TEST #4] Does calling isEmpty() on a Queue AFTER enqueing 1 element and dequeing 1 element return TRUE? FAILED\n";
  delete testQueue;
}

void QueueTester::test05()
{
  Queue* testQueue = new Queue();
  for(int i = 1; i <= 5; i++)
    testQueue->enqueue(i);
  for(int i = 1; i <= 5; i++)
    testQueue->dequeue();
  if(testQueue->isEmpty() == true) // testQueue is empty
    std::cout << "[TEST #5] Does calling isEmpty() on a Queue AFTER enqueing 5 elements and dequeing 5 elements return TRUE? PASSED\n";
  else // testQueue is not empty
    std::cout << "[TEST #5] Does calling isEmpty() on a Queue AFTER enqueing 5 elements and dequeing 5 elements return TRUE? FAILED\n";
  delete testQueue;
}

void QueueTester::test06()
{
  Queue* testQueue = new Queue();
  for(int i = 1; i <= 5; i++)
    testQueue->enqueue(i);
  if(testQueue->peekFront() == 1) // FRONT of testQueue is 1
    std::cout << "[TEST #6] Does calling enqueue() 5 times on a Queue add elements to the BACK of the Queue? PASSED\n";
  else // FRONT of testQueue is 5 (enqueue is adding to the FRONT of the Queue)
    std::cout << "[TEST #6] Does calling enqueue() 5 times on a Queue add elements to the BACK of the Queue? FAILED\n";
  delete testQueue;
}

void QueueTester::test07()
{
  Queue* testQueue = new Queue();
  for(int i = 1; i <= 5; i++)
    testQueue->enqueue(i);
  if(testQueue->peekFront() == 5) // FRONT of testQueue is 5 (enqueue is adding to the BACK of the Queue)
    std::cout << "[TEST #7] Does calling enqueue() 5 times on a Queue add elements to the FRONT of the Queue? PASSED\n";
  else // FRONT of testQueue is 1
    std::cout << "[TEST #7] Does calling enqueue() 5 times on a Queue add elements to the FRONT of the Queue? FAILED\n";
  delete testQueue;
}

void QueueTester::test08()
{
  Queue* testQueue = new Queue();
  testQueue->enqueue(1);
  if(testQueue->peekFront() == 1) // peekFront() correctly returns the FRONT of a Queue with 1 element
    std::cout << "[TEST #8] Does calling peekFront() on a Queue with 1 element return this element? PASSED\n";
  else // peekFront() incorrectly returns the FRONT of a Queue with 1 element
    std::cout << "[TEST #8] Does calling peekFront() on a Queue with 1 element return this element? FAILED\n";
  delete testQueue;
}

void QueueTester::test09() // This test is verifying that calling peekFront() on an empty Queue throws an error
{
  Queue* testQueue = new Queue();
  try
  {
    testQueue->peekFront();
  }
  catch(const std::exception& e)
  {
    std::cout << "[TEST #9] CAUGHT ERROR... " << e.what() << ": PASSED\n";
  }
  delete testQueue;
}

void QueueTester::test10() // This test is verifying that calling dequeue() on an empty Queue throws an error
{
  Queue* testQueue = new Queue();
  try
  {
    testQueue->dequeue();
  }
  catch(const std::exception& e)
  {
    std::cout << "[TEST #10] CAUGHT ERROR... " << e.what() << ": PASSED\n";
  }
  delete testQueue;
}

void QueueTester::test11() // This test is supplementary proof that enqueue() is broken
{
  Queue* testQueue = new Queue();
  for(int i = 1; i <= 5; i++)
    testQueue->enqueue(i);
  testQueue->dequeue();
  if(testQueue->peekFront() == 2) // dequeue() is removing from the FRONT of the Queue
    std::cout << "[TEST #11] Does calling dequeue() on a non-empty Queue remove from the FRONT of the Queue? PASSED\n";
  else // dequeue() is NOT removing from the FRONT of the Queue
    std::cout << "[TEST #11] Does calling dequeue() on a non-empty Queue remove from the FRONT of the Queue? FAILED\n";
  delete testQueue;
}

void QueueTester::test12() // This test is supplementary proof that enqueue() is broken
{
  Queue* testQueue = new Queue();
  for(int i = 1; i <= 5; i++)
    testQueue->enqueue(i);
  testQueue->dequeue();
  if(testQueue->peekFront() == 4) // dequeue() is removing from the BACK of the Queue
    std::cout << "[TEST #12] Does calling dequeue() on a non-empty Queue remove from the BACK of the Queue? PASSED\n";
  else // dequeue() is NOT removing from the BACK of the Queue
    std::cout << "[TEST #12] Does calling dequeue() on a non-empty Queue remove from the BACK of the Queue? FAILED\n";
  delete testQueue;
}

void QueueTester::test13() // This test is supplementary proof that enqueue() is broken
{
  Queue* testQueue = new Queue();
  for(int i = 1; i <= 10; i++)
    testQueue->enqueue(i); // FRONT OF QUEUE [10,9,8,7,6,5,4,3,2,1] BACK OF QUEUE
  for(int i = 1; i <= 5; i++)
    testQueue->dequeue(); // FRONT OF QUEUE [5,4,3,2,1] BACK OF QUEUE
  if(testQueue->peekFront() == 5)
    std::cout << "[TEST #13] Does calling peekFront() on a Queue AFTER enqueing 10 elements and dequeing 5 elements return the FRONT element of the Queue? FAILED\n";
  else
    std::cout << "[TEST #13] Does calling peekFront() on a Queue AFTER enqueing 10 elements and dequeing 5 elements return the FRONT element of the Queue? PASSED\n";
  delete testQueue;
}
