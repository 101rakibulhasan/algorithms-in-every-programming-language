function LinearSearch(arr, x)
{
    for(let i = 0; i < arr.length ; i++)
    {
        if(arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}


const n = prompt("Enter the number of elements: ");
const arr = new Array(n);
console.log("Enter the elements in ascending order: ");
for (let index = 0; index < n; index++) {
    arr[index] = prompt();
}
const find = prompt("Enter the value you want to find: ");

result = LinearSearch(arr, find);

if(result == -1)
{
    console.log("The value is not in the array.");
}
else
{
    console.log("The position of the value we found in the array is: ", result+1);
}


/*
Intput:
    Enter the number of elements: 10
    Enter the elements in ascending order: 10 20 30 40 50 70 80 90 120 140
    Enter the value you want to find: 80

Output:
    The position of the value we found in the array is: 7
*/