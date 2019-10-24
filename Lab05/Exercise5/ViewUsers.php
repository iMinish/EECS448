<?php
  print "<h1>List of Users</h1>";
  print "<table border=\"1\">";
  print "<tr><th>Username:</th></tr>";

  $mysqli = new mysqli("mysql.eecs.ku.edu", "rob.chirpich", "Ah4poo4a", "robchirpich");

  /* check connection */
  if($mysqli->connect_errno) {
    printf("Connect failed: %s\n", $mysqli->connect_error);
    exit();
  }

  $query = "SELECT * FROM Users";

  if($result = $mysqli->query($query)) {
    /* fetch associative array */
    while($row = $result->fetch_assoc()) {
        print "<tr><td>" .$row["user_id"]. "</td></tr>";
    }

    $result->free(); /* free result set */
  }

  $mysqli->close(); /* close connection */
  print "</table>";
?>
