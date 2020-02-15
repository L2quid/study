<?php
function print_list()
{
    include('connect.php');
    $sql = "SELECT * FROM topic";
    $result = mysqli_query($conn, $sql);
    while ($row = mysqli_fetch_array($result)) {
        echo '<li><a href="index.php?id='.$row[0].'">'.$row['title'].'</a></li>';
    }
};
function print_title()
{
    if (isset($_GET['id'])) {
        include('connect.php');
        $sql = "SELECT * FROM topic where id=".$_GET['id'];
        $result = mysqli_query($conn, $sql);
        $row = mysqli_fetch_array($result);
        echo $row['title'];
    } else {
        echo 'welcome';
    }
}

function print_description()
{
    if (isset($_GET['id'])) {
        include('connect.php');
        $sql = "SELECT * FROM topic where id=".$_GET['id'];
        $result = mysqli_query($conn, $sql);
        $row = mysqli_fetch_array($result);
        echo $row['description'];
    } else {
        echo 'hello this is welcome page.';
    }
}
