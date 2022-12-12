/**
 * @param {number[]} nums
 * @return {number[]}
 */
const majorityElement = nums => {
    const mp = {};

    for (let i = 0; i < nums.length; i++) {
        if (!mp[nums[i]]) mp[nums[i]] = 1;
        else mp[nums[i]]++;
    }

    const keys = Object.keys(mp);
    const r = nums.length / 3;
    const ans = [];
    keys.map(key => {
        if (mp[key] > r) ans.push(key);
    });

    return ans;
};
