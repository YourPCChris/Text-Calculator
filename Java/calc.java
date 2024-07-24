import java.util.Scanner;



public class calc
{
	static char ChooseOperator()
	{
		char character = ' '; boolean isCorrectChar = false;
		Scanner sc = new Scanner(System.in); 

		while (!isCorrectChar)
		{	
			System.out.println("Enter an operator");
			try{
				character = sc.next().charAt(0);
				character  = Character.toUpperCase(character);
				isCorrectChar = true;
				if (!(Character.isDigit(character))){
					if ((character=='A') || (character=='S') || (character=='D') || (character=='M')){
						System.out.println("Entered a correct operation");
						isCorrectChar = true;
					}else{
						System.out.println("Enter one of the given letters");
						isCorrectChar = false;
					}
				}else if (Character.isDigit(character)){
					System.out.println("You Entered another noumber");
					isCorrectChar = false;
				}
			}catch(Exception e){
				System.out.println("Input One of the provid cahracters!");
				System.exit(0);
			}
		}
		return character;
	}
		

			
	static double Addition(double num1, double num2)
	{
		System.out.println("\n\t***ADDITION***");
		return (num1 + num2);
	}
	
	static double Subtraction(double num1, double num2)
	{
		System.out.println("\n\t***Subtraction***");
		return (num1 - num2);
	}
	
	static double Division(double num1, double num2)
	{
		System.out.println("\n\t***Divison***");
		return (num1 / num2);
	}

	static double Multiplication(double num1, double num2)
	{
		System.out.println("\n\t***Multiplication***");
		return (num1 * num2);
	}

	
	public static void main(String[] args)
	{
		Scanner keyboardInput = new Scanner(System.in);
		boolean isCorrectChar = false;
		char operator = ' ';
		
		System.out.println("Enter First Number");	
		double num1 = keyboardInput.nextDouble();	
		System.out.println("Enter Second Number");
		double num2 = keyboardInput.nextDouble();

		System.out.println("Enter A for Addition");
		System.out.println("Enter S for Subtraction");
		System.out.println("Enter D for Division");
		System.out.println("Enter M for division");

		operator = ChooseOperator();


		if (operator == 'A'){
			System.out.println(Addition(num1, num2));
		}
		else if (operator == 'S'){
			System.out.println(Subtraction(num1, num2));
		}
		else if (operator == 'D'){
			System.out.println(Division(num1, num2));
		}		
		else if (operator == 'M'){
			System.out.println(Multiplication(num1, num2));
		}
			
	}
}
		
		
