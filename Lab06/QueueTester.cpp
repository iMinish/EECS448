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
}

void QueueTester::test01()
{
  Queue* test1 = new Queue();
  if(test1->isEmpty() == true)
    std::cout << "[Test #1] Newly created Queue is empty: PASSED\n";
  else
    std::cout << "[Test #1] Newly created Queue is empty: FAILED\n";
  delete test1;
}

void QueueTester::test02()
{
  Queue* test2 = new Queue();
  test2->enqueue(1);
  if(test2->isEmpty() == false)
    std::cout << "[Test #2] Enqueing a value makes the Queue not empty: PASSED\n";
  else
    std::cout << "[Test #2] Enqueing a value makes the Queue not empty: FAILED\n";
  delete test2;
}

void QueueTester::test03()
{
  Queue* test3 = new Queue();
  test3->enqueue(5);
  if(test3->peekFront() == 5)
    std::cout << "[Test #3] Enqueue 5 on empty queue then peekFront returns 5: PASSED\n";
  else
    std::cout << "[Test #3] Enqueue 5 on empty queue then peekFront returns 5: FAILED\n";
  delete test3;
}

void QueueTester::test04()
{
  Queue* test4 = new Queue();
  test4->enqueue(0);
  test4->enqueue(5);
  if(test4->peekFront() == 5)
    std::cout << "[Test #4] Enqueing two values (0, 5) on empty queue then peekFront returns 0: PASSED\n";
  else
    std::cout << "[Test #4] Enqueing two values (0, 5) on empty queue then peekFront returns 0: FAILED\n";
  delete test4;
}
