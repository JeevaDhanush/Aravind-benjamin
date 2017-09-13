package guviiiiiiiii;

import java.util.Scanner;

public class AWE {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
	    System.out.println("First_Name =");
		String a=sc.next();
	    System.out.println("Last_Name =");
		String b=sc.next();
	    System.out.println("pin=");
		String pin=sc.next();
	    System.out.println("n=");
		int n=sc.nextInt();
		String l="";
		String s="";
		if(a.length()==b.length()){
			int q=Integer.parseInt(a.substring(0, 1));
			int w=Integer.parseInt(b.substring(0, 1));
			if(q<w){
				l=b;
				s=a;
			}else{
				l=a;
				s=b;
			}
		}
		if(a.length()<b.length()){
			l=b;
			s=a;
		}else{
			l=a;
			s=b;
		}
		String id=l.substring(0, 1)+s;
		char[]d=pin.toCharArray();
		int p=Character.getNumericValue(d[n-1]);
		int pi=Character.getNumericValue(d[d.length-n]);
		System.out.println("user_id="+id+""+p+""+pi);
		
	}
}
