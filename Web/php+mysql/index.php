<!DOCTYPE html>
<html lang="en">
  <head>
    <?php
    include 'print.php';
    ?>
    <meta charset="utf-8">
    <title>web</title>
  </head>
  <body>
    <h1><a href="index.php">WEB</a></h1>

<ol>
  <?php
   print_list() ?>
</ol>
<a href="insert.html"  target="popup"
onclick="window.open('http://kanishkkunal.in','popup','width=600,height=300')">추가</a>
<?php if (isset($_GET['id'])) {
       $link="<a href=\"update.php?id={$_GET['id']}\"target=\"popup\"onclick=\"window.open('http://kanishkkunal.in','popup','width=600,height=300')\">수정</a>
       <form method=\"post\" action=\"delete.php\"target=\"POPUPW\"onsubmit=\"POPUPW = window.open('about:blank','POPUPW',
   'width=600,height=400');\"><input type=\"hidden\" name=\"id\" value=\"{$_GET['id']}\"><input type=\"submit\" value=\"삭제\"></form>";
       echo($link);
   } ?>

<h2><?php print_title(); ?></h2>
<p>
<?php
 print_description();?>
</p>
    </body>
</html>
