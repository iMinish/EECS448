<?php
  $mysqli = new mysqli("mysql.eecs.ku.edu", "rob.chirpich", "Ah4poo4a", "robchirpich");

  /* check connection */
  if($mysqli->connect_errno) {
    printf("Connect failed: %s\n", $mysqli->connect_error);
    exit();
  }

  $newUser = $_POST["newUser"];
  $query = "SELECT * FROM Users WHERE user_id = '$newUser'";
  $result = $mysqli->query($query);

  if($newUser == NULL || $newUser == "") {
    printf("Enter a valid Username.\n");
  } else if(mysqli_num_rows($result) > 0) {
    printf("This Username has already been taken.\n");
  } else {
    $mysqli->query("INSERT INTO Users (user_id) VALUES ('$newUser')");
    printf("Username successfully added to the database.\n");
  }

  $mysqli->close(); /* close connection */
?>
