function InsertionSort(x)
{
    for (let index = 1; index < x.length; index++) {
        var holder = x[index];
        var j = index-1;
        while (x[j] > holder && j>=0) {
            x[j+1] = x[j];
            j--;
        }
        j++;
        x[j] = holder;  
    }
}

function PrintArray(x)
{
    x.forEach(element => {
        process.stdout.write(element + " ");
    });
    console.log();
}

const n = prompt("Enter the number of elements: ");
const arr = new Array(n);
console.log("Enter the elements: ");
for (let index = 0; index < n; index++) {
    arr[index] = parseInt(prompt(), 10);
}

InsertionSort(arr);
console.log("Sorted array: ");
PrintArray(arr);

/*
Input:
    Enter the number of elements: 10
    Enter the elements: 10 9 8 7 6 5 4 3 2 1

Output:
    Sorted array: 1 2 3 4 5 6 7 8 9 10
*/