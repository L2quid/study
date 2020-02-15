<?php
include('connect.php');
$filtered=array(
  'title'=>mysqli_real_escape_string($conn, $_POST['title']),
  'description'=>mysqli_real_escape_string($conn, $_POST['description'])
);
$sql = "
  INSERT INTO topic
    (title, description, created)
    VALUES(
        '{$filtered['title']}',
        '{$filtered['description']}',
        NOW()
    )
";
mysqli_query($conn, $sql);
