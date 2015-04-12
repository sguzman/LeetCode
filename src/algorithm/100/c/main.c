#include <stdio.h>
#include <stdlib.h>

typedef int bool;

#include "../../../include/c/TreeNode.h"
#include "sametree.h"

int main(void) {
    TreeNode a, b;
    TreeNode *p = &a, *q = &b;
    q->left = q->right = p->left = p->right = NULL;
    q->val = p->val = 5;

    if (isSameTree(p, q)) {
        printf("True!\n");
    } else {
        printf("False!\n");
    }

    return EXIT_SUCCESS;
}
