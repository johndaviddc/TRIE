#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_SIZE 100

typedef struct TrieNode {
    struct TrieNode* children[26];
    int isLeaf;
} TrieNode;

TrieNode* createNode() {
    TrieNode* node = (TrieNode*)malloc(sizeof(TrieNode));
    for (int i = 0; i < 26; i++) {
        node->children[i] = NULL;
    }
    node->isLeaf = 0;
    return node;
}

void insert(TrieNode* root, char* word) {
    TrieNode* node = root;
    int len = strlen(word);
    for (int i = 0; i < len; i++) {
        int index = word[i] - 'a';
        if (node->children[index] == NULL) {
            node->children[index] = createNode();
        }
        node = node->children[index];
    }
    node->isLeaf = 1;
}

int search(TrieNode* root, char* word) {
    TrieNode* node = root;
    int len = strlen(word);
    for (int i = 0; i < len; i++) {
        int index = word[i] - 'a';
        if (node->children[index] == NULL) {
            return 0;
        }
        node = node->children[index];
    }
    return node != NULL && node->isLeaf;
}

int main() {
    TrieNode* root = createNode();
    char words[][MAX_WORD_SIZE] = {"apple", "banana", "orange", "pear", "pineapple"};
    int n = sizeof(words)/sizeof(words[0]);

    for (int i = 0; i < n; i++) {
        insert(root, words[i]);
    }

    printf("Search for apple: %d\n", search(root, "apple"));
    printf("Search for pineapple: %d\n", search(root, "pineapple"));
    printf("Search for grape: %d\n", search(root, "grape"));

    return 0;
}