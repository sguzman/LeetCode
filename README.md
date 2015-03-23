# LeetCode

### Summary
Some of my solutions to [LeetCode](https://leetcode.com) problems.

#### Explanation
Most of them will be
done in C++ or C (maybe JavaScript). If the solutions are not readable, it's because
I'm trying to optimize for speed. Seeing as LeetCode provides a run time count, I
like minimizing it. That explains why I use C sometimes; it tends to run the solutions
faster than C++.

#### CMake
I have added a build setup for each solution in CMake that is done in C or C++.
Simply do `cmake .` in root directory and then `make <problem name>` to build the test.

#### Test
The test executable is not suppose to be all encompassing. Just a little thing to verify
that my code mostly works.

#### Disclaimer
As you would expect, this contains solutions to programming problems. LeetCode seems cool
with people discussing and posting solutions to their problems. They have a discussion forum
associated with every problem, for example, [here's](https://leetcode.com/discuss/questions/oj/pascals-triangle)
one for their pascal triangle generation problem. So, they would probably be okay with people hosting
solutions on GitHub.

#### Languages
- C++
- C

### Problems
| # | Title | Solution | Difficulty | Done |
|---| ----- | -------- | ---------- | ---- |
|1|[Two Sum](https://oj.leetcode.com/problems/two-sum/)| [C++](./src/twoSum/twoSum.cpp)|Medium||
|2|[Median of Two Sorted Arrays](https://oj.leetcode.com/problems/median-of-two-sorted-arrays/)| [C++](./src/medianOfTwoSortedArrays/medianOfTwoSortedArrays.cpp)|Hard||
|3|[Longest Substring Without Repeating Characters](https://oj.leetcode.com/problems/longest-substring-without-repeating-characters/)| [C++](./src/longestSubstringWithoutRepeatingCharacters/longestSubstringWithoutRepeatingCharacters.cpp)|Medium||
|4|[Add Two Numbers](https://oj.leetcode.com/problems/add-two-numbers/)| [C++](./src/addTwoNumbers/addTwoNumbers.cpp)|Medium||
|5|[Longest Palindromic Substring](https://oj.leetcode.com/problems/longest-palindromic-substring/)| [C++](./src/longestPalindromicSubstring/longestPalindromicSubstring.cpp)|Medium||
|6|[ZigZag Conversion](https://oj.leetcode.com/problems/zigzag-conversion/)| [C++](./src/zigZagConversion/zigZagConversion.cpp)|Easy||
|7|[Reverse Integer](https://oj.leetcode.com/problems/reverse-integer/)| [C++](./src/reverseInteger/reverseInteger.cpp)|Easy||
|8|[String to Integer (atoi)](https://oj.leetcode.com/problems/string-to-integer-atoi/)| [C++](./src/stringToIntegerAtoi/stringToIntegerAtoi.cpp)|Easy||
|9|[Palindrome Number](https://oj.leetcode.com/problems/palindrome-number/)| [C++](./src/palindromeNumber/palindromeNumber.cpp)|Easy||
|10|[Regular Expression Matching](https://oj.leetcode.com/problems/regular-expression-matching/)| [C++](./src/regularExpressionMatching/regularExpressionMatching.cpp)|Hard||
|11|[Container With Most Water](https://oj.leetcode.com/problems/container-with-most-water/)| [C++](./src/containerWithMostWater/containerWithMostWater.cpp)|Medium||
|12|[Integer to Roman](https://oj.leetcode.com/problems/integer-to-roman/)| [C++](./src/integerToRoman/integerToRoman.cpp)|Medium||
|13|[Roman to Integer](https://oj.leetcode.com/problems/roman-to-integer/)| [C++](./src/romanToInteger/romanToInteger.cpp)|Easy||
|14|[Longest Common Prefix](https://oj.leetcode.com/problems/longest-common-prefix/)| [C++](./src/longestCommonPrefix/longestCommonPrefix.cpp)|Easy||
|15|[3Sum](https://oj.leetcode.com/problems/3sum/)| [C++](./src/3Sum/3Sum.cpp)|Medium||
|16|[3Sum Closest](https://oj.leetcode.com/problems/3sum-closest/)| [C++](./src/3SumClosest/3SumClosest.cpp)|Medium||
|17|[4Sum](https://oj.leetcode.com/problems/4sum/)| [C++](./src/4Sum/4Sum.cpp)|Medium||
|18|[Letter Combinations of a Phone Number](https://oj.leetcode.com/problems/letter-combinations-of-a-phone-number/)| [C++](./src/letterCombinationsOfAPhoneNumber/letterCombinationsOfAPhoneNumber.cpp)|Medium||
|19|[Remove Nth Node From End of List](https://oj.leetcode.com/problems/remove-nth-node-from-end-of-list/)| [C++](./src/removeNthNodeFromEndOfList/removeNthNodeFromEndOfList.cpp)|Easy||
|20|[Valid Parentheses](https://oj.leetcode.com/problems/valid-parentheses/)| [C++](./src/validParentheses/validParentheses.cpp)|Easy||
|21|[Generate Parentheses](https://oj.leetcode.com/problems/generate-parentheses/)| [C++](./src/generateParentheses/generateParentheses.cpp)|Medium||
|22|[Merge k Sorted Lists](https://oj.leetcode.com/problems/merge-k-sorted-lists/)| [C++](./src/mergeKSortedLists/mergeKSortedLists.cpp)|Hard||
|23|[Swap Nodes in Pairs](https://oj.leetcode.com/problems/swap-nodes-in-pairs/)| [C++](./src/swapNodesInPairs/swapNodesInPairs.cpp)|Medium||
|24|[Reverse Nodes in k-Group](https://oj.leetcode.com/problems/reverse-nodes-in-k-group/)| [C++](./src/reverseNodesInKGroup/reverseNodesInKGroup.cpp)|Hard||
|25|[Remove Duplicates from Sorted Array](https://oj.leetcode.com/problems/remove-duplicates-from-sorted-array/)| [C++](./src/removeDuplicatesFromSortedArray/removeDuplicatesFromSortedArray.cpp)|Easy||
|26|[Remove Element](https://oj.leetcode.com/problems/remove-element/)| [C++](./src/removeElement/removeElement.cpp)|Easy||
|27|[Implement strStr()](https://oj.leetcode.com/problems/implement-strstr/)| [C++](./src/strStr/strStr.cpp)|Easy||
|28|[Divide Two Integers](https://oj.leetcode.com/problems/divide-two-integers/)| [C++](./src/divideTwoInt/divideTwoInt.cpp)|Medium||
|29|[Substring with Concatenation of All Words](https://oj.leetcode.com/problems/substring-with-concatenation-of-all-words/)| [C++](./src/substringWithConcatenationOfAllWords/substringWithConcatenationOfAllWords.cpp)|Hard||
|30|[Next Permutation](https://oj.leetcode.com/problems/next-permutation/)| [C++](./src/nextPermutation/nextPermutation.cpp)|Medium||
|31|[Longest Valid Parentheses](https://oj.leetcode.com/problems/longest-valid-parentheses/)| [C++](./src/longestValidParentheses/longestValidParentheses.cpp)|Hard||
|32|[Search in Rotated Sorted Array](https://oj.leetcode.com/problems/search-in-rotated-sorted-array/)| [C++](./src/searchInRotatedSortedArray/searchInRotatedSortedArray.cpp)|Hard||
|33|[Search for a Range](https://oj.leetcode.com/problems/search-for-a-range/)| [C++](./src/searchForRange/searchForRange.cpp)|Medium||
|34|[Search Insert Position](https://oj.leetcode.com/problems/search-insert-position/)| [C++](./src/searchInsertPosition/searchInsertPosition.cpp)|Medium||
|35|[Valid Sudoku](https://oj.leetcode.com/problems/valid-sudoku/)| [C++](./src/validSudoku/validSudoku.cpp)|Easy||
|36|[Sudoku Solver](https://oj.leetcode.com/problems/sudoku-solver/)| [C++](./src/sudokuSolver/sudokuSolver.cpp)|Hard||
|37|[Count and Say](https://oj.leetcode.com/problems/count-and-say/)| [C++](./src/countAndSay/countAndSay.cpp)|Easy||
|38|[Combination Sum](https://oj.leetcode.com/problems/combination-sum/)| [C++](./src/combinationSum/combinationSum.cpp)|Medium||
|39|[Combination Sum II](https://oj.leetcode.com/problems/combination-sum-ii/)| [C++](./src/combinationSum/combinationSum.II.cpp)|Medium||
|40|[First Missing Positive](https://oj.leetcode.com/problems/first-missing-positive/)| [C++](./src/firstMissingPositive/firstMissingPositive.cpp)|Hard||
|41|[Trapping Rain Water](https://oj.leetcode.com/problems/trapping-rain-water/)| [C++](./src/trappingRainWater/trappingRainWater.cpp)|Hard||
|42|[Multiply Strings](https://oj.leetcode.com/problems/multiply-strings/)| [C++](./src/multiplyStrings/multiplyStrings.cpp)|Medium||
|43|[Wildcard Matching](https://oj.leetcode.com/problems/wildcard-matching/)| [C++](./src/wildcardMatching/wildcardMatching.cpp)|Hard||
|44|[Jump Game II](https://oj.leetcode.com/problems/jump-game-ii/)| [C++](./src/jumpGame/jumpGame.II.cpp)|Hard||
|45|[Permutations](https://oj.leetcode.com/problems/permutations/)| [C++](./src/permutations/permutations.cpp)|Medium||
|46|[Permutations II](https://oj.leetcode.com/problems/permutations-ii/)| [C++](./src/permutations/permutations.II.cpp)|Hard||
|47|[Rotate Image](https://oj.leetcode.com/problems/rotate-image/)| [C++](./src/rotateImage/rotateImage.cpp)|Medium||
|48|[Anagrams](https://oj.leetcode.com/problems/anagrams/)| [C++](./src/anagrams/anagrams.cpp)|Medium||
|49|["Pow(x, n)"](https://oj.leetcode.com/problems/powx-n/)| [C++](./src/pow/pow.cpp)|Medium||
|50|[N-Queens](https://oj.leetcode.com/problems/n-queens/)| [C++](./src/nQueens/nQueuens.cpp)|Hard||
|51|[N-Queens II](https://oj.leetcode.com/problems/n-queens-ii/)| [C++](./src/nQueens/nQueuens.II.cpp)|Hard||
|52|[Maximum Subarray](https://oj.leetcode.com/problems/maximum-subarray/)| [C++](./src/maximumSubArray/maximumSubArray.cpp)|Medium||
|53|[Spiral Matrix](https://oj.leetcode.com/problems/spiral-matrix/)| [C++](./src/spiralMatrix/spiralMatrix.cpp)|Medium||
|54|[Jump Game](https://oj.leetcode.com/problems/jump-game/)| [C++](./src/jumpGame/jumpGame.cpp)|Medium||
|55|[Merge Intervals](https://oj.leetcode.com/problems/merge-intervals/)| [C++](./src/mergeIntervals/mergeIntervals.cpp)|Hard||
|56|[Insert Interval](https://oj.leetcode.com/problems/insert-interval/)| [C++](./src/insertInterval/insertInterval.cpp)|Hard||
|57|[Length of Last Word](https://oj.leetcode.com/problems/length-of-last-word/)| [C++](./src/lengthOfLastWord/lengthOfLastWord.cpp)|Easy||
|58|[Spiral Matrix II](https://oj.leetcode.com/problems/spiral-matrix-ii/)| [C++](./src/spiralMatrix/spiralMatrix.II.cpp)|Medium||
|59|[Permutation Sequence](https://oj.leetcode.com/problems/permutation-sequence/)| [C++](./src/permutationSequence/permutationSequence.cpp)|Medium||
|60|[Rotate List](https://oj.leetcode.com/problems/rotate-list/)| [C++](./src/rotateList/rotateList.cpp)|Medium||
|61|[Unique Paths](https://oj.leetcode.com/problems/unique-paths/)| [C++](./src/uniquePaths/uniquePaths.cpp)|Medium||
|62|[Unique Paths II](https://oj.leetcode.com/problems/unique-paths-ii/)| [C++](./src/uniquePaths/uniquePaths.II.cpp)|Medium||
|63|[Minimum Path Sum](https://oj.leetcode.com/problems/minimum-path-sum/)| [C++](./src/minimumPathSum/minimumPathSum.cpp)|Medium||
|64|[Merge Two Sorted Lists](https://oj.leetcode.com/problems/merge-two-sorted-lists/)| [C++](./src/mergeTwoSortedList/mergeTwoSortedList.cpp)|Easy||
|65|[Add Binary](https://oj.leetcode.com/problems/add-binary/)| [C++](./src/addBinary/addBinary.cpp)|Easy||
|66|[Valid Number](https://oj.leetcode.com/problems/valid-number/)| [C++](./src/validNumber/validNumber.cpp)|Easy||
|67|[Plus One](https://oj.leetcode.com/problems/plus-one/)| [C++](./src/plusOne/plusOne.cpp)|Easy||
|68|[Text Justification](https://oj.leetcode.com/problems/text-justification/)| [C++](./src/textJustification/textJustification.cpp)|Hard||
|69|[Sqrt(x)](https://oj.leetcode.com/problems/sqrtx/)| [C++](./src/sqrt/sqrt.cpp)|Medium||
|70|[Climbing Stairs](https://oj.leetcode.com/problems/climbing-stairs/)| [C++](./src/climbStairs/climbStairs.cpp)|Easy||
|71|[Simplify Path](https://oj.leetcode.com/problems/simplify-path/)| [C++](./src/simplifyPath/simplifyPath.cpp)|Medium||
|72|[Edit Distance](https://oj.leetcode.com/problems/edit-distance/)| [C++](./src/editDistance/editDistance.cpp)|Hard||
|73|[Set Matrix Zeroes](https://oj.leetcode.com/problems/set-matrix-zeroes/)| [C++](./src/setMatrixZeroes/setMatrixZeroes.cpp)|Medium||
|74|[Search a 2D Matrix](https://oj.leetcode.com/problems/search-a-2d-matrix/)| [C++](./src/search2DMatrix/search2DMatrix.cpp)|Medium||
|75|[Sort Colors](https://oj.leetcode.com/problems/sort-colors/)| [C++](./src/sortColors/sortColors.cpp)|Medium||
|76|[Minimum Window Substring](https://oj.leetcode.com/problems/minimum-window-substring/)| [C++](./src/minimumWindowSubstring/minimumWindowSubstring.cpp)|Hard||
|77|[Combinations](https://oj.leetcode.com/problems/combinations/)| [C++](./src/combinations/combinations.cpp)|Medium||
|78|[Subsets](https://oj.leetcode.com/problems/subsets/)| [C++](./src/subsets/subsets.cpp)|Medium||
|79|[Word Search](https://oj.leetcode.com/problems/word-search/)| [C++](./src/wordSearch/wordSearch.cpp)|Medium||
|80|[Remove Duplicates from Sorted Array II](https://oj.leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)| [C++](./src/removeDuplicatesFromSortedArray/removeDuplicatesFromSortedArray.II.cpp)|Medium||
|81|[Search in Rotated Sorted Array II](https://oj.leetcode.com/problems/search-in-rotated-sorted-array-ii/)| [C++](./src/searchInRotatedSortedArray/searchInRotatedSortedArray.II.cpp)|Medium||
|82|[Remove Duplicates from Sorted List](https://oj.leetcode.com/problems/remove-duplicates-from-sorted-list/)| [C++](./src/removeDuplicatesFromSortedList/removeDuplicatesFromSortedList.cpp)|Easy||
|83|[Remove Duplicates from Sorted List II](https://oj.leetcode.com/problems/remove-duplicates-from-sorted-list-ii/)| [C++](./src/removeDuplicatesFromSortedList/removeDuplicatesFromSortedList.II.cpp)|Medium||
|84|[Largest Rectangle in Histogram](https://oj.leetcode.com/problems/largest-rectangle-in-histogram/)| [C++](./src/largestRectangleInHistogram/largestRectangleInHistogram.cpp)|Hard||
|85|[Maximal Rectangle](https://oj.leetcode.com/problems/maximal-rectangle/)| [C++](./src/maximalRectangle/maximalRectangle.cpp)|Hard||
|86|[Partition List](https://oj.leetcode.com/problems/partition-list/)| [C++](./src/partitionList/partitionList.cpp)|Medium||
|87|[Scramble String](https://oj.leetcode.com/problems/scramble-string/)| [C++](./src/scrambleString/scrambleString.cpp)|Hard||
|88|[Merge Sorted Array](https://oj.leetcode.com/problems/merge-sorted-array/)| [C++](./src/mergeTwoSortedArray/mergeTwoSortedArray.cpp)|Easy||
|89|[Gray Code](https://oj.leetcode.com/problems/gray-code/)| [C++](./src/grayCode/grayCode.cpp)|Medium||
|90|[Decode Ways](https://oj.leetcode.com/problems/decode-ways/)| [C++](./src/decodeWays/decodeWays.cpp)|Medium||
|91|[Subsets II](https://oj.leetcode.com/problems/subsets-ii/)| [C++](./src/subsets/subsets.II.cpp)|Medium||
|92|[Reverse Linked List II](https://oj.leetcode.com/problems/reverse-linked-list-ii/)| [C++](./src/reverseLinkedList/reverseLinkedList.II.cpp)|Medium||
|93|[Restore IP Addresses](https://oj.leetcode.com/problems/restore-ip-addresses/)| [C++](./src/restoreIPAddresses/restoreIPAddresses.cpp)|Medium||
|94|[Binary Tree Inorder Traversal](https://oj.leetcode.com/problems/binary-tree-inorder-traversal/)| [C++](./src/binaryTreeInorderTraversal/binaryTreeInorderTraversal.cpp)|Medium||
|95|[Unique Binary Search Trees](https://oj.leetcode.com/problems/unique-binary-search-trees/)| [C++](./src/uniqueBinarySearchTrees/uniqueBinarySearchTrees.cpp)|Medium||
|96|[Unique Binary Search Trees II](https://oj.leetcode.com/problems/unique-binary-search-trees-ii/)| [C++](./src/uniqueBinarySearchTrees/uniqueBinarySearchTrees.II.cpp)|Medium||
|97|[Interleaving String](https://oj.leetcode.com/problems/interleaving-string/)| [C++](./src/interleavingString/interleavingString.cpp)|Hard||
|98|[Validate Binary Search Tree](https://oj.leetcode.com/problems/validate-binary-search-tree/)| [C++](./src/validateBinarySearchTree/validateBinarySearchTree.cpp)|Medium||
|99|[Recover Binary Search Tree](https://oj.leetcode.com/problems/recover-binary-search-tree/)| [C++](./src/recoverBinarySearchTree/recoverBinarySearchTree.cpp)|Hard||
|100|[Same Tree](https://oj.leetcode.com/problems/same-tree/)| [C++](./src/sameTree/sameTree.cpp)|Easy||
|101|[Symmetric Tree](https://oj.leetcode.com/problems/symmetric-tree/)| [C++](./src/symmetricTree/symmetricTree.cpp)|Easy||
|102|[Binary Tree Level Order Traversal](https://oj.leetcode.com/problems/binary-tree-level-order-traversal/)| [C++](./src/binaryTreeLevelOrderTraversal/binaryTreeLevelOrderTraversal.cpp)|Easy||
|103|[Binary Tree Zigzag Level Order Traversal](https://oj.leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)| [C++](./src/binaryTreeZigzagLevelOrderTraversal/binaryTreeZigzagLevelOrderTraversal.cpp)|Medium||
|104|[Maximum Depth of Binary Tree](https://oj.leetcode.com/problems/maximum-depth-of-binary-tree/)| [C++](./src/maximumDepthOfBinaryTree/maximumDepthOfBinaryTree.cpp)|Easy||
|105|[Construct Binary Tree from Preorder and Inorder Traversal](https://oj.leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)| [C++](./src/constructBinaryTreeFromPreorderAndInorderTraversal/constructBinaryTreeFromPreorderAndInorderTraversal.cpp)|Medium||
|106|[Construct Binary Tree from Inorder and Postorder Traversal](https://oj.leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/)| [C++](./src/constructBinaryTreeFromInorderAndPostorderTraversal/constructBinaryTreeFromInorderAndPostorderTraversal.cpp)|Medium||
|107|[Binary Tree Level Order Traversal II](https://oj.leetcode.com/problems/binary-tree-level-order-traversal-ii/)| [C++](./src/binaryTreeLevelOrderTraversal/binaryTreeLevelOrderTraversal.II.cpp)|Easy||
|108|[Convert Sorted Array to Binary Search Tree](https://oj.leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)| [C++](./src/convertSortedArrayToBinarySearchTree/convertSortedArrayToBinarySearchTree.cpp)|Medium||
|109|[Convert Sorted List to Binary Search Tree](https://oj.leetcode.com/problems/convert-sorted-list-to-binary-search-tree/)| [C++](./src/convertSortedListToBinarySearchTree/convertSortedListToBinarySearchTree.cpp)|Medium||
|110|[Balanced Binary Tree](https://oj.leetcode.com/problems/balanced-binary-tree/)| [C++](./src/balancedBinaryTree/balancedBinaryTree.cpp)|Easy||
|111|[Minimum Depth of Binary Tree](https://oj.leetcode.com/problems/minimum-depth-of-binary-tree/)| [C++](./src/minimumDepthOfBinaryTree/minimumDepthOfBinaryTree.cpp)|Easy||
|112|[Path Sum](https://oj.leetcode.com/problems/path-sum/)| [C++](./src/pathSum/pathSum.cpp)|Easy||
|113|[Path Sum II](https://oj.leetcode.com/problems/path-sum-ii/)| [C++](./src/pathSum/pathSum.II.cpp)|Medium||
|114|[Flatten Binary Tree to Linked List](https://oj.leetcode.com/problems/flatten-binary-tree-to-linked-list/)| [C++](./src/flattenBinaryTreeToLinkedList/flattenBinaryTreeToLinkedList.cpp)|Medium||
|115|[Distinct Subsequences](https://oj.leetcode.com/problems/distinct-subsequences/)| [C++](./src/distinctSubsequences/distinctSubsequences.cpp)|Hard||
|116|[Populating Next Right Pointers in Each Node](https://oj.leetcode.com/problems/populating-next-right-pointers-in-each-node/)| [C++](./src/populatingNextRightPointersInEachNode/populatingNextRightPointersInEachNode.cpp)|Medium||
|117|[Populating Next Right Pointers in Each Node II](https://oj.leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/)| [C++](./src/populatingNextRightPointersInEachNode/populatingNextRightPointersInEachNode.II.cpp)|Hard||
|118|[Pascal's Triangle](https://oj.leetcode.com/problems/pascals-triangle/)| [C++](./src/pascalTriangle/pascalTriangle.cpp)|Easy||
|119|[Pascal's Triangle II](https://oj.leetcode.com/problems/pascals-triangle-ii/)| [C++](./src/pascalTriangle/pascalTriangle.II.cpp)|Easy||
|120|[Triangle](https://oj.leetcode.com/problems/triangle/)| [C++](./src/triangle/triangle.cpp)|Medium||
|121|[Best Time to Buy and Sell Stock](https://oj.leetcode.com/problems/best-time-to-buy-and-sell-stock/)| [C++](./src/bestTimeToBuyAndSellStock/bestTimeToBuyAndSellStock.cpp)|Medium||
|122|[Best Time to Buy and Sell Stock II](https://oj.leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/)| [C++](./src/bestTimeToBuyAndSellStock/bestTimeToBuyAndSellStock.II.cpp)|Medium||
|123|[Best Time to Buy and Sell Stock III](https://oj.leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/)| [C++](./src/bestTimeToBuyAndSellStock/bestTimeToBuyAndSellStock.III.cpp)|Hard||
|124|[Binary Tree Maximum Path Sum](https://oj.leetcode.com/problems/binary-tree-maximum-path-sum/)| [C++](./src/binaryTreeMaximumPathSum/binaryTreeMaximumPathSum.cpp)|Hard||
|125|[Valid Palindrome](https://oj.leetcode.com/problems/valid-palindrome/)| [C++](./src/validPalindrome/validPalindrome.cpp)|Easy||
|126|[Word Ladder](https://oj.leetcode.com/problems/word-ladder/)| [C++](./src/wordLadder/wordLadder.cpp)|Medium||
|127|[Word Ladder II](https://oj.leetcode.com/problems/word-ladder-ii/)| [C++](./src/wordLadder/wordLadder.II.cpp)|Hard||
|128|[Longest Consecutive Sequence](https://oj.leetcode.com/problems/longest-consecutive-sequence/)| [C++](./src/longestConsecutiveSequence/longestConsecutiveSequence.cpp)|Hard||
|129|[Sum Root to Leaf Numbers](https://oj.leetcode.com/problems/sum-root-to-leaf-numbers/)| [C++](./src/sumRootToLeafNumber/sumRootToLeafNumber.cpp)|Medium||
|130|[Surrounded Regions](https://oj.leetcode.com/problems/surrounded-regions/)| [C++](./src/surroundedRegions/surroundedRegions.cpp)|Medium||
|131|[Palindrome Partitioning](https://oj.leetcode.com/problems/palindrome-partitioning/)| [C++](./src/palindromePartitioning/palindromePartitioning.cpp)|Medium||
|132|[Palindrome Partitioning II](https://oj.leetcode.com/problems/palindrome-partitioning-ii/)| [C++](./src/palindromePartitioning/palindromePartitioning.II.cpp)|Hard||
|133|[Clone Graph](https://oj.leetcode.com/problems/clone-graph/)| [C++](./src/cloneGraph/cloneGraph.cpp)|Medium||
|134|[Gas Station](https://oj.leetcode.com/problems/gas-station/)| [C++](./src/gasStation/gasStation.cpp)|Medium||
|135|[Candy](https://oj.leetcode.com/problems/candy/)| [C++](./src/candy/candy.cpp)|Hard||
|136|[Single Number](https://oj.leetcode.com/problems/single-number/)| [C++](./src/singleNumber/singleNumber.cpp)|Medium||
|137|[Single Number II](https://oj.leetcode.com/problems/single-number-ii/)| [C++](./src/singleNumber/singleNumber.II.cpp)|Medium||
|138|[Copy List with Random Pointer](https://oj.leetcode.com/problems/copy-list-with-random-pointer/)| [C++](./src/copyListWithRandomPointer/copyListWithRandomPointer.cpp)|Hard||
|139|[Word Break](https://oj.leetcode.com/problems/word-break/)| [C++](./src/wordBreak/wordBreak.cpp)|Medium||
|140|[Word Break II](https://oj.leetcode.com/problems/word-break-ii/)| [C++](./src/wordBreak/wordBreak.II.cpp)|Hard||
|141|[Linked List Cycle](https://oj.leetcode.com/problems/linked-list-cycle/)| [C++](./src/linkedListCycle/linkedListCycle.cpp)|Medium||
|142|[Linked List Cycle II](https://oj.leetcode.com/problems/linked-list-cycle-ii/)| [C++](./src/linkedListCycle/linkedListCycle.II.cpp)|Medium||
|143|[Reorder List](https://oj.leetcode.com/problems/reorder-list/)| [C++](./src/reorderList/reorderList.cpp)|Medium||
|144|[Binary Tree Preorder Traversal](https://oj.leetcode.com/problems/binary-tree-preorder-traversal/)| [C++](./src/binaryTreePreorderTraversal/binaryTreePreorderTraversal.cpp)|Medium||
|145|[Binary Tree Postorder Traversal](https://oj.leetcode.com/problems/binary-tree-postorder-traversal/)| [C++](./src/binaryTreePostorderTraversal/binaryTreePostorderTraversal.cpp)|Hard||
|146|[LRU Cache](https://oj.leetcode.com/problems/lru-cache/)| [C++](./src/LRUCache/LRUCache.cpp)|Hard||
|147|[Insertion Sort List](https://oj.leetcode.com/problems/insertion-sort-list/)| [C++](./src/insertionSortList/insertionSortList.cpp)|Medium||
|148|[Sort List](https://oj.leetcode.com/problems/sort-list/)| [C++](./src/sortList/sortList.cpp)|Medium||
|149|[Max Points on a Line](https://oj.leetcode.com/problems/max-points-on-a-line/)| [C++](./src/maxPointsOnALine/maxPointsOnALine.cpp)|Hard||
|150|[Evaluate Reverse Polish Notation](https://oj.leetcode.com/problems/evaluate-reverse-polish-notation/)| [C++](./src/evaluateReversePolishNotation/evaluateReversePolishNotation.cpp)|Medium||
|151|[Reverse Words in a String](https://oj.leetcode.com/problems/reverse-words-in-a-string/)| [C++](./src/reverseWordsInAString/reverseWordsInAString.cpp)|Medium||
|152|[Maximum Product Subarray](https://oj.leetcode.com/problems/maximum-product-subarray/)| [C++](./src/maximumProductSubarray/maximumProductSubarray.cpp)|Medium||
|153|[Find Minimum in Rotated Sorted Array](https://oj.leetcode.com/problems/find-minimum-in-rotated-sorted-array/)| [C++](./src/findMinimumInRotatedSortedArray/findMinimumInRotatedSortedArray.cpp)|Medium||
|154|[Find Minimum in Rotated Sorted Array II](https://oj.leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/)| [C++](./src/findMinimumInRotatedSortedArray/findMinimumInRotatedSortedArray.II.cpp)|Hard||
|155|[Min Stack](https://oj.leetcode.com/problems/min-stack/)| [C++](./src/minStack/minStack.cpp)|Easy||
|156|[Binary Tree Upside Down](https://oj.leetcode.com/problems/binary-tree-upside-down/) &hearts; | [C++](./src/binaryTreeUpsideDown/binaryTreeUpsideDown.cpp)|Medium||
|157|[Read N Characters Given Read4](https://oj.leetcode.com/problems/read-n-characters-given-read4/) &hearts; | [C++](./src/readNCharactersGivenRead4/readNCharactersGivenRead4.cpp)|Easy||
|158|[Read N Characters Given Read4 II - Call multiple times](https://oj.leetcode.com/problems/read-n-characters-given-read4-ii-call-multiple-times/) &hearts; | [C++](./src/readNCharactersGivenRead4/readNCharactersGivenRead4.II.cpp)|Hard||
|159|[Longest Substring with At Most Two Distinct Characters](https://oj.leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/) &hearts; | [C++](./src/longestSubstringWithAtMostTwoDistinctCharacters/longestSubstringWithAtMostTwoDistinctCharacters.cpp)|Hard||
|160|[Intersection of Two Linked Lists](https://oj.leetcode.com/problems/intersection-of-two-linked-lists/) | [C++](./src/intersectionOfTwoLinkedLists/intersectionOfTwoLinkedLists.cpp)|Easy||
|161|[One Edit Distance](https://oj.leetcode.com/problems/one-edit-distance/)&hearts; | [C++](./src/oneEditDistance/oneEditDistance.cpp)|Medium||
|162|[Find Peak Element](https://oj.leetcode.com/problems/find-peak-element/) | [C++](./src/findPeakElement/findPeakElement.cpp)|Medium||
|163|[Missing Ranges](https://oj.leetcode.com/problems/missing-ranges/) &hearts; | [C++](./src/missingRanges/missingRanges.cpp)|Medium||
|164|[Maximum Gap](https://oj.leetcode.com/problems/maximum-gap/) | [C++](./src/maximumGap/maximumGap.cpp)|Hard||
|165|[Compare Version Numbers](https://oj.leetcode.com/problems/compare-version-numbers/) | [C++](./src/compareVersionNumbers/compareVersionNumbers.cpp)|Easy||
|166|[Fraction to Recurring Decimal](https://oj.leetcode.com/problems/fraction-to-recurring-decimal/) | [C++](./src/fractionToRecurringDecimal/fractionToRecurringDecimal.cpp)|Medium||
|167|[Two Sum II - Input array is sorted](https://oj.leetcode.com/problems/two-sum-ii-input-array-is-sorted/) &hearts; | [C++](./src/twoSum/twoSum.II.cpp)|Medium||
|168|[Excel Sheet Column Title](https://oj.leetcode.com/problems/excel-sheet-column-title/) | [C++](./src/excelSheetColumnTitle/excelSheetColumnTitle.cpp)|Easy||
|169|[Majority Element](https://oj.leetcode.com/problems/majority-element/) | [C++](./src/majorityElement/majorityElement.cpp)|Easy||
|170|[Two Sum III - Data structure design](https://oj.leetcode.com/problems/two-sum-iii-data-structure-design/) &hearts; | [C++](./src/twoSum/twoSum.III.cpp)|Easy||
|171|[Excel Sheet Column Number](https://oj.leetcode.com/problems/excel-sheet-column-number/) | [C++](./src/excelSheetColumnNumber/excelSheetColumnNumber.cpp)|Easy||
|172|[Factorial Trailing Zeroes](https://oj.leetcode.com/problems/factorial-trailing-zeroes/) | [C++](./src/factorialTrailingZeroes/factorialTrailingZeroes.cpp)|Easy||
|173|[Binary Search Tree Iterator](https://oj.leetcode.com/problems/binary-search-tree-iterator/) | [C++](./src/binarySearchTreeIterator/binarySearchTreeIterator.cpp)|Medium||
|174|[Dungeon Game](https://oj.leetcode.com/problems/dungeon-game/) | [C++](./src/dungeonGame/dungeonGame.cpp)|Hard||
|179|[Largest Number](https://oj.leetcode.com/problems/largest-number/) | [C++](./src/largestNumber/largestNumber.cpp)|Medium||
|186|[Reverse Words in a String II](https://oj.leetcode.com/problems/reverse-words-in-a-string-ii/) &hearts; | [C++](./src/reverseWordsInAString/reverseWordsInAString.II.cpp)|Medium||
|187|[Repeated DNA Sequences](https://oj.leetcode.com/problems/repeated-dna-sequences/)| [C++](./src/repeatedDNASequences/repeatedDNASequences.cpp)|Medium||
|188|[Best Time to Buy and Sell Stock IV](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/)| [C++]()|Hard||
|189|[Rotate Array](https://leetcode.com/problems/rotate-array/)| [C++]()|Easy||
