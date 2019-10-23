<?php
  $mysqli = new mysqli("mysql.eecs.ku.edu", "rob.chirpich", "Ah4poo4a", "robchirpich");

  /* check connection */
  if($mysqli->connect_errno) {
    printf("Connect failed: %s\n", $mysqli->connect_error);
    exit();
  }

  $user = $_POST["user"];
  $existingUser = false;
  $newPost = $_POST["newPost"];
  $query = "SELECT user_id FROM Users WHERE user_id = '$user'";

  if($result = $mysqli->query($query)) {
    /* fetch associative array */
    if($row = $result->fetch_assoc()) {
        printf("Username " .$user. " exists.\n");
        $existingUser = true;
    } else {
      printf("Username " .$user. " does NOT exist.\n");
      $existingUser = false;
    }

    $result->free(); /* free result set */
  }

  if($existingUser == true) {
    if($newPost == NULL || $newPost == "") {
      printf("Cannot create an empty Post.\n");
    } else {
      $query = "INSERT INTO Posts (content, author_id) VALUES ('$newPost', '$user')";

      if($result = $mysqli->query($query)) {
        printf("Post by " .$user. " successfully created.\n");
      }

      $result->free(); /* free result set */
    }
  }

  $mysqli->close(); /* close connection */
?>
