let arr = new Array(100000);

function CreateFactorial()
{
    arr[0] = 1;
    arr[1] = 1;
    for (let index = 2; index < arr.length; index++){
        arr[index] = arr[index-1] * index;
    }
}

CreateFactorial();

let x = prompt("Enter the number: ");

console.log("The factorial of " + x +" is " + arr[x]);

/*
Input:
    Enter the number: 12

Output:
    The factorial of 12 is 479001600
*/