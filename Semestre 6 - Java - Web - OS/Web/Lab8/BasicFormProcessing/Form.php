<script src="https://cdn.tailwindcss.com"></script>

<?php
    echo "<h1>Form</h1>";
?>

<form action="FormProcessing.php" method="post">
    <label for="name">Name:</label>
    <input class="my-3 mx-2 p-1 shadow-md" type="text" name="name" id="name">
    <br>
    <label for="email">Email:</label>
    <input class="my-3 mx-2 p-1 shadow-md" type="email" name="email" id="email">
    <br>
    <label for="address">Address:</label>
    <input class="my-3 mx-2 p-1 shadow-md" type="text" name="address" id="address">
    <br>
    <label for="postal">Postal Code:</label>
    <input class="my-3 mx-2 p-1 shadow-md" type="text" name="postal" id="postal">
    <br>
    <label for="telephone">Telephone Number:</label>
    <input class="my-3 mx-2 p-1 shadow-md" type="text" name="telephone" id="telephone">
    <br>
    <input class="my-3 mx-2 shadow-md rounded-lg py-1 px-2" type="submit" value="Submit">
</form>
