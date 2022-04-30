<?php
// TODO : secure with regex
$name = $_POST['name'];
$email = $_POST['email'];
$phone = $_POST['phone'];
$address = $_POST['address'];
$birthday = $_POST['birthday'];
$gender = $_POST['gender'];
$relationship = $_POST['relationship'];

include "conn.php";

$sql = 'insert into contacts (username, phoneNumber, email, address, gender, relationship, dateOfBirth) VALUES ('.
    "'$name', '$phone', '$email', '$address', '$gender', '$relationship', '$birthday');";

mysqli_query($conn, $sql);

if (mysqli_affected_rows($conn) <= 0){
    die('<script>alert("error");window.history.go(-1);</script>');
}
echo('<script>alert("success");window.history.go(-1);</script>');
?>