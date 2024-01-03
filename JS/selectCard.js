let cardNumber = 1234567891011121
let cardString = Array.from(String(cardNumber))
console.log(`Selecionar o cartão com final ${cardString[12]}${cardString[13]}${cardString[14]}${cardString[15]}?`)
//poderia usar o de baixo, maa ele ficou separando por vírgulas
//${cardString.slice(12, 16)}