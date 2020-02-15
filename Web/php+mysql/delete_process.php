<?php
include('connect.php');
$sql = "
delete from topic where id={$_POST['id']}
";
mysqli_query($conn, $sql);
