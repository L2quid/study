<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <?php include('print.php'); ?>
    <title></title>
  </head>
  <body>
    <h1>데이터 삭제</h1>
    <form action="delete_process.php" method="post">
      <h2><?php
      include('connect.php');
      $sql = "SELECT * FROM topic where id=".$_POST['id'];
      $result = mysqli_query($conn, $sql);
      $row = mysqli_fetch_array($result);
      echo $row['title'];
      ?></h2>
      <p>
      <?php
      include('connect.php');
      $sql = "SELECT * FROM topic where id=".$_POST['id'];
      $result = mysqli_query($conn, $sql);
      $row = mysqli_fetch_array($result);
      echo $row['description'];
       ?>
      </p>
<input type="submit" value="삭제하기" onClick="window.close()">
<input type="hidden" name="id" value="<?=$_POST['id']?>">
    </form>
  </body>
</html>
