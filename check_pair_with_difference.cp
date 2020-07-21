#include <stdio.h>

int main()
{
    // First, lets get the number of integers the user wants to store
    int num_of_integers;
    printf("Please enter the number of elements to be stored in the array \n");
    scanf("%d",&num_of_integers);
    
    // Print what user entered
    printf("You entered %d elements\n", num_of_integers);
    
    // Now, lets check if the numer of integer is greater than 0 
    // Remember, if the user entered 0 or negative number, we can't do anything
    // as size of array can't be less than 0. Size of array can be 0, in which case we don't do anything
    if(num_of_integers <= 0) 
    {
        printf("The number of intergers entered is not valid - %d exiting...\n",num_of_integers);
        return 0;
    }
    
    // Now, we have checked that the number of elements is valid, hence we start storing the data in 
    // an array. But first, lets declare an array and allocate memory for the array.
    // Note that doing {0} will allocate memory and initialize the all the elements to 0. 
    // You can do {number} to initialize array with any number
    // Without allocating memory, using the memory will throw an error during "run time" of the program
    int our_array[num_of_integers];
    
    // Now that we have allocated memory and declared an array, lets start collecting
    // array from the user.
    for(int i = 0; i < num_of_integers; i++)
    {
        printf("Please enter %d element\n", i);
        scanf("%d", &our_array[i]);
        
        // Notice how I user our_array instead of temp variable n.
        // You can also do something like what you did, but I avoid temp variables
        // scanf("%d",&n);
        // a[j]
    }
    
    // Next we can print the array here. 
    printf("\n Your array is the following - \n");
    for(int i = 0; i < num_of_integers; i++)
    {
        printf("%d", our_array[i]);
        if( (i+1) != num_of_integers)
        {
            printf("->");
        } else {
            printf("\n");
        }
    }
    // Now, copy - pasting your logic
    int num,count=0;
    
    // Now ask user for diff
    printf("\n Please enter the number you want to find diff for : \n");
    scanf("%d", &num);
    printf("\n You have entered %d\n", num);
    for(int j = 0; j < num_of_integers - 1; j++)
    {
        for(int k=j+1; k < num_of_integers; k++)
        {
            if(our_array[k] - our_array[j] == num)
            count++;
        }
    }
    
    // After your logic, if count == 1, then you found the value!
    if (count == 1)
    {
        printf("\nYes, array pair found!\n");
    }
    else
    {
        printf("\nNo, array pair not found\n");
    }

    return 0;
}
