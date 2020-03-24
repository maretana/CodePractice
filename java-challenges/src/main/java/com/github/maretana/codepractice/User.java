// Source: https://www.codewars.com/kata/51fda2d95d6efda45e00004e/train/java
package com.github.maretana.codepractice;

public class User {
  public int rank;
  public int progress;
  private static final int MAX_RANK = 8;
  private static final int MIN_RANK = -8;

  public User() {
    this.rank = -8;
    this.progress = 0;
  }

  private int calculateProgressionPoints(int rank) {
    if (rank > 0) rank--;
    int userRank = this.rank > 0 ? this.rank - 1 : this.rank;
    int difference = rank - userRank;
    if (difference <= -2) {
      return 0;
    } else if (difference == -1) {
      return 1;
    } else if (difference == 0) {
      return 3;
    } else {
      return 10 * difference * difference;
    }
  }

  private void validateRank(int rank) throws IllegalArgumentException {
    if (rank < User.MIN_RANK || rank == 0 || rank > User.MAX_RANK) {
      throw new IllegalArgumentException();
    }
  }

  private void rankUp() {
    if (this.rank == -1) {
      this.rank = 1;
    } else if (this.rank < User.MAX_RANK) {
      this.rank++;
    }
  }

  private void addProgressionPoints (int points) {
    if (this.rank < User.MAX_RANK) {
      this.progress +=points;
      while (this.progress >= 100) {
        this.rankUp();
        this.progress -= 100;
        if (this.rank == User.MAX_RANK) this.progress = 0;
      }
    }
  }
  
  public void incProgress(int rank) throws IllegalArgumentException {
    validateRank(rank);
    if (this.rank < User.MAX_RANK) {
      int points = calculateProgressionPoints(rank);
      addProgressionPoints(points);   
    }
  }
}
