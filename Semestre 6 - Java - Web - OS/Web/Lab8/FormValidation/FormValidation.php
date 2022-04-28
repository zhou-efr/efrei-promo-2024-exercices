<script src="https://cdn.tailwindcss.com"></script>

<h1 class="m-1">Form Validation</h1>
<form class="m-3" action="FormValidationResults.php" method="post">
    <div class="form-group">
        <label for="username">Username</label>
        <input type="text" class="form-control" id="username" name="username" placeholder="Enter username" required>
    </div>
    <div class="form-group">
        <label for="password">Password</label>
        <input type="password" class="form-control" id="password" name="password" placeholder="Enter password" required>
    </div>
    <div class="form-group">
        <label for="confirmPassword">Confirm Password</label>
        <input type="password" class="form-control" id="confirmPassword" name="confirmPassword" placeholder="Confirm password" required>
    </div>
    <div class="form-group">
        <label for="email">Email</label>
        <input type="email" class="form-control" id="email" name="email" placeholder="Enter email">
    </div>
    <div class="form-group">
        <label for="dateOfBirth">Date of Birth</label>
        <input type="date" class="form-control" id="dateOfBirth" name="dateOfBirth" required>
    </div>
    <div class="form-group">
        <label for="name">Name</label>
        <input type="text" class="form-control" id="name" name="name" placeholder="Enter name" required>
    </div>
    <div class="form-group form-check">
        <input type="checkbox" class="form-check-input" id="cgu" name="cgu" required>
        <label class="form-check-label" for="cgu">I accept the <a href="#" class="underline">cgu</a></label>
    </div>
    <button type="submit" class="btn btn-primary">Submit</button>
</form>
