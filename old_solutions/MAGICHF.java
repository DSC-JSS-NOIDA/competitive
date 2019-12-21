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
		
	
		Scanner sc=new Scanner(System.in);
	     //eneter the choice for odd series or even series 3 for odd and 2 for even
		 int t=sc.nextInt();
		 while(t>0){
		     
		    int  n=sc.nextInt();
		     int x=sc.nextInt();
		     int s=sc.nextInt();
		     
		     int a[]= new int[n];
		     for(int j=0;j<n;j++){
		         
		         a[j]=0;
		     }
		     a[x-1]=1;
		     
		     while(s>0){
		         
		         int s1=sc.nextInt();
		         int s2=sc.nextInt();
		         
		         s1=s1-1;
		         s2=s2-1;
		         
		         
		         int temp=a[s1];
		         a[s1]=a[s2];
		         a[s2]=temp;
		         
		         
		         
		         s=s-1;
		     }
		     
		     
		 
		
		for(int i=0;i<n;i++){
		    
		    if(a[i]==1){
		        System.out.println(i+1);
		    }
		}
		
		    t=t-1;
		 }
	   }	
	
}
