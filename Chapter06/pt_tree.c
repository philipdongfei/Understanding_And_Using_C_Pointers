#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employee.h"

//extern int compareEmployee(Employee *e1, Employee *e2);
//extern void displayEmployee(Employee* employee);
typedef struct _tree {
    void *data;
    struct _tree *left;
    struct _tree *right;
    
} TreeNode;

void insertNode(TreeNode **root, COMPARE compare, void* data){
    TreeNode *node = (TreeNode*)malloc(sizeof(TreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    if (*root == NULL){
        *root = node;
        return;
    }
    while (1){
        if (compare((*root)->data,data) > 0){
            if ((*root)->left != NULL){
                *root = (*root)->left;
            } else {
                (*root)->left = node;
                break;
            }
        } else {
            if((*root)->right != NULL){
                *root = (*root)->right;
            } else {
                (*root)->right = node;
                break;
            }
        }
    }

}

void inOrder(TreeNode *root, DISPLAY display){
    if (root != NULL){
        inOrder(root->left, display);
        display(root->data);
        inOrder(root->right, display);
    }
}

void postOrder(TreeNode *root, DISPLAY display){
    if (root != NULL){
        postOrder(root->left, display);
        postOrder(root->right, display);
        display(root->data);
    }
}

void preOrder(TreeNode *root, DISPLAY display){
    if (root != NULL){
        display(root->data);
        preOrder(root->left, display);
        preOrder(root->right, display);
    }
}

int main(){
    Employee *samuel = (Employee*)malloc(sizeof(Employee));
    strcpy(samuel->name, "Samuel");
    samuel->age = 32;

    Employee *sally = (Employee*)malloc(sizeof(Employee));
    strcpy(sally->name, "Sally");
    sally->age = 28;

    Employee *susan = (Employee*)malloc(sizeof(Employee));
    strcpy(susan->name, "Susan");
    susan->age = 45;

    TreeNode *tree = NULL;
    insertNode(&tree, (COMPARE)compareEmployee, samuel);
    insertNode(&tree, (COMPARE)compareEmployee, sally);
    insertNode(&tree, (COMPARE)compareEmployee, susan);

    printf("preOrder:\n");
    preOrder(tree, (DISPLAY)displayEmployee);
    printf("inOrder:\n");
    inOrder(tree, (DISPLAY)displayEmployee);
    printf("postOrder:\n");
    postOrder(tree, (DISPLAY)displayEmployee);
    printf("\n");

    return 0;
}
