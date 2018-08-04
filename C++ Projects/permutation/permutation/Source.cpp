#include <iostream>
#include <string>
/// &lt;summary>
/// Algorithm Source: A. Bogomolny, Counting And Listing 
/// All Permutations from Interactive Mathematics Miscellany and Puzzles
/// http://www.cut-the-knot.org/do_you_know/AllPerm.shtml, Accessed 11 June 2009
/// &lt;/summary>
class Recursion
{
	private int elementLevel = -1;
	private int numberOfElements;
	private int[] permutationValue = new int[0];

	private char[] inputSet;
	public char[] InputSet
	{
		get{ return inputSet; }
	set{ inputSet = value; }
	}

	private int permutationCount = 0;
	public int PermutationCount
	{
		get{ return permutationCount; }
	set{ permutationCount = value; }
	}

		public char[] MakeCharArray(string InputString)
	{
		char[] charString = InputString.ToCharArray();
		Array.Resize(ref permutationValue, charString.Length);
		numberOfElements = charString.Length;
		return charString;
	}

	public void CalcPermutation(int k)
	{
		elementLevel++;
		permutationValue.SetValue(elementLevel, k);

		if (elementLevel == numberOfElements)
		{
			OutputPermutation(permutationValue);
		}
		else
		{
			for (int i = 0; i &lt; numberOfElements; i++)
			{
				if (permutationValue[i] == 0)
				{
					CalcPermutation(i);
				}
			}
		}
		elementLevel--;
		permutationValue.SetValue(0, k);
	}

	private void OutputPermutation(int[] value)
	{
		foreach(int i in value)
		{
			Console.Write(inputSet.GetValue(i - 1));
		}
		Console.WriteLine();
		PermutationCount++;
	}
}

int main()
{

}