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
    public static void helper(TreeNode root,String s,List<String> ans){

        if(root==null) return ;
        if(root.left== null && root.right==null){
            s=s+root.val;
            ans.add(s);
        }


        helper(root.left,s+root.val+"->",ans);
        helper(root.right,s+root.val+"->",ans);
    }
    public List<String> binaryTreePaths(TreeNode root) {
        List<String> list=new ArrayList<>();
        helper(root,"",list);
        return list;
        
    }
}
