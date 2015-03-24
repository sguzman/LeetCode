#include <iostream>
#include <cstdlib>

#include "../../../include/cpp/TreeNode.hxx"
#include "maxdepth.hxx"

using namespace std;

int main(void) {
    TreeNode a{5}, b{7}, c{0}, d{3};
    a.right = &b;
    b.left = &c;
    c.right = &d;

    Solution sol;

    cout << "Max depth: " << sol.maxDepth(&a) << endl;

    return EXIT_SUCCESS;
}
