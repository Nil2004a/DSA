
import java.util.*;
public class linear_searchq4{
	public static void main(String []args){
	String tar;
               int n,i;
               Scanner sc=new Scanner(System.in);
               System.out.println("Enter the size of the array: ");
               n=sc.nextInt();
		sc.nextLine();
               String ar[]= new String[n];
               System.out.println("Enter the array: ");
               for(i=0;i<n;i++){
                   ar[i]=sc.nextLine();
               }
               System.out.println("Enter the target: ");
               tar=sc.nextLine();
               for(i=0;i<n;i++){
                   if(ar[i].compareToIgnoreCase(tar)==0){
                       System.out.println("Target found at index: "+i);
                   }
               }
	}
}
