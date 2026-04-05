#ifndef TEXTNODE_H_
#define TEXTNODE_H_

#include <stdbool.h>

typedef enum {
  TEXT_PLAIN,
  TEXT_BOLD,
  TEXT_ITALIC,
  TEXT_CODE,
  TEXT_LINK,
  TEXT_IMAGE,
} TextType;

const char *text_type_to_string(TextType textType);

typedef struct {
  const char *text;
  TextType textType;
  const char *url;
} TextNode;

TextNode *create_text_node(const char *text, const TextType textType, const char *url);

void free_text_node(TextNode **node);

void print_text_node(TextNode *node);

bool text_nodes_are_equal(TextNode *node1, TextNode *node2);

#endif
