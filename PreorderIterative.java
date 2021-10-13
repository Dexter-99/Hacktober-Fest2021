import java.util.*;

public class PreorderIterative 
{
    public static class Node
    {
        int data;
        Node left;
        Node right;

        public Node(int data)
        {
            this.data=data;
        }
    }
    public static void pre(Node root)
    {
        List<Integer> ele=new ArrayList<>();
        Stack<Node> st=new Stack<>();
        st.push(root);
        while (!st.isEmpty())
        {
            root=st.pop();
            ele.add(root.data);
            if(root.right!=null){
                st.push(root.right);
            }
            if(root.left!=null)
            {
                st.push(root.left);
            }

        }
        for (int i : ele)
        {
            System.out.print(i);
        }

    }
    public static void main(String[] args)
    {
         Node node=new Node(1);
         node.left=new Node(2);
         node.right=new Node(3);
         node.right.left=new Node(7);
         node.right.right=new Node(8);
         node.right.right.right=new Node(10);
         node.right.right.left=new Node(9);
         node.left.left=new Node(4);
         node.left.right=new Node(5);
         node.left.right.left=new Node(6);
         pre(node);
    }
}
