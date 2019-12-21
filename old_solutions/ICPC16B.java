import java.util.Scanner;
class Array
{
public static void main(String[] args)
{
	Scanner sc = new Scanner(System.in);
	int t;
 
	t= sc.nextInt(); 
	while(t>0)
	{	
			int n,one,none,zero,other,a;
			zero = 0;
			one = 0;
			none = 0;
			other = 0;
		
			n = sc.nextInt();
			
			for(int i=0;i<n;i++)
			{
				a = sc.nextInt();
				switch(a)
				{
				    case 0:
				        zero+=1;
				        break;
				    case 1:
				        one+=1;
				        break;
				    case -1:
				        none+=1;
				        break;
				    default :
				        other+=1;
				        break;
				    
				    
				}
		
			}
			
			if(other>1 || (other==1 && none>=1) || (one == 0 && none > 1))
				System.out.println("no");
		   
		    else
		        System.out.println("yes");
		        	
		    t=t-1;
			
				
		
	}
	
	
	
}
} 

