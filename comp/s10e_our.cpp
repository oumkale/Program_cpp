Skip to content
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 
@oumkale 
1
00VINAYREDDY-VIT/myCodes
generated from github/welcome-to-github
 Code Issues 0 Pull requests 0 Projects 0 Security Insights
myCodes/Codechef Problem Code: S10E
@VINAYREDDY-VIT VINAYREDDY-VIT Create Codechef Problem Code: S10E
5fdf577 5 days ago
50 lines (47 sloc)  1.15 KB
 
/* package codechef; // don't place package name! */

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
		    int test = in.nextInt();
		    while(test-->0){
		        int n = in.nextInt();
		        int arr[] = new int[n];
		        int i,j;
		        for(i=0;i<n;i++)
		            arr[i]=in.nextInt();
		        int count =1,c;
		        for(i=1;i<n;i++){
		            if(i<5){
		                c=0;
		                for(j=0;j<i;j++){
		                    if(arr[i]<arr[j])
		                        c++;
		                }
		                if(c==i)
		                    count++;
		            }
		            else{
		                c=0;
		                for(j=i-5;j<i;j++){
		                    if(arr[i]<arr[j])
		                        c++;
		                }
		                if(c==5)
		                    count++;
		            }
		        }
		        System.out.println(count);
		    }
		}
		catch(Exception e){
		    return;
		}
	}
}
© 2019 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About

