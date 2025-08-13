let spendingSystem = {
   incomes: [7500, 200, 1200],
   expenses: [250, 300, 100, 30, 1000, 300, 1500]
};

function plus(array) {
    let total = 0;
    for(let sum of array) {
        total += sum;
        return total;
    }
}

function calc() {
    const calcIncomes = plus(spendingSystem.incomes);
    const calcExpenses = plus(spendingSystem.expenses);
    const total = calcIncomes - calcExpenses;

    if (total >= 0) {
        console.log(`O saldo da família está positivo. Atualmente o valor é de: ${total} reais.`);
    } else {
        console.log(`O saldo da família está negativo. Atualmente o valor é de: ${total} reais.`);
    }
}

calc();