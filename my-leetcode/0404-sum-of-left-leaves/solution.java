/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int sumOfLeftLeaves(TreeNode root) {
        return helper(root, -1);
    }
    public int helper(TreeNode root, int child){
        if(root == null) return 0;
        if(child ==1 &&  root.left==null && root.right ==null) return root.val;
        int lSum =helper(root.left, 1);
        int rSum = helper(root.right , -1);
        return lSum + rSum;
     }
}
