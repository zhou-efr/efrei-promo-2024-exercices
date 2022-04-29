<!doctype html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Search page</title>
    <script src="https://cdn.tailwindcss.com"></script>
</head>
<body>
<div class="flex flex-col justify-center items-center gap-4">
    <h1 class="text-4xl font-bold">Search</h1>
    <form action="search.php" method="post">
        <input type="text" name="search" placeholder="Search" class="appearance-none bg-gray-200 text-gray-700 border border-gray-200 rounded-lg py-2 px-3 mb-3 leading-tight focus:outline-none focus:bg-white focus:border-gray-500">
        <input type="submit" value="submit" class="hover:bg-gray-300 px-4 py-2 rounded-lg font-medium bg-gray-200 border-gray-400">
    </form>
    <?php
    include "./db/conn.php";
    $search_key = $_POST['search'] ?? '';

    if ($search_key == ''){
        echo '<p>Please enter a search key</p>';
    } else {
        $sql = "SELECT * FROM contacts WHERE username LIKE '%$search_key%'";

        $result = mysqli_query($conn, $sql);

        if (mysqli_num_rows($result) > 0) {
            echo '<table>';
            echo '<tr>';
            echo '<th>Name</th>';
            echo '<th>Phone</th>';
            echo '<th>Email</th>';
            echo '<th>Address</th>';
            echo '</tr>';
            while ($row = mysqli_fetch_assoc($result)) {
                echo '<tr>';
                echo '<td>' . $row['username'] . '</td>';
                echo '<td>' . $row['phoneNumber'] . '</td>';
                echo '<td>' . $row['email'] . '</td>';
                echo '<td>' . $row['address'] . '</td>';
                echo '</tr>';
            }
            echo '</table>';
        } else {
            echo '<p>No results found</p>';
        }
    }
    ?>
</div>
</body>
</html>

