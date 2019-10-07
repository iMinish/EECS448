<?php
  error_reporting(E_ALL);
  ini_set("display_errors", 1);

  echo "<link rel='stylesheet' type='text/css' href='style.css'/>";

  $username = $_POST["username"];
  $password = $_POST["password"];
  $burgerQuantity = $_POST["burger"];
  $chickenQuantity = $_POST["chicken"];
  $waterQuantity = $_POST["water"];
  $shippingOption = $_POST["shipping"];
  $burgerCost = $burgerQuantity * 5;
  $chickenCost = $chickenQuantity * 10;
  $waterCost = $waterQuantity * 15;
  $shippingCost = 0;
  $totalCost = 0;

  if($shippingOption == "seven") {
    $shippingCost = 0;
    $totalCost = $burgerCost + $chickenCost + $waterCost + $shippingCost;

    echo "<div align=center><br>Welcome to Rob's EECS448 Web Store, $username<br>";
    echo "Your password is: $password<br><br>";
    echo "Here is your Receipt:<br><br>";

    echo "You purchased $burgerQuantity Burgers for $5.00 each. Burger Sub-Total is $$burgerCost.00<br>";
    echo "You purchased $chickenQuantity Chicken Tenders and Fries for $10.00 each. Chicken Tenders and Fries Sub-Total is $$chickenCost.00<br>";
    echo "You purchased $waterQuantity Waters for $15.00 each. Water Sub-Total is $$waterCost.00<br><br>";

    echo "You picked Seven Day Shipping at a rate of $$shippingCost.00<br><br>";
    echo "Your Total Cost is $$totalCost.00<br></div>";
  } else if($shippingOption == "overnight") {
    $shippingCost = 50;
    $totalCost = $burgerCost + $chickenCost + $waterCost + $shippingCost;

    echo "<div align=center><br>Welcome to Rob's EECS448 Web Store, $username<br>";
    echo "Your password is: $password<br><br>";
    echo "Here is your Receipt:<br><br>";

    echo "You purchased $burgerQuantity Burgers for $5.00 each. Burger Sub-Total is $$burgerCost.00<br>";
    echo "You purchased $chickenQuantity Chicken Tenders and Fries for $10.00 each. Chicken Tenders and Fries Sub-Total is $$chickenCost.00<br>";
    echo "You purchased $waterQuantity Waters for $15.00 each. Water Sub-Total is $$waterCost.00<br><br>";

    echo "You picked Overnight Shipping at a rate of $$shippingCost.00<br><br>";
    echo "Your Total Cost is $$totalCost.00<br></div>";
  } else if($shippingOption == "three") {
    $shippingCost = 5;
    $totalCost = $burgerCost + $chickenCost + $waterCost + $shippingCost;

    echo "<div align=center><br>Welcome to Rob's EECS448 Web Store, $username<br>";
    echo "Your password is: $password<br><br>";
    echo "Here is your Receipt:<br><br>";

    echo "You purchased $burgerQuantity Burgers for $5.00 each. Burger Sub-Total is $$burgerCost.00<br>";
    echo "You purchased $chickenQuantity Chicken Tenders and Fries for $10.00 each. Chicken Tenders and Fries Sub-Total is $$chickenCost.00<br>";
    echo "You purchased $waterQuantity Waters for $15.00 each. Water Sub-Total is $$waterCost.00<br><br>";

    echo "You picked Three Day Shipping at a rate of $$shippingCost.00<br><br>";
    echo "Your Total Cost is $$totalCost.00<br></div>";
  }
?>
