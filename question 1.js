//question 1
function roulette(){
    let x = Math.floor(Math.random() * 6)+1;
    if (x===1){
        console.log("You've lost , play again")
    }
    else{
        console.log("Phew, you've been saved")
    }
}
roulette()