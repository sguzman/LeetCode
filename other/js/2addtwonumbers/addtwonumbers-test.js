'use strict';

const expect = require('chai').expect;
const func = require('./addtwonumbers').addTwoNumbers;
const ListNode = require('./listnode').ListNode

describe('*2. Add Two Numbers*', function () {
    it('[2,4,3], [5,6,4] = [7,0,8]', function () {
        const input1 = JSON.parse('{"val": 2, "next": {"val": 4, "next": {"val": 3, "next": null}}}');
        const input2 = JSON.parse('{"val": 5, "next": {"val": 6, "next": {"val": 4, "next": null}}}');
        const expected = JSON.parse('{"val": 7, "next": {"val": 0, "next": {"val": 8, "next": null}}}');

        expect(JSON.stringify(func(input1, input2))).to.be.eql(JSON.stringify(expected));
    })
});