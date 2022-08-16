
using namespace std;
void
merging (int arr1[], int n1, int arr2[], int n2)
{
  int size = n1 + n2;
  int *arr3 = new int[size];

  int i = 0, j = 0, k = 0;
  while (i < n1 && j < n2)
    {
      if (arr1[i] < arr2[j])
	{
	  arr3[k++] = arr1[i++];
	}
      else
	{
	  arr3[k++] = arr2[j++];
	}
    }
  while (i < n1)
    {
      arr3[k++] = arr1[i++];
    }

  while (j < n2)
    {
      arr3[k++] = arr2[j++];
    }

  for (k = 0; k < size; k++)
    {
      cout << arr3[k] << " ";
    }
}

int
main ()
{
  int arr1[3] = { 10, 15, 17 };
  int arr2[5] = { 7, 12, 16, 20, 25 };
  merging (arr1, 3, arr2, 5);

  return 0;
}

