let type = "C";
    // C = Celsius
    // F = Fahrenheit
let temperature = "319";
let total = 0;

if (type === "C") {
    Number(temperature);
    total = temperature * 9/5 + 32;
    console.log(`${temperature}°C são equivalentes à ${total}°F.`);
} else if (type === "F") {
    Number(temperature);
    total = (temperature - 32) * 5/9;
    console.log(`${temperature}°F são equivalentes à ${total}°C.`);
} else {
    console.log ('Tipo selecionado inválido.');
}