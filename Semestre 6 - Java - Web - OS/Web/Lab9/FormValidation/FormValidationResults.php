<?php
// Username – max 15 characters, letters and numbers only – required
// Password – confirmed via password text boxes, minimum length of four characters – required.
// E-mail – valid e-mail structure
// Date of Birth – to purchase items, a customer should be at least 18 years of age – required.
// Name – Maximum Length of 50 characters – required.
// cgu acceptance – required

$username = $_POST['username'];
$password = $_POST['password'];
$password2 = $_POST['confirmPassword'];
$email = $_POST['email'];
$dob = $_POST['dateOfBirth'];
$name = $_POST['name'];
$cgu = $_POST['cgu'];

$valid = true;

if (empty($username)) {
    echo "Username is required<br>";
    $valid = false;
} else if (strlen($username) > 15) {
    echo "Username must be less than 15 characters<br>";
    $valid = false;
} else if (!preg_match("/^[a-zA-Z0-9]+$/", $username)) {
    echo "Username must be letters and numbers only<br>";
    $valid = false;
}

if (empty($password)) {
    echo "Password is required<br>";
    $valid = false;
} else if (strlen($password) < 4) {
    echo "Password must be at least 4 characters<br>";
    $valid = false;
}

if (empty($password2)) {
    echo "Password confirmation is required<br>";
    $valid = false;
} else if ($password != $password2) {
    echo "Passwords do not match<br>";
    $valid = false;
}

if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
    echo "Email is not valid<br>";
    $valid = false;
}

if (empty($dob)) {
    echo "Date of Birth is required<br>";
    $valid = false;
} else if (strtotime($dob) > time() - 18 * 365 * 24 * 60 * 60) {
    echo "You must be at least 18 years old to purchase items<br>";
    $valid = false;
}

if (empty($name)) {
    echo "Name is required<br>";
    $valid = false;
} else if (strlen($name) > 50) {
    echo "Name must be less than 50 characters<br>";
    $valid = false;
}

if (empty($cgu)) {
    echo "You must accept the cgu<br>";
    $valid = false;
}

if ($valid) {
    echo "Form is valid";
}
?>
