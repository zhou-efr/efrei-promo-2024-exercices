<?php
    $temp = $_POST["temperature"];
    $inputUnit = $_POST["inputUnit"];
    $outputUnit = $_POST["outputUnit"];
    $result = 0;

    echo "The temperature is $temp $inputUnit";
    echo "<br>";
    echo "The temperature in $outputUnit is ";

    if ($inputUnit == "Celsius") {
        if ($outputUnit == "Fahrenheit") {
            $result = $temp * 1.8 + 32;
        } else if ($outputUnit == "Kelvin") {
            $result = $temp + 273.15;
        }
    } else if ($inputUnit == "Fahrenheit") {
        if ($outputUnit == "Celsius") {
            $result = ($temp - 32) / 1.8;
        } else if ($outputUnit == "Kelvin") {
            $result = ($temp + 459.67) * 5 / 9;
        }
    } else if ($inputUnit == "Kelvin") {
        if ($outputUnit == "Celsius") {
            $result = $temp - 273.15;
        } else if ($outputUnit == "Fahrenheit") {
            $result = $temp * 9 / 5 - 459.67;
        }
    }
?>

<p><?php echo "The temperature in $outputUnit is $result" ?></p>
