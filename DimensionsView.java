import java.util.LinkedList;
import java.util.Queue;

public class DimensionsView
{
    static class Node
    {
        int data ;
        Node left , right ;

        Node(int data)
        {
            this.data = data;
            left = right = null ;
        }
    }

    public static Node root ;

    public static void main(String[] args)
    {
        root = new Node(1);

        root.left = new Node(2);
        root.right = new Node(3);

        root.left.left = new Node(4);
        root.left.right = new Node(5);

        root.right.left = new Node(6);
        root.right.right = new Node(7);

        leftView(root);
        rightView(root);

    }

    private static void leftView(Node root) {
        Queue<Node> queue = new LinkedList<>();
        if (root == null) {
            return;
        }

        queue.add(root);

        while (!queue.isEmpty()) {
            int n = queue.size();
            for (int i = 0; i < n; i++) {
                Node temp = queue.poll();

                if (i == 0)
                    System.out.println(temp.data);

                if (temp.left != null)
                    queue.add(temp.left);

                if (temp.right != null) {
                    queue.add(temp.right);
                }
            }
        }
    }

    private static void rightView(Node root)
    {
        Queue<Node> queue = new LinkedList<>();
        if(root == null)
        {
            return ;
        }

        queue.add(root) ;
        while(!queue.isEmpty())
        {
            int n = queue.size();
            for(int i = 0 ; i < n ; i++)
            {
                Node temp = queue.poll();

                if(i == n-1)
                    System.out.println(temp.data);

                if(temp.left != null)
                    queue.add(temp.left);

                if(temp.right!=null) {
                    queue.add(temp.right);
                }
            }
        }
    }
}
