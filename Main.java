import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N, i;
	    double a, b, c, media;
	    
	    System.out.print("Quantos casos voce vai digitar? ");
	    N = sc.nextInt();
	    
	    for (i = 0; i < N; i++) {
	    	System.out.println("Digite tres numeros: ");
	    	a = sc.nextDouble();
	    	b = sc.nextDouble();
	    	c = sc.nextDouble();
	    	
	    	media = (double)(a * 2 + b * 3 + c * 5) / ( 2 + 3 + 5 );
	    	System.out.println("MEDIA = " + String.format("%.1f", media));
	    	
	    }
	    
	    sc.close();
		
	}

}
