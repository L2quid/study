<?php include 'func.php'; ?>
<form action="update_process.php" method="post">
  <input type="hidden" name="old_title" value="<?php echo $_GET['id'] ?>">
  <p>
    <input type="text" name="title" placeholder="Title" value="<?php print_title(); ?>">
  </p>
  <p>
    <textarea name="description" rows="8" cols="80"><?php print_description(); ?></textarea>
  </p>
  <input type="submit">
</form>
