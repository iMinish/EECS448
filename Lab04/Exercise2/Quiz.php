<?php
  error_reporting(E_ALL);
  ini_set("display_errors", 1);

  $answer1 = $_POST["q1answers"];
  $answer2 = $_POST["q2answers"];
  $answer3 = $_POST["q3answers"];
  $answer4 = $_POST["q4answers"];
  $answer5 = $_POST["q5answers"];

  $totalCorrect = 0;
  $percentage = 0;

  if($answer1 == "A") {
    print "<div><br>Question 1: What course is this lab for?<br>";
    print "You Answered: $answer1) EECS 210<br>";
    print "Correct Answer: D) EECS 448<br></div>";
  } else if($answer1 == "B") {
    print "<div><br>Question 1: What course is this lab for?<br>";
    print "You Answered: $answer1) EECS 368<br>";
    print "Correct Answer: D) EECS 448<br></div>";
  } else if($answer1 == "C") {
    print "<div><br>Question 1: What course is this lab for?<br>";
    print "You Answered: $answer1) EECS 388<br>";
    print "Correct Answer: D) EECS 448<br></div>";
  } else if($answer1 == "D") {
    print "<div><br>Question 1: What course is this lab for?<br>";
    print "You Answered: $answer1) EECS 448<br>";
    print "Correct Answer: D) EECS 448<br></div>";
    $totalCorrect++;
  }

  if($answer2 == "A") {
    print "<div><br>Question 2: What lab is this exercise for?<br>";
    print "You Answered: $answer2) Lab 01<br>";
    print "Correct Answer: D) Lab 04<br></div>";
  } else if($answer2 == "B") {
    print "<div><br>Question 2: What lab is this exercise for?<br>";
    print "You Answered: $answer2) Lab 02<br>";
    print "Correct Answer: D) Lab 04<br></div>";
  } else if($answer2 == "C") {
    print "<div><br>Question 2: What lab is this exercise for?<br>";
    print "You Answered: $answer2) Lab 03<br>";
    print "Correct Answer: D) Lab 04<br></div>";
  } else if($answer2 == "D") {
    print "<div><br>Question 2: What lab is this exercise for?<br>";
    print "You Answered: $answer2) Lab 04<br>";
    print "Correct Answer: D) Lab 04<br></div>";
    $totalCorrect++;
  }

  if($answer3 == "A") {
    print "<div><br>Question 3: Who is the professor for this course?<br>";
    print "You Answered: $answer3) Dr. Gibbons<br>";
    print "Correct Answer: A) Dr. Gibbons<br></div>";
    $totalCorrect++;
  } else if($answer3 == "B") {
    print "<div><br>Question 3: Who is the professor for this course?<br>";
    print "You Answered: $answer3) Dr. Johnson<br>";
    print "Correct Answer: A) Dr. Gibbons<br></div>";
  } else if($answer3 == "C") {
    print "<div><br>Question 3: Who is the professor for this course?<br>";
    print "You Answered: $answer3) Dr. Gill<br>";
    print "Correct Answer: A) Dr. Gibbons<br></div>";
  } else if($answer3 == "D") {
    print "<div><br>Question 3: Who is the professor for this course?<br>";
    print "You Answered: $answer3) Dr. Yun<br>";
    print "Correct Answer: A) Dr. Gibbons<br></div>";
  }

  if($answer4 == "A") {
    print "<div><br>Question 4: What is the name of this class?<br>";
    print "You Answered: $answer4) Embedded Systems<br>";
    print "Correct Answer: B) Software Engineering<br></div>";
  } else if($answer4 == "B") {
    print "<div><br>Question 4: What is the name of this class?<br>";
    print "You Answered: $answer4) Software Engineering<br>";
    print "Correct Answer: B) Software Engineering<br></div>";
    $totalCorrect++;
  } else if($answer4 == "C") {
    print "<div><br>Question 4: What is the name of this class?<br>";
    print "You Answered: $answer4) Discrete Structures<br>";
    print "Correct Answer: B) Software Engineering<br></div>";
  } else if($answer4 == "D") {
    print "<div><br>Question 4: What is the name of this class?<br>";
    print "You Answered: $answer4) Programming Paradigms<br>";
    print "Correct Answer: B) Software Engineering<br></div>";
  }

  if($answer5 == "A") {
    print "<div><br>Question 5: What was the first project for this class?<br>";
    print "You Answered: $answer5) Chess<br>";
    print "Correct Answer: C) Battleship<br></div>";
  } else if($answer5 == "B") {
    print "<div><br>Question 5: What was the first project for this class?<br>";
    print "You Answered: $answer5) Blackjack<br>";
    print "Correct Answer: C) Battleship<br></div>";
  } else if($answer5 == "C") {
    print "<div><br>Question 5: What was the first project for this class?<br>";
    print "You Answered: $answer5) Battleship<br>";
    print "Correct Answer: C) Battleship<br></div>";
    $totalCorrect++;
  } else if($answer5 == "D") {
    print "<div><br>Question 5: What was the first project for this class?<br>";
    print "You Answered: $answer5) Uno<br>";
    print "Correct Answer: C) Battleship<br></div>";
  }

  $percentage = ($totalCorrect / 5) * 100;
  print "<div><br>$totalCorrect / 5 correct = $percentage%</div>";
?>
