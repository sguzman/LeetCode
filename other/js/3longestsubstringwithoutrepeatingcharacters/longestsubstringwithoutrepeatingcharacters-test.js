'use strict';

const expect = require('chai').expect;
const func = require('./longestsubstringwithoutrepeatingcharacters').lengthOfLongestSubstring;

describe('*3. Longest Substring Without Repeating Characters*', function () {
        function test(input, expected) {
            it(`input=${input}, expected=${expected}`, function () {
                expect(func(input)).to.be.eq(expected);
            })
        }

    describe('', function () {
        test('abcabcbb', 3);
        test('bbbbb', 1);
        test('abcdba', 4);
    })
});