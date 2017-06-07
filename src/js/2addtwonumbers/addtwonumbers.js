/**
    * Definition for singly-linked list.
    * function ListNode(val) {
    *     this.val = val;
    *     this.next = null;
    * }
*/
/**
    * @param {ListNode} l1
    * @param {ListNode} l2
    * @return {ListNode}
*/

const ListNode = require('./listnode').ListNode;

module.exports.addTwoNumbers = function(l1, l2) {
    const sum = new ListNode(0);
    let s = sum;
    let carry = 0;
    let p = l1;
    let q = l2;

    while (p !== null || q !== null) {
        let x = 0;
        if (p !== null) {
            x = p['val'];
        }

        let y = 0;
        if (q !== null) {
            y = q['val'];
        }

        let sumValue = x + y + carry;
        carry = sumValue > 9 | 0;

        let newNode = new ListNode(sumValue % 10);
        s['next'] = newNode;
        s = s['next'];

        if (p !== null) {
            p = p['next'];
        }

        if (q !== null) {
            q = q['next'];
        }
    }

    if (carry) {
        s['next'] = new ListNode(1);
    }

    return sum['next'];
};