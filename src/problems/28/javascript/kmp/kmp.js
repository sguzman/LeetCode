/**
 * @param {string} haystack
 * @param {string} needle
 * @returns {number}
 */
var strStr = function(haystack, needle) {
    if (haystack.length === 0 || needle.length === 0) {
        if (needle.length === 0) {
            return 0;
        }

        return -1;
    }

    if (haystack.length < needle.length) {
        return -1;
    }

    return match(haystack, needle);
};

var mismatch = (function(needle) {
    var table = [-1, 0];

    for (var pos = 2, cnd = 0; pos < needle.length;) {
        if (needle[pos - 1] == needle[cnd]) {
            table.push(++cnd);
            ++pos;
        } else if (cnd > 0) {
            cnd = table[cnd];
        } else {
            table.push(0);
            ++pos;
        }
    }

    return table;
});

var match = (function(haystack, needle) {
    overlap = mismatch(needle);

    for (var m = 0, i = 0; m + i < haystack.length;) {
        if (haystack[m + i] == needle[i]) {
            if (i == needle.length - 1) {
                return m;
            }

            ++i;
        } else if (i > 0) {
            m += i - overlap[i];
            i = overlap[i];
        } else {
            ++m;
        }
    }

    return -1;
});
