import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		try{
		   Scanner in = new Scanner(System.in);
		   int test=in.nextInt();
		   while(test-->0){
		       int row=in.nextInt();
		       int column =in.nextInt();
		       int queries = in.nextInt();
		       long arr[][]=new long[row][column];
		       int i,j;
		       for(i=0;i<row;i++)
    		       for(j=0;j<column;j++)
    		            arr[i][j]=0;
    		  while(queries-->0){
    		      int x =in.nextInt();
    		      int y =in.nextInt();
    		      for(j=0;j<column;j++){
    		          arr[x-1][j]++;
    		      }
    		      for(j=0;j<row;j++){
    		          arr[j][y-1]++;
    		      }
    		  }
    		  long count=0;
    		  for(i=0;i<row;i++)
    		       for(j=0;j<column;j++)
    		            if(arr[i][j]%2!=0)
    		                count++;
    		 System.out.println(count);
		   }
		}
		catch(Exception e){
		    return;
		}
	}
}
