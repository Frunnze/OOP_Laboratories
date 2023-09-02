#include <stdio.h>
#include <stdlib.h>

// Defining the structure.
struct node
{
    int item;
    struct node *left;
    struct node *right;
};

// Function to create a new node.
struct node* create_node(int val)
{
    struct node* new_node = malloc(sizeof(struct node));
    new_node -> item = val;
    new_node -> left = NULL;
    new_node -> right = NULL;
    return new_node;
}


// Function to insert a node.
struct node* insert_node(struct node* node, int val)
{
    if (node == NULL) return create_node(val);
    else
    {
        printf("The present node has the value: %d\n", node -> item);
        if (node -> left != NULL) 
            printf("On the left: %d\n", node -> left -> item);
        else printf("On the left: Empty \n");

        if (node -> right != NULL) 
            printf("On the right: %d\n", node -> right -> item);
        else printf("On the right: Empty\n");
        
        int option;
        printf("\nAdd node on the: 1. Left; 2. Right\n"); 
        printf("Choose your option: "); scanf("%d", &option);
        switch (option)
        {
            case 1: node -> left = insert_node(node -> left, val); break;
            case 2: node -> right = insert_node(node -> right, val); break;
        }
    }
    return node;
}

// Function to delete the right-most node.
struct node* delete_node(struct node* root)
{ 
    struct node *temp = root, *tz;
    if (temp == NULL) printf("Empty.\n");
    else if(temp->right == NULL)
    { 
        tz = root; 
        root = root->left; 
        free(tz); return root; 
    }
    else
    { 
        if (temp->right != NULL && temp->right->right != NULL)
            delete_node(temp->right);
        else if (temp->right != NULL && temp->right->right == NULL)
        {
          tz = temp->right; 
          temp->right = tz->left; 
          free(tz);
        }
    }
    return root;
}

// Function to search a node by its value.
int flag = 0;
void search_node(struct node* temp, int val)
{
    if (temp -> item == val)
    {
        printf("The node exists.\n");
        flag = 1;
        return;
    } else
    {
        if (flag == 0 && temp -> left != NULL)
            search_node(temp -> left, val);
        
        if (flag == 0 && temp -> right != NULL)
            search_node(temp -> right, val);
    }
}

// In-order traversal.
void inorder_traversal(struct node* node)
{
    if(node != NULL)
    {
        inorder_traversal(node -> left);
        printf("%d -> ", node -> item);
        inorder_traversal(node -> right);
    }
}

// Pre-order traversal.
void preorder_traversal(struct node* node)
{
    if(node == NULL) return;
    printf("%d -> ", node -> item);
    preorder_traversal(node -> left);
    preorder_traversal(node -> right);
}

// Post-order traversal.
void postorder_traversal(struct node* root)
{
    if (root == NULL) return;
    postorder_traversal(root -> left);
    postorder_traversal(root -> right);
    printf("%d -> ", root -> item);
}

// Storing the inorder traversal.
void store_inorder(struct node* node, int inorder[], int* index_ptr)
{
    // Base Case
    if (node == NULL) return;
 
    // first store the left subtree
    store_inorder(node->left, inorder, index_ptr);
 
    // Copy the root's data
    inorder[*index_ptr] = node->item;
    (*index_ptr)++; // increase index for next entry
 
    // finally store the right subtree 
    store_inorder(node->right, inorder, index_ptr);
}

// Function to count the nodes in a Binary Tree.
int count_nodes(struct node* root)
{
    if (root == NULL) return 0;
    return count_nodes(root -> left) + count_nodes(root -> right) + 1;
}

// Initializing qsort().
int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

// Function from array to Binary Tree.
void array_to_bst(int* arr, struct node* root, int* index_ptr)
{
    if (root == NULL) return;
    array_to_bst(arr, root -> left, index_ptr);
    root->item = arr[*index_ptr];
    (*index_ptr)++;
    array_to_bst(arr, root -> right, index_ptr);
}

// Function that converts BT to BST.
void bt_to_bst(struct node* root)
{
    if (root == NULL) return;
    int n = count_nodes(root);

    int* arr = malloc(sizeof(int[n])); int i = 0;
    store_inorder(root, arr, &i);
    qsort(arr, n, sizeof(arr[0]), compare);
    i = 0;
    array_to_bst(arr, root, &i);
    free(arr);
}

// Function to create a balanced binary tree.
struct node* balance_bt(int arr[], int start, int end)
{
    if (start > end) return NULL;
    int mid = (start + end)/2;
    struct node *root = create_node(arr[mid]);
    root->left =  balance_bt(arr, start, mid-1);
    root->right = balance_bt(arr, mid+1, end);
    return root;
}

int main()
{
    // Initializing the binary tree.
    int value;
    struct node* root = NULL;

    // Creating the Menu.
    int option;
    while(1)
    {
        printf("\n    Menu\n");
        printf("01. Insert\n");
        printf("02. Delete\n");
        printf("03. Search\n");
        printf("04. In-order traversal\n");
        printf("05. Pre-order traversal\n");
        printf("06. Post-order traversal\n");
        printf("07. Sort, i.e. transform in a binary search tree\n");
        printf("08. Balance, i.e transform in a balanced binary tree\n");
        printf("09. Load the data structure from a file and display it in the terminal\n");
        printf("10. Input the data structure from keyboard and save it in a file\n");
        printf("11. Exit the program\n");

        printf("\nIndicate your option: ");
        scanf("%d", &option);

        switch (option)
        {   
            // Insert case.
            case 1:
            {
                printf("Give the value: ");
                scanf("%d", &value);
                insert_node(root, value);
                if (root == NULL) root = insert_node(root, value);
                break;
            }
            
            // Delete a node.
            case 2:
            {
                root = delete_node(root);
                break;
            }

            // Searching for a node.
            case 3: 
            {
                printf("Give the value to search for: ");
                scanf("%d", &value);
                search_node(root, value);

                if (flag == 0) printf("The node does not exist.\n");
                flag = 0;
                break;
            }

            // In-order traversal case.
            case 4:
            {
                printf("In-order traversal: \n");
                inorder_traversal(root);
                printf("\n");
                break;
            }

            // Pre-order traversal case.
            case 5:
            {
                printf("Pre-order traversal: \n");
                preorder_traversal(root);
                printf("\n");
                break;
            }

            // Post-order traversal case.
            case 6:
            {
                printf("Post-order traversal: \n");
                postorder_traversal(root);
                printf("\n");
                break;
            }

            // Sorting
            case 7:
            {
                bt_to_bst(root);
                break;
            }

            // Balancing the tree.
            case 8:
            {
                int n = count_nodes(root);
                int* array = malloc(sizeof(int[n])); int i = 0;
                store_inorder(root, array, &i);
                qsort(array, n, sizeof(array[0]), compare);
                root = balance_bt(array, 0, n - 1);
                break;
            }

            case 9:
            {
                FILE *infile;
                struct node input;
     
               infile = fopen ("bt.dat", "r");
               if (infile == NULL)
               {
                  fprintf(stderr, "\nError opening file\n");
                  exit (1);
               }
     
               while(fread(&input, sizeof(struct node), 1, infile))
                     printf ("%d", input.item);

               fclose (infile);
               break;
            }

            // Input data structure in a file.
            case 10:
            {
                FILE *outfile;
                outfile = fopen("bt.dat", "w");
                if (outfile == NULL)
                {
                    fprintf(stderr, "\nError opened file\n");
                    exit (1);
                }
                
                printf("Give the value: ");
                scanf("%d", &value);

                struct node* input = NULL;
                input = insert_node(root, value);
                if (root == NULL) root = insert_node(root, value);

                fwrite(&input, sizeof(struct node), 1, outfile);
                fclose (outfile);
                break;
            }

            // Exit.
            case 11:
            {
                goto exit;
                break;
            }
        }
    }
    exit:
    return 0;
}
