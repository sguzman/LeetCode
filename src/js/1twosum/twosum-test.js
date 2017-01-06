'use strict';

import expect from 'chai'
import twoSum from 'twosum'

describe('*1. Two Sum*', function () {
    function test(input, target, expVal) {
        it(`${input}, target = ${target}`, function () {
            expect(twoSum(input)).to.be.eq(expVal)
        })
    }

    describe('[Two Sum Tests]', function () {
        test([2, 7, 11, 15], 9, [0, 1]);
        test([3, 7, 11, 15, 6, 2, 9], 8, [4, 5]);
        test([3, 2, 4], 6, [1, 2]);
        test([0, 4, 3, 0], 0, [0, 3]);
    })
});