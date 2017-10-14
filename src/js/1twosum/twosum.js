'use strict';

/**
    * @param {number[]} nums
    * @param {number} target
    * @return {[number, number]}
*/
module.exports.twoSum = function(nums, target) {
    let map = new Map();
    for (let idx = 0; idx < nums.length; ++idx) {
        if (map.has(nums[idx])) {
            return [map.get(nums[idx]), idx];
        }

        map.set(target - nums[idx], idx);
    }

    return [-1, -1];
};