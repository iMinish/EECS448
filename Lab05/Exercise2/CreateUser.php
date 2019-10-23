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

  if($nweUser == NULL) {
    printf("Enter a valid Username.\n");
  } else if() {
      
  } else {

  }

  $mysqli->close(); /* close connection */
?>
