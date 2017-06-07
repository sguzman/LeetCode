/**
 * @param {string} s
 * @return {number}
 */
module.exports.lengthOfLongestSubstring = function(s) {
    let start = -1;
    let maxLen = 0;
    let map = new Map();

    for (let idx = 0; idx < s.length; ++idx) {
        if (map.get(s[idx]) > start) {
            start = map.get(s[idx]);
        }

        map.set(s[idx], idx);
        if (maxLen < (idx - start)) {
            maxLen = idx - start;
        }
    }

    return maxLen;
};