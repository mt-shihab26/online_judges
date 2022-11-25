const minimumSum = (num: number): number => {
    let nums = [];
    while (num > 0) {
        nums.push(num % 10);
        num = Math.floor(num / 10);
    }
    nums.sort((a, b) => a - b);
    const new1 = nums[0] * 10 + nums[2];
    const new2 = nums[1] * 10 + nums[3];
    return new1 + new2;
};