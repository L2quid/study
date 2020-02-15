<!DOCTYPE html>
<html>

<head>
    <meta charset="utf-8">
    <?php include 'func.php'; ?>
    <title><?php print_title(); ?></title>
</head>

<body>
    <h1><a href="index.php">WEB</a></h1>
    <ol>
        <?php
        print_list();
      ?>
    </ol>
    <h2>
        <?php
        print_title();
        ?>
    </h2>
    <?php
    print_description();
     ?>
    <br>
    <a href="./form.html">form테스트</a><br>
    <a href="create.php">create</a>
    <?php if (isset($_GET['id'])) { ?>
    <a href="update.php?id=<?php echo $_GET['id']?>">update</a>
    <form action="delete_process.php" method="post">
      <input type="hidden" name="id" value="<?=$_GET['id'] ?>">
      <input type="submit" value="삭제">
      <textarea name="test" rows="8" cols="80">
<?php
if (isset($_GET['id'])&&$_GET['id']!='') {
         $desc= file_get_contents('data/'.$_GET['id']);
         echo $desc;
     }
?>
<?='hello'?>
      </textarea>
    </form>
  <?php }; ?>

</body>


</html>
