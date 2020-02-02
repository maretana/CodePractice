// Source: https://www.codewars.com/kata/51e056fe544cf36c410000fb/train/java
package com.github.maretana.codepractice;

import java.util.ArrayList;
import java.util.List;
import java.util.PriorityQueue;
import java.util.regex.*;

class TrieNode {
    private int frequency = 0;
    private String word = "";
    private TrieNode[] children = new TrieNode[27];
    private Boolean isInQueue = false;

    public int getFrequency() {
        return this.frequency;
    }

    public Boolean getIsInQueue() {
        return this.isInQueue;
    }

    public String getWord() {
        return this.word;
    }

    public void setIsInQueue(Boolean value) {
        this.isInQueue = value;
    }

    public void setWord(String newWord) {
        this.word = newWord;
    }

    public void incrementFrequency() {
        this.frequency++;
    }

    public TrieNode getChildAt(int index) {
        TrieNode child = this.children[index];
        if (child == null) {
            child = new TrieNode();
            this.children[index] = child;
        }
        return child;
    }
}

class Trie {
    private TrieNode root = new TrieNode();

    private int getCharIndex(char c) {
        return c == '\'' ? 26 : c - 'a';
    }

    public TrieNode insertWord(String word) {
        TrieNode currentNode = this.root;
        for (int i = 0; i < word.length(); i++) {
            char c = word.charAt(i);
            currentNode = currentNode.getChildAt(this.getCharIndex(c));
        }
        currentNode.setWord(word);
        currentNode.incrementFrequency();
        return currentNode;
    }
}

public class TopWords {

    private static final Pattern wordRegex = Pattern.compile("[a-z]+([a-z']+)?");
    
    public static List<String> top3(String s) {
        List<String> result = new ArrayList<String>(3);
        s = s.toLowerCase();
        Matcher match = wordRegex.matcher(s);
        Trie trie = new Trie();
        PriorityQueue<TrieNode> minHeap = new PriorityQueue<TrieNode>(4, (a, b) -> {
            return a.getFrequency() - b.getFrequency();
        });

        while (match.find()) {
            String word = s.substring(match.start(), match.end());
            TrieNode node = trie.insertWord(word);
            Boolean isUpdateOnly = false;
            if (node.getIsInQueue()) {
                node = new TrieNode();
                isUpdateOnly = true;
            }
            minHeap.add(node);
            node.setIsInQueue(true);
            if (minHeap.size() > 3 || isUpdateOnly) {
                node = minHeap.poll();
                node.setIsInQueue(false);
            }
        }

        while (!minHeap.isEmpty()) {
            TrieNode node = minHeap.poll();
            result.add(0, node.getWord());
        }

        return result;
    }
}