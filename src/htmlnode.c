#include "htmlnode.h"

#include <stdio.h>
#include <stdlib.h>

HtmlNode *create_html_node(char *tag, 
                           char *value, 
                           HtmlNode *child, 
                           HtmlNode *right, 
                           char *props) {
  
  HtmlNode *node = malloc(sizeof *node);

  if (node == NULL) {
    printf("Error allocating memory for html node\n");
    return NULL;
  }

  node->tag = tag;
  node->value = value;
  node->child = child;
  node->right = right;
  node->props = props;

  return node;
}

void free_html_node(HtmlNode **node) {
  free(*node);
  *node = NULL;
}

char *html_node_to_html(HtmlNode *node) {
  return "html_node_to_html() Not yet implemented\n";
}

void print_html_node(HtmlNode *node) {
  if (node == NULL) {
    printf("HtmlNode(NULL)\n");
  } else {
  printf("HtmlNode(%s, %s, %p, %p, %s)\n", 
         node->tag, 
         node->value, 
         node->child, 
         node->right, 
         node->props);
  }
}

