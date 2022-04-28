<?php
$title = "Contact Information";
$name = "APIIT";
$email = "anand@apiit.edu.my";
$addresses[0] = "Lot 6 Technology Park Malaysia";
$addresses[1] = "Bukit Jalil";
$addresses[2] = "Kuala Lumpur";
$postcode = "57000";
$telephone = "0389961000";
?>

<h1><?php echo $title ?></h1>

<ul>
    <?php
    foreach ($addresses as $address) {
        echo "<li>$address</li>";
    }
    ?>
</ul>
