#include "textnode.h"

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

const char *text_type_to_string(TextType textType) {
  switch (textType) {
    case TEXT_PLAIN: return "PLAIN";
    case TEXT_BOLD: return "BOLD";
    case TEXT_ITALIC: return "ITALIC";
    case TEXT_CODE: return "CODE";
    case TEXT_LINK: return "LINK";
    case TEXT_IMAGE: return "IMAGE";
    default: return "UNKNOWN";
  }
}

TextNode *create_text_node(const char *text, TextType textType, 
                           const char *url) {
  TextNode *node = malloc(sizeof *node);
  
  if (node == NULL) {
    printf("Error allocating memory for text node.\n");
    return NULL;
  }

  node->text = text;
  node->textType = textType;
  node->url = url;

  return node;
}

void free_text_node(TextNode **node) {
  free(*node);
  *node = NULL;
}

void print_text_node (TextNode *node) {
  if (node == NULL) {
    printf("TextNode(NULL)\n");
  } else {
    printf("TextNode(%s, %s, %s)\n", 
           node->text, 
           text_type_to_string(node->textType), 
           node->url);
  }
}

bool text_nodes_are_equal(TextNode *node1, TextNode *node2) {
  if (node1->text == node2->text &&
      node1->textType == node2->textType &&
      node1->url == node2->url) {
    return true;
  } else {
    return false;
  }
}


