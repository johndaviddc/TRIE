# TRIE Data Structure
This is a C program that implements the Trie data structure. The program allows for inserting and searching for words in the Trie.

<h2>Technologies Used</h2>
*C Programming Language

<h2>How to Use</h2>
1. Clone the repository
2. Compile the program using a C compiler (e.g. gcc)
3. Run the program

<h2>Functions</h2>

<h3>TrieNode* createNode()</h3>
This function creates a new TrieNode with 26 children (one for each letter of the alphabet) and sets isLeaf to 0.

<h3>void insert(TrieNode* root, char* word)</h3>
This function inserts a new word into the Trie. It starts at the root of the Trie and traverses down the Trie based on the characters in the word being inserted. If a node for a character does not exist, it creates a new node. Once it reaches the end of the word, it sets the isLeaf flag to 1 to indicate that a complete word has been inserted.

<h3>int search(TrieNode* root, char* word)</h3>
This function searches for a word in the Trie. It starts at the root of the Trie and traverses down the Trie based on the characters in the word being searched. If it reaches the end of the word and the node it lands on has the isLeaf flag set to 1, then it returns 1 to indicate that the word is in the Trie. Otherwise, it returns 0.

<h2>Contributing</h2>
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

<h2>License</h2>
[MIT](https://choosealicense.com/licenses/mit/)