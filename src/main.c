#include "textnode.h"

#include <stdio.h>

int main() {

  TextNode *node1 = create_text_node("This is a test text node", 
                                    TEXT_PLAIN, 
                                    "https://www.example.com");

  TextNode *node2 = create_text_node("This is a NOT test text node", 
                                    TEXT_ITALIC, 
                                    "https://www.example.com");


  print_text_node(node1);
  print_text_node(node2);

  if (text_nodes_are_equal(node1, node2)) {
    printf("These 2 nodes are equal!\n");
  } else {
    printf("These 2 nodes are not equal!\n");
  }
  
  free_text_node(&node1);
  free_text_node(&node2);

  return 0;
}
