<?php
  $mysqli = new mysqli("mysql.eecs.ku.edu", "rob.chirpich", "Ah4poo4a", "robchirpich");

  /* check connection */
  if($mysqli->connect_errno) {
    printf("Connect failed: %s\n", $mysqli->connect_error);
    exit();
  }

  $postsToDelete = $_POST["checkbox"];

  if($postsToDelete == NULL) {
    print "ERROR: No checkbox selected.<br>";
  } else {
    foreach($postsToDelete as $id) {
      $query = "DELETE FROM Posts WHERE post_id = '$id'";
      if($mysqli->query($query)) {
        print "Post ID " .$id. " successfully deleted.<br>";
      } else {
        print "ERROR: " .$mysqli->error;
      }
    }
  }

  $mysqli->close(); /* close connection */
?>
