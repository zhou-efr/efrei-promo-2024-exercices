<?php
// TODO : secure with regex
// TODO : check if the values have changed
$id = intval($_GET['id']) or die('<script>alert("invalid id");window.history.go(-1);</script>');
$name = $_POST['name'];
$email = $_POST['email'];
$phone = $_POST['phone'];
$address = $_POST['address'];
$birthday = $_POST['birthday'];
$gender = $_POST['gender'];
$relationship = $_POST['relationship'];

////display values
//echo $id.'<br/>';
//echo $name.'<br/>';
//echo $email.'<br/>';
//echo $phone.'<br/>';
//echo $address.'<br/>';
//echo $birthday.'<br/>';
//echo $gender.'<br/>';
//echo $relationship.'<br/>';

include "conn.php";

$sql = "update contacts set ".
    "username='$name', ".
    "phoneNumber='$phone', ".
    "email='$email', ".
    "address='$address', ".
    "gender='$gender', ".
    "relationship='$relationship', ".
    "dateOfBirth='$birthday' ".
    "where id=$id;";

//echo $sql;
mysqli_query($conn, $sql);

if (mysqli_affected_rows($conn) <= 0){
    die('<script>alert("edit error");window.history.go(-1);</script>');
}
echo('<script>alert("edit success");window.history.go(-1);</script>');
?>