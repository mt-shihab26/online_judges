const calPoints = (ops: string[]): number => {
    const arr = [];
    ops.forEach(value => {
        const len = arr.length;
        if (value === "+") {
            arr.push(arr[len - 1] + arr[len - 2]);
        } else if (value === "D") {
            arr.push(arr[len - 1] * 2);
        } else if (value === "C") {
            arr.pop();
        } else {
            arr.push(parseInt(value));
        }
    });

    const len = arr.length;
    let sum = 0;
    for (let i = 0; i < len; i++) {
        sum += arr[i];
    }

    return sum;
};
