<?php
include "../conn.php";

$username = mysqli_real_escape_string($conn, $_POST['username']);
$password = mysqli_real_escape_string($conn, $_POST['password']);

$sql = "SELECT * FROM users WHERE username = '$username' AND password = '".md5($password)."'";
$result = mysqli_query($conn, $sql);

if ($row=mysqli_fetch_array($result)) {
    echo('<script>alert("'.$row['id'].'");</script>');
    session_start();
    $_SESSION['user_id'] = $row['id'];
    $_SESSION['username'] = $row['username'];
    $_SESSION['password'] = $row['password'];
    $_SESSION['email'] = $row['email'];
    $_SESSION['role'] = $row['role'];
    $_SESSION['lastLogin'] = date("Y-m-d");

    $sql = "UPDATE users SET lastLogin = '".date("Y-m-d")."' WHERE id = ".$row['id'];
    mysqli_query($conn, $sql);
    echo('<script>alert("'.$row['username'].'");</script>');

    if($row['role'] == 'admin'){
        echo('<script>alert("successfully logged as administrator");location.href="../../admin.php";</script>');
    }else{
        echo('<script>alert("successfully login");location.href="../../view.php";</script>');
    }
}
die('<script>alert("Failed to register.");location.href="../../login.html";</script>');