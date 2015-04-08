def match(haystack, needle):
  overlap = mismatch(needle);

  m = 0
  i = 0
  while m + i < len(haystack):
    if haystack[m + i] is needle[i]:
      if i is len(needle) - 1:
        return m;
      i += 1
    elif i > 0:
      m += i - overlap[i];
      i = overlap[i];
    else:
      m += 1;

  return -1

def mismatch(needle):
  table = [-1, 0];

  pos = 2
  cnd = 0
  while (pos < len(needle)):
    if needle[pos - 1] is needle[cnd]:
      cnd += 1;
      table.append(cnd);
      pos += 1;
    elif cnd > 0:
      cnd = table[cnd];
    else:
      table.append(0);
      pos += 1;

  return table;

class Solution:
    # @param haystack, a string
    # @param needle, a string
    # @return an integer
    def strStr(self, haystack, needle):
      if len(haystack) is 0 or len(needle) is 0:
        if len(needle) is 0:
          return 0;

        return -1;

      if len(haystack) < len(needle):
          return -1;

      return match(haystack, needle);
