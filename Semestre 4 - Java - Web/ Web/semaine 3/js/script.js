console.log("marie-pierre");

// variables
const TIMEOUT = 10;
let fillable = false;
let initial = Date.now();

// counters
let counter = 0,
    anti_counter = TIMEOUT,
    PLUS_DE_COMPTEURS = 0,
    roll = 0, max_roll = 0;

// timers
let timer = () => {
    setTimeout(() => {
        if (anti_counter > 0) {
            anti_counter--;
            document.getElementById("add").innerText = "add" + " (" + anti_counter + ")";
            timer()
        } else {
            document.getElementById("add").innerText = "add";
            anti_counter = TIMEOUT;
            document.getElementById("add").classList.remove("fatigue");
            fillable = true;
        }
    }, 1000);
}
let anotherTimer = () => {
    setTimeout(() => {
        document.getElementById("formbutton").style.display = "block";
    },5000);
}
let rolling = () => {
    setTimeout(() => {
        if (roll < max_roll) {
            roll += 5;
            document.getElementById("formbutton").style.transform = "rotateZ(" + roll + "deg)";
            rolling();
        } else if(roll === 360) {
            roll = 0;
        }
    }, 10);
}

// time to kill the td
let td_killer = () => {
    document.getElementsByTagName("html")[0].style.cursor = "crosshair";
    document.addEventListener('click', (e) => {
        let target = e.target;
        console.log(target.tagName);
        if ((target.tagName !== "HEADER" || (target.tagName === "HEADER" && target.children.length <= 0)) &&
            (target.tagName !== "BODY" || (target.tagName === "BODY" && target.children.length <= 0)) &&
            (target.tagName !== "HTML" || (target.tagName === "HTML" && target.children.length <= 0)) &&
            (target.tagName !== "DIV" || (target.tagName === "DIV" && target.children.length <= 0))) {
            target.remove();
        }else{
            let divs = document.getElementsByTagName("div");
            for (let i in divs) {
                console.log(i);
                if (i.children.length <= 0) {
                    i.remove();
                }
            }
        }
    }, false);
}

// add button
timer();
function handle_add() {
    let out = true;
        if (fillable){
        let inputs = {
            "fname": document.getElementById("fname").value,
            "lname": document.getElementById("lname").value,
            "mail": document.getElementById("mail").value,
            "role": document.getElementById("role").value,
        }, answer = {
            "fname": "tribu",
            "lname": "des",
            "mail": "zhou",
            "role": "teacher",
        };
        let correct = true;
        for (let i in inputs) {
            if (!inputs[i]) {
                out = false;
            }
            if (correct && answer[i] !== inputs[i]) {
                correct = false;
            }
            else {
                console.log("equal", answer[i], inputs[i]);
            }
        }
        if (correct) {
            console.log("it's no use");
            td_killer();
        }
        if (out) {
            let new_row = document.createElement("tr");
            for (let i in inputs) {
                let td = document.createElement("td");
                td.textContent = inputs[i];
                document.getElementById(i).value = "";
                new_row.appendChild(td);
            }
            let table = document.getElementsByTagName("tbody")[0];
            table.appendChild(new_row);
            counter++;
            let parent = document.getElementsByTagName("tbody")[0];
            let children = parent.children;
            console.log(children[counter-1]);
            children[counter-1].style.borderBottom = "2px solid white";
            // alert("PANDA");
            fillable = false;
            document.getElementById("add").classList.remove("fatigue");
            console.log(anti_counter);
            timer();
        }
    }
    else
    {
        console.log(anti_counter);
        if(out)
        {
            //alert("panda");
            if(PLUS_DE_COMPTEURS === 0)
            {
                initial = Date.now();
            }
            PLUS_DE_COMPTEURS ++;
            if(Date.now() - initial > 2000)
            {
                if(PLUS_DE_COMPTEURS > 4){
                    document.getElementById("formbutton").style.display = "none";
                    anotherTimer();
                }
                PLUS_DE_COMPTEURS = 0;
            }
        }
    }
}
document.getElementById("add").onclick = handle_add;

// reset button
let handle_remove = () => {
    let table = document.getElementById("listOfNameWhatALongIdForUHugo");
    document.getElementById("legend").classList.remove("pasDernier");
    // console.log(counter);
    for (let i = 0; i < counter; i++)
    {
        table.deleteRow(1);
    }
}
document.getElementById("reset").onclick = handle_remove;

// do a barrel roll
let handle_barrel_roll = () => {
    max_roll = (max_roll===180)?360:180;
    rolling();
}

document.getElementById("barrel_roll").onclick = handle_barrel_roll;
