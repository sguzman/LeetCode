// @flow

'use strict';

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {[number, number]}
 */
module.exports.twoSum = function(nums: number[], target: number): [number, number] {
    let map: {[diff:number]: number} = {};

    for (let index: number of nums) {
        let value: number = nums[index];
        if (!map[value])
            map[target - value] = index;
        else
            return [map[target - value], index];
    }
};