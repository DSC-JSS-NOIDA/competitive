/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int n,i;
		n=sc.nextInt();
		String s="";
		for(int j=0;j<=n;j++){
		    s=sc.nextLine();
		    
                            	
                            //	System.out.println(s.length());
	 for( i=0;i<s.length()-1;i++)
	  	   {      
	  	       char a,b;
	  	     
	  	       if(s.charAt(i)>s.charAt(i+1))
	             { System.out.println("no");
	                 break;
	                                }
	  	   }                  
	            //System.out.println(i);                       
	  if(i==s.length()-1){
	      System.out.println("yes");
	 	    
		}
		}	
		
	}
}
