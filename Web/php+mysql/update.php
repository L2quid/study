<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie=edge">
  <?php include('print.php'); ?>
  <title>Document</title>
</head>

<body>
  <h1>데이터 수정</h1>
  <form action="update_process.php" method="post">
    <input type="hidden" name="id" value="<?=$_GET['id']?>">
    <input type="text" name="title" placeholder="title" value="<?php print_title(); ?>"><br>
    <textarea name="description" rows="8" cols="80" placeholder="description"><?php print_description(); ?></textarea>
    <input type="submit" onClick="window.close()" value="수정하기">
  </form>
</body>

</html>
