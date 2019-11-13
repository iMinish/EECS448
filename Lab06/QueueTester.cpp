/**
* @author Rob Chirpich
* @file QueueTester.cpp
* @date 11/13/19
* @brief Function tests for QueueTester to verify they are working
**/
#include <iostream>
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
}

void QueueTester::test01()
{
  Queue* testQueue = new Queue();
  if(testQueue->isEmpty() == true)
    std::cout << "[Test #1] Newly created Queue is empty: PASSED\n";
  else
    std::cout << "[Test #1] Newly created Queue is empty: FAILED\n";
  delete testQueue;
}

void QueueTester::test02()
{
  Queue* testQueue = new Queue();
  testQueue->enqueue(0);
  if(testQueue->isEmpty() == false)
    std::cout << "[Test #2] Enqueing a value makes the Queue not empty: PASSED\n";
  else
    std::cout << "[Test #2] Enqueing a value makes the Queue not empty: FAILED\n";
  delete testQueue;
}

void QueueTester::test03()
{
  Queue* testQueue = new Queue();
  testQueue->enqueue(5);
  if(testQueue->peekFront() == 5)
    std::cout << "[Test #3] Enqueue 5 on empty Queue then peekFront returns 5: PASSED\n";
  else
    std::cout << "[Test #3] Enqueue 5 on empty Queue then peekFront returns 5: FAILED\n";
  delete testQueue;
}

void QueueTester::test04()
{
  Queue* testQueue = new Queue();
  testQueue->enqueue(0);
  testQueue->dequeue();
  if(testQueue->isEmpty())
    std::cout << "[Test #4] Enqueue 1 value and dequeue 1 value then isEmpty returns an empty Queue: PASSED\n";
  else
    std::cout << "[Test #4] Enqueue 1 value and dequeue 1 value then isEmpty returns an empty Queue: FAILED\n";
  delete testQueue;
}

void QueueTester::test05()
{
  Queue* testQueue = new Queue();
  for(int i = 1; i <= 5; i++)
    testQueue->enqueue(i);
  if(testQueue->isEmpty() == false)
    std::cout << "[Test #5] Enqueue 5 values then isEmpty returns a non-empty Queue: PASSED\n";
  else
    std::cout << "[Test #5] Enqueue 5 values then isEmpty returns a non-empty Queue: FAILED\n";
  delete testQueue;
}

void QueueTester::test06()
{
  Queue* testQueue = new Queue();
  for(int i = 1; i <= 5; i++)
    testQueue->enqueue(i);
  if(testQueue->peekFront() == 0)
    std::cout << "[Test #6] Enqueue 5 values then peekFront returns the first element enqueued: PASSED\n";
  else
    std::cout << "[Test #6] Enqueue 5 values then peekFront returns the first element enqueued: FAILED\n";
  delete testQueue;
}

void QueueTester::test07()
{
  Queue* testQueue = new Queue();
  testQueue->enqueue(0);
  if(testQueue->peekFront() == 0)
    std::cout << "[Test #7] Enqueue 1 value then peekFront returns the last element enqueued: PASSED\n";
  else
    std::cout << "[Test #7] Enqueue 1 value then peekFront returns the last element enqueued: FAILED\n";
  delete testQueue;
}

void QueueTester::test08()
{
  Queue* testQueue = new Queue();
  for(int i = 1; i <= 5; i++)
    testQueue->enqueue(i);
  testQueue->dequeue();
  if(testQueue->peekFront() == 2)
    std::cout << "[Test #8] Enqueue 5 values and dequeue 1 value then peekFront returns the second element enqueued: PASSED\n";
  else
    std::cout << "[Test #8] Enqueue 5 values and dequeue 1 value then peekFront returns the second element enqueued: FAILED\n";
  delete testQueue;
}

void QueueTester::test09()
{
  Queue* testQueue = new Queue();
  for(int i = 1; i <= 5; i++)
    testQueue->enqueue(i);
  if(testQueue->peekFront() == 5)
    std::cout << "[Test #9] Enqueue 5 values then peekFront returns the last element enqueued: PASSED\n";
  else
    std::cout << "[Test #9] Enqueue 5 values then peekFront returns the last element enqueued: FAILED\n";
  delete testQueue;
}

void QueueTester::test10()
{
  Queue* testQueue = new Queue();
  for(int i = 1; i <= 5; i++)
    testQueue->enqueue(i);
  testQueue->dequeue();
  if(testQueue->peekFront() == 4)
    std::cout << "[Test #10] Enqueue 5 values and dequeue 1 value then peekFront returns the second to last element enqueued: PASSED\n";
  else
    std::cout << "[Test #10] Enqueue 5 values and dequeue 1 value then peekFront returns the second to last element enqueued: FAILED\n";
  delete testQueue;
}

