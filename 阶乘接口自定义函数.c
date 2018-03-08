int factorial (int n)
{
	int result=1;
	if(n==0)
	  result=1;
    else
      result=factorial(n-1)*n;
    return result;
}
