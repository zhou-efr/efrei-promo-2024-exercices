<!doctype html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Read data from database</title>
    <script src="https://cdn.tailwindcss.com"></script>
</head>
<body>
<div class="flex justify-center items-center h-screen w-screen overflow-x-hidden">
    <div class="w-2/3">
        <table class="table-auto">
            <thead>
            <tr>
                <th class="px-4 py-2">Name</th>
                <th class="px-4 py-2">Email</th>
                <th class="px-4 py-2">Phone</th>
                <th class="px-4 py-2">Address</th>
                <th class="px-4 py-2">Action</th>
            </tr>
            </thead>
            <tbody>
            <?php
            include "./db/conn.php";
            $sql = "SELECT * FROM contacts";
            $result = mysqli_query($conn, $sql);
            if (mysqli_num_rows($result) > 0) {
                while ($row = mysqli_fetch_assoc($result)) {
                    echo "<tr>";
                    echo "<td class='border px-4 py-2'>" . $row['username'] . "</td>";
                    echo "<td class='border px-4 py-2'>" . $row['email'] . "</td>";
                    echo "<td class='border px-4 py-2'>" . $row['phoneNumber'] . "</td>";
                    echo "<td class='border px-4 py-2'>" . $row['address'] . "</td>";
                    echo "<td class='border px-4 py-2'><a href='edit.php?id=" . $row['id'] . "'>Edit</a> | <a href='./db/delete.php?id=" . $row['id'] . "'>Delete</a></td>";
                    echo "</tr>";
                }
            }
            ?>
            </tbody>
        </table>
    </div>
</body>
</html>