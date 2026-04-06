#ifndef HTMLNODE_H_
#define HTMLNODE_H_

typedef struct HtmlNode {
  char *tag;
  char *value;
  struct HtmlNode *child;
  struct HtmlNode *right;
  char *props;
} HtmlNode;

HtmlNode *create_html_node(char *tag, 
                           char *value, 
                           HtmlNode *child, 
                           HtmlNode *right, 
                           char *props);

void free_html_node(HtmlNode **node);

char *html_node_to_html(HtmlNode *node);

void print_html_node(HtmlNode *node);

#endif
