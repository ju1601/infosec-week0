//question 2
function bubble_sort(A){
    let i=0,t,u;
    while (true){
        if (i===A.length){
            break;
        }
        let j=0;
        while (true){
            if (j===A.length-i-1){
                break;
            }
            if (A[j] > A[j+1]){
                t=A[j];
                u=A[j+1];
                A[j+1]=t;
                A[j]=u;
            }
            j++
        }
        i++
    }
    console.log(A)
}
let B=[1231,2312,123,422,235];
bubble_sort(B);