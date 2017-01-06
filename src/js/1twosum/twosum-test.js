'use strict';

import expect from 'chai'
import twoSum from 'twosum'

describe('*1. Two Sum*', function () {
    let test = (input, target, expVal) => {
        it(`${input}, target = ${target}`, function () {
            expect(twoSum(input)).to.be.eq(expVal)
        })
    };


});