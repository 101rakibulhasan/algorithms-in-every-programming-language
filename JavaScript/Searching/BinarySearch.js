function BinarySearch(x,f)
{
    var l = 0;
    var h = x.length-1;
    var flag = false;

    while(l<h)
    {
        let mid = Math.floor(l + (h - l) / 2);
        if(x[mid] == f)
        {
            return mid;
        }else
        { 
            if(x[mid] < f)
            {
                l = mid;
            }else if(x[mid] > f)
            {
                h = mid;
            }
            
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

result = BinarySearch(arr, find);

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