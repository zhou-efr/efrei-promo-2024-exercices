<script src="https://cdn.tailwindcss.com"></script>

<form class="m-2" action="TemperatureConversionResult.php" method="post">
    <div class="flex flex-wrap -mx-3 mb-6">
        <div class="w-full px-3">
            <label class="block uppercase tracking-wide text-gray-700 text-xs font-bold mb-2" for="temperature">
                Temperature
            </label>
            <input class="appearance-none block w-full bg-gray-200 text-gray-700 border border-gray-200 rounded py-3 px-4 leading-tight focus:outline-none focus:bg-white focus:border-gray-500" id="temperature" name="temperature" type="text" placeholder="Enter temperature">
        </div>
    </div>
    <div class="flex flex-wrap -mx-3 mb-6">
        <div class="w-full px-3">
            <label class="block uppercase tracking-wide text-gray-700 text-xs font-bold mb-2" for="inputUnit">
                Input unit
                <select class="block appearance-none w-full bg-gray-200 border border-gray-200 text-gray-700 py-3 px-4 pr-8 rounded leading-tight focus:outline-none focus:bg-white focus:border-gray-500" id="inputUnit" name="inputUnit">
                    <option value="Celsius">Celsius</option>
                    <option value="Fahrenheit">Fahrenheit</option>
                    <option value="Kelvin">Kelvin</option>
                </select>
            </label>
        </div>
    </div>
    <div class="flex flex-wrap -mx-3 mb-6">
        <div class="w-full px-3">
            <label class="block uppercase tracking-wide text-gray-700 text-xs font-bold mb-2" for="outputUnit">
                Output unit
                <select class="block appearance-none w-full bg-gray-200 border border-gray-200 text-gray-700 py-3 px-4 pr-8 rounded leading-tight focus:outline-none" id="outputUnit" name="outputUnit">
                    <option value="Celsius">Celsius</option>
                    <option value="Fahrenheit">Fahrenheit</option>
                    <option value="Kelvin">Kelvin</option>
                </select>
            </label>
        </div>
    </div>
    <div class="flex flex-wrap -mx-3 mb-6">
        <div class="w-full px-3">
            <button class="bg-blue-500 hover:bg-blue-700 text-white font-bold py-2 px-4 rounded focus:outline-none focus:shadow-outline" type="submit">
                Convert
            </button>
        </div>
    </div>
</form>
