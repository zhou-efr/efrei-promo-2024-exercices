<!doctype html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Administration</title>
    <script src="https://cdn.tailwindcss.com"></script>
    <?php
    session_start();
    ?>
</head>
<body>
<h1 class="text-lg font-bold m-1">Administration</h1>
<p class="text-sm m-2 text-gray-200 italic">
    Welcome <?php echo $_SESSION['username']; ?>
</p>
</body>
</html>
