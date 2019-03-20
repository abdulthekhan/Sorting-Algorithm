void mySort(int d[], unsigned int n)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	
	/*Selection sorting algorithm*/
	for (i = 0; i<n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (d[i]>=d[j])
			{
			temp = d[i];
			d[i] = d[j];
			d[j] = temp;
			}
		}
	}
	
	return;
}
