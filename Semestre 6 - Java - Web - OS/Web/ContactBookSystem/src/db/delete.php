<?php
$id = intval($_GET['id']);

include "conn.php";

$sql = 'delete from contacts where id = '.$id.';';
mysqli_query($conn, $sql);

if (mysqli_affected_rows($conn) > 0) {
    echo('<script>alert("successfully delete data");location.href="../view.php";</script>');
}
die('<script>alert("failed to delete data");location.href="../view.php";</script>');
