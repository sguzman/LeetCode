// @flow

'use strict';

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {[number, number]}
 */
export default function(nums: number[], target: number): [number, number] {
    let map: {[diff:number]: number} = {};
    let idx: [number, number] = [-1, -1];

    for (let index: number of nums) {
        let value: number = nums[index];
        if (!map[value])
            map[target - value] = index;
        else {
            idx = [map[target - value], index];
            break;
        }
    }

    return idx;
};