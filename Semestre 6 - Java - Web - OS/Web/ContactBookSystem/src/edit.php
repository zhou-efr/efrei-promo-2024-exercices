<!DOCTYPE html>
<html lang="en">
<?php
$id = -1;
$name = '';
$email ='';
$phone = '';
$address = '';
$gender = '';
$relationship = '';
$dateOfBirth = '';

include "db/conn.php";

$id = $_GET['id'];
$sql = "SELECT * FROM contacts WHERE id = $id";
$result = mysqli_query($conn, $sql);

if (mysqli_num_rows($result) > 0) {
    while ($row = mysqli_fetch_assoc($result)) {
        $id = $row['id'];
        $name = $row['username'];
        $email = $row['email'];
        $phone = $row['phoneNumber'];
        $address = $row['address'];
        $gender = $row['gender'];
        $relationship = $row['relationship'];
        $dateOfBirth = $row['dateOfBirth'];
    }
}else{
    die('<script>alert("failed to retrieve data");location.href="view.php";</script>');
}
?>
<head>
    <meta charset="UTF-8">
    <title>Edit profile <?php echo $name ?></title>
    <script src="https://cdn.tailwindcss.com"></script>
</head>
<body>
<h1 class="m-1 text-xl font-bold">Edit profile <?php echo $name ?></h1>
    <form class="m-3 md:w-2/3 lg:w-1/3" action="db/update.php?id=<?php echo $id ?>" method="post">
        <div class="w-full px-3">
            <label class="block uppercase tracking-wide text-gray-700 text-xs font-bold mb-2" for="userid">
                Id
            </label>
            <input readonly value="<?php echo ($id)?:"" ?>" class="appearance-none block w-full bg-gray-200 text-gray-700 border border-gray-200 rounded py-3 px-4 mb-3 leading-tight focus:outline-none focus:bg-white focus:border-gray-500" id="userid" type="text" name="userid" placeholder="id">
        </div>
        <div class="w-full px-3">
            <label class="block uppercase tracking-wide text-gray-700 text-xs font-bold mb-2" for="name">
                Name
            </label>
            <input value="<?php echo ($name)?:"" ?>" class="appearance-none block w-full bg-gray-200 text-gray-700 border border-gray-200 rounded py-3 px-4 mb-3 leading-tight focus:outline-none focus:bg-white focus:border-gray-500" id="name" type="text" name="name" placeholder="Name">
        </div>
        <div class="w-full px-3">
            <label class="block uppercase tracking-wide text-gray-700 text-xs font-bold mb-2" for="email">
                Email
            </label>
            <input value="<?php echo ($email)?:"" ?>" class="appearance-none block w-full bg-gray-200 text-gray-700 border border-gray-200 rounded py-3 px-4 mb-3 leading-tight focus:outline-none focus:bg-white focus:border-gray-500" id="email" type="text" name="email" placeholder="Email">
        </div>
        <div class="w-full px-3">
            <label class="block uppercase tracking-wide text-gray-700 text-xs font-bold mb-2" for="phone">
                Phone
            </label>
            <input value="<?php echo ($phone)?:"" ?>" class="appearance-none block w-full bg-gray-200 text-gray-700 border border-gray-200 rounded py-3 px-4 mb-3 leading-tight focus:outline-none focus:bg-white focus:border-gray-500" id="phone" type="text" name="phone" placeholder="Phone">
        </div>
        <div class="w-full px-3">
            <label class="block uppercase tracking-wide text-gray-700 text-xs font-bold mb-2" for="address">
                Address
            </label>
            <input value="<?php echo ($address)?:"" ?>" class="appearance-none block w-full bg-gray-200 text-gray-700 border border-gray-200 rounded py-3 px-4 mb-3 leading-tight focus:outline-none focus:bg-white focus:border-gray-500" id="address" type="text" name="address" placeholder="Address">
        </div>
        <div class="w-full px-3">
            <label class="block uppercase tracking-wide text-gray-700 text-xs font-bold mb-2" for="birthday">
                Birthday
            </label>
            <input class="appearance-none block w-full bg-gray-200 text-gray-700 border border-gray-200 rounded py-3 px-4 mb-3 leading-tight focus:outline-none focus:bg-white focus:border-gray-500" id="birthday" type="date" name="birthday" placeholder="Birthday" value="<?php echo ($dateOfBirth)?$dateOfBirth:"" ?>">
        </div>
        <div class="w-full px-3 mb-2">
            <label class="block uppercase tracking-wide text-gray-700 text-xs font-bold mb-2" >
                Gender
            </label>
            <input <?php echo ($gender == 'male')?"checked":"" ?> type="radio" id="male" name="gender" value="male">
            <label for="male">Male</label>
            <input <?php echo ($gender == 'female')?"checked":"" ?> type="radio" id="female" name="gender" value="female">
            <label for="female">Female</label>
            <input <?php echo ($gender == 'other')?"checked":"" ?> type="radio" id="other" name="gender" value="other">
            <label for="other">Other</label>
        </div>
        <div class="w-full px-3">
            <label class="block uppercase tracking-wide text-gray-700 text-xs font-bold mb-2" for="relationship">
                Relationship
            </label>
            <select class="block appearance-none w-full bg-gray-200 border border-gray-200 text-gray-700 py-3 px-4 pr-8 mb-2 rounded leading-tight focus:outline-none" name="relationship" id="relationship">
                <?php
                echo '<option '.(($relationship == 'please select')?"selected":"").' value="please select">Please select</option>';
                echo '<option '.(($relationship == 'family')?"selected":"").' value="family">Family</option>';
                echo '<option '.(($relationship == 'friend')?"selected":"").' value="friend">Friend</option>';
                echo '<option '.(($relationship == 'colleague')?"selected":"").' value="colleague">Colleague</option>';
                echo '<option '.(($relationship == 'other')?"selected":"").' value="other">Other</option>';
                ?>
            </select>
        </div>
        <div class="w-full px-3">
            <input type="submit" value="submit" class="block hover:bg-gray-300 w-full px-4 py-2 rounded-lg font-medium bg-gray-200 border-gray-400">
        </div>
    </form>
</body>
</html>