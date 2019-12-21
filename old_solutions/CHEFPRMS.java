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
		
	    int semiprime[]= new int[]{ 6, 10, 14, 15, 21, 22, 26, 33, 34, 35, 38, 39, 46, 51, 55, 57, 58, 62, 65, 69, 74, 77, 82, 85, 86, 87, 91, 93, 94, 95, 106, 111, 115, 118, 119, 121, 122, 123, 129, 133, 134, 141, 142, 143, 145, 146, 155, 158, 159, 161, 166,  177, 178, 183, 185, 187, 194};
	  
        Scanner sc= new Scanner(System.in);
        int t= sc.nextInt();
        
        while(t>0){
            int c=0;
            int n=sc.nextInt();
            
           
            
            for(int i=0;i<semiprime.length;i++){
                 int a=n-semiprime[i];
              
                 for(int j=0;j<semiprime.length;j++)
             {
                 
                  if(a==semiprime[j])
                {
                   
                    

                    c=c+1;
                    
                }
             }
             
               
            }
            
            if(c>0){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
            
            t=t-1;
        }
        
        
	}
	   	
	
}
