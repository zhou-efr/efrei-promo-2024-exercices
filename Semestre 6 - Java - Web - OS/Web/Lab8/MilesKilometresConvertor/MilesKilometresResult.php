<script src="https://cdn.tailwindcss.com"></script>

<?php
    $Miles = $_POST["miles"];
    $Kilometres = $Miles * 1.60934;
?>

<h1 class="text-xl font-bold m-1">Miles to Kilometres</h1>
<p class="m-3">
    <?php echo $Miles; ?> miles is <?php echo $Kilometres; ?> kilometres.
</p>