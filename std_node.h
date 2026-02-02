//
//  node.h
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#ifndef stdnode_h
#define stdnode_h

struct std_node
{
    int id;
    char name[30];
    struct std_node *next;
};
typedef struct std_node* std_NodePtr;

#endif /* node_h */
