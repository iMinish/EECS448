<?php
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

  if($shipping == "seven") {
    $shippingCost = 0;
  } else if($shipping == "overnight") {
    $shippingCost = 50;
  } else if($shipping == "three") {
    $shippingCost = 5;
  }

  $totalCost = $burgerCost + $chickenCost + $waterCost + $shippingCost;

  echo "Welcome to Rob's EECS448 Web Store, " .$username.;
  echo "Your password is: " .$password.;
?>
