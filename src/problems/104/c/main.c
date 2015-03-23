#include <stdio.h>

#include "../../../include/c/TreeNode.h"
#include "maxdepth.h"

int main(void) {
    TreeNode a, b, c, d;

    a.right = b.left = c.right = d.left = d.right = NULL;

    a.left = &b;
    b.right = &c;
    c.left = &d;

    printf("%d\n", maxDepth(&a));

    return 0;
}
