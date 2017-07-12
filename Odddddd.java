package guvi;

import java.util.Scanner;

public class Odddddd {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		String a=sc.nextLine();
		sc.close();
		
		String s1="";
		String s2="";
		
		
		for(int i=0;i<a.length();i+=2){
		s1+=String.valueOf(a.charAt(i));
		}
		
		for(int i=1;i<a.length();i+=2){
			s2+=String.valueOf(a.charAt(i));
			}
		try{for(int i=0;i<a.length();i++){
		
		System.out.print(s2.charAt(i)+""+s1.charAt(i));
		}}catch(Exception e){
			if(a.length()%2!=0){
				int q=a.length()-1;
				System.out.print(a.charAt(q));		
		}
	}


	}}
