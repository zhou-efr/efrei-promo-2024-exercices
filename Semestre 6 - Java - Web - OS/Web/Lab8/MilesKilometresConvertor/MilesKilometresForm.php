<script src="https://cdn.tailwindcss.com"></script>

<?php
    echo "<h1 class='text-xl mt-2 mb-3'>Miles to Kilometres</h1>";
?>

<form action="MilesKilometresResult.php" method="post">
    <label class="ml-3">
        Miles: <input class="border rounded p-1" type="text" name="miles" />
    </label><br />
    <input class="m-3 border rounded px-2 py-1" type="submit" value="Convert" />
</form>
