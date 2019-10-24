<?php
  $mysqli = new mysqli("mysql.eecs.ku.edu", "rob.chirpich", "Ah4poo4a", "robchirpich");
  $user = $_POST["user"];

  print "<h1>List of Posts by " .$user. "</h1>";
  print "<table border=\"1\">";
  print "<tr><th>Posts:</th></tr>";

  /* check connection */
  if($mysqli->connect_errno) {
    printf("Connect failed: %s\n", $mysqli->connect_error);
    exit();
  }

  $posts = "SELECT * FROM Posts WHERE author_id='$user'";

  if($result = $mysqli->query($posts)) {
    /* fetch associative array */
    while($row = $result->fetch_assoc()) {
        print "<tr><td>" .$row["content"]. "</td></tr>";
    }

    $result->free(); /* free result set */
  }

  $mysqli->close(); /* close connection */
  print "</table>";
?>
