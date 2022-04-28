<script src="https://cdn.tailwindcss.com"></script>

<?php
//name, email, address, postal code and telephone number
$name = $_POST['name'];
$email = $_POST['email'];
$address = $_POST['address'];
$postalCode = $_POST['postalCode'];
$telephoneNumber = $_POST['telephoneNumber'];
?>

<div>
    <h1 class="text-xl">Thank you for your order!</h1>
    <p>
        Your order has been received and is being processed.
        You will receive an email confirmation shortly.
    </p>
    <p class="italic">
        Order details:
    </p>
    <ul>
        <li><span class="font-bold">Name:</span> <?php echo $name; ?></li>
        <li><span class="font-bold">Email:</span> <?php echo $email; ?></li>
        <li><span class="font-bold">Address:</span> <?php echo $address; ?></li>
        <li><span class="font-bold">Postal Code:</span> <?php echo $postalCode; ?></li>
        <li><span class="font-bold">Telephone Number:</span> <?php echo $telephoneNumber; ?></li>
    </ul>
</div>