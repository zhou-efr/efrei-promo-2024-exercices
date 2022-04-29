<?php
include "../conn.php";

$username = mysqli_real_escape_string($conn, $_POST['username']);
$password = mysqli_real_escape_string($conn, $_POST['password']);
$password2 = mysqli_real_escape_string($conn, $_POST['password_confirm']);
$email = mysqli_real_escape_string($conn, $_POST['email']);

if ($password != $password2) {
    die('<script>alert("Password and confirmed password not same.");window.history.go(-1);</script>');
} else {
    $sql = "select * from users where username='$username'";
    $result = mysqli_query($conn, $sql);
    $resultCheck = mysqli_num_rows($result);

    if ($resultCheck > 0) {
        die('<script>alert("username already used.");window.history.go(-1);</script>');
    } else {
        $sql = "insert into users (username, password, email, role, lastLogin) values ('$username', '".md5($password)."', '$email', 'user', '".date('Y-m-d')."')";
        mysqli_query($conn, $sql);
        if (mysqli_affected_rows($conn) > 0) {
            echo('<script>alert("successfully register");location.href="../../view.php";</script>');
        } else {
            die('<script>alert("Failed to register.");window.history.go(-1);</script>');
        }
    }
}