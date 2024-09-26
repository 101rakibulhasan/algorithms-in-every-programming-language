function SelectionSort(x)
{
    for (let index = 0; index < x.length; index++) {
        var min = Number.MAX_VALUE;
        var min_id = 0;
        var found = false;
        for (let j = index; j < x.length; j++) {
            if(min> x[j])
            {
                min = x[j];
                min_id = j;
                found = true;
            } 
        }

        if(found)
        {
            var temp = x[index];
            x[index] = min;
            x[min_id] = temp;
        }   
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

SelectionSort(arr);
console.log("Sorted array: ");
PrintArray(arr);

/*
Input:
    Enter the number of elements: 10
    Enter the elements: 10 9 8 7 6 5 4 3 2 1

Output:
    Sorted array: 1 2 3 4 5 6 7 8 9 10
*/