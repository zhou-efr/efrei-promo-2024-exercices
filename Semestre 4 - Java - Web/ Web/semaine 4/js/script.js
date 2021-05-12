console.log("marie-pierre");

// variables
const TIMEOUT = 10;
const DATA_SIZE = 200;
const TASKS_NUMBER = 10;
let fillable = false;
let initial = Date.now();
let index = 0;

// counters
let user_counter = 0,
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

// show task
let showTasks = () => {
    document.getElementById("btn-users").disabled = false;
    document.getElementById("mainContent").style.display = "none";
    document.getElementById("btn-tasks").disabled = true;
    document.getElementById("taskContent").style.display = "flex";
};
document.getElementById("btn-tasks").onclick = showTasks;
showTasks();

// show users
let showUsers = () => {
    // it could be much better yet remember, i'm lazy
    document.getElementById("btn-users").disabled = true;
    document.getElementById("mainContent").style.display = "flex";
    document.getElementById("btn-tasks").disabled = false;
    document.getElementById("taskContent").style.display = "none";
};
document.getElementById("btn-users").onclick = showUsers;

// get task
// fetch('https://jsonplaceholder.typicode.com/todos')
//     .then(response => response.json())
//     .then(function (data) {
//         // console.log('data', data);
//         // WOW AMAIZING !! we see a json file also known as javascript object notation ! https://fr.wikipedia.org/wiki/JavaScript_Object_Notation
//         // ok i spoke too fast... IT'S AN ARRAY OF JS OBJECT !! ohh... that's still a json :)))
//     });
createTask = (userId, id, title, completed, table) => {
    // if the user is an asshole... too bad for him
    let new_task_row = document.createElement("tr");
    // I first do directly with objects... then I read the instruction... So I copy/paste
    let contents = [userId, id, title, completed];

    for(let j in contents) {
        let td = document.createElement("td");
        td.textContent = contents[j];
        new_task_row.appendChild(td);
    }
    table.appendChild(new_task_row);
};

getTasks = () => {
    fetch('https://jsonplaceholder.typicode.com/todos')
        .then(res => res.json())
        .then((data) => {
            // // console.log(data);
            // create table outside for avoid useless power consumption
            let table = document.getElementById("taskTbody");
            for (let i = TASKS_NUMBER*index ; i < (TASKS_NUMBER*index)+TASKS_NUMBER ; i++) {
                createTask(data[i].userId, data[i].id, data[i].title, data[i].completed, table);
            }
        })
};
getTasks();

// handle control button
handle_control_button = (btn) => {
    if ((!btn && index > 0) || (btn && index < (DATA_SIZE/TASKS_NUMBER)-1)) {
        handle_remove("taskTable", TASKS_NUMBER);
        if (btn) {
            if (!index) {
                document.getElementById("btn-back").classList.remove("fatigue");
            }
            index++;
            if (index === (DATA_SIZE/TASKS_NUMBER)-1) {
                document.getElementById("btn-foward").classList.add("fatigue");
            }
        }else{
            if (index === DATA_SIZE/TASKS_NUMBER) {
                document.getElementById("btn-foward").classList.remove("fatigue");
            }
            index--;
            if (!index) {
                document.getElementById("btn-back").classList.add("fatigue");
            }
        }
        getTasks();
    }
}
document.getElementById("btn-back").onclick = () => handle_control_button(0);
document.getElementById("btn-foward").onclick = () => handle_control_button(1);

// time to kill the td
let td_killer = () => {
    document.getElementsByTagName("html")[0].style.cursor = "crosshair";
    document.addEventListener('click', (e) => {
        let target = e.target;
        // console.log(target.tagName);
        if ((target.tagName !== "HEADER" || (target.tagName === "HEADER" && target.children.length <= 0)) &&
            (target.tagName !== "BODY" || (target.tagName === "BODY" && target.children.length <= 0)) &&
            (target.tagName !== "HTML" || (target.tagName === "HTML" && target.children.length <= 0)) &&
            (target.tagName !== "DIV" || (target.tagName === "DIV" && target.children.length <= 0))) {
            target.remove();
        }else{
            let divs = document.getElementsByTagName("div");
            for (let i in divs) {
                // console.log(i);
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
                // console.log("equal", answer[i], inputs[i]);
            }
        }
        if (correct) {
            // console.log("it's no use");
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
            user_counter++;
            let parent = document.getElementsByTagName("tbody")[0];
            let children = parent.children;
            // console.log(children[counter-1]);
            children[user_counter-1].style.borderBottom = "2px solid white";
            // alert("PANDA");
            fillable = false;
            document.getElementById("add").classList.remove("fatigue");
            // console.log(anti_counter);
            timer();
        }
    }
    else
    {
        // console.log(anti_counter);
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
let handle_remove = (tableId, counter) => {
    let table = document.getElementById(tableId);
    document.getElementById("legend").classList.remove("pasDernier");
    // // console.log(counter);
    for (let i = 0; i < counter; i++)
    {
        table.deleteRow(1);
    }
}
document.getElementById("reset").onclick = () => handle_remove("listOfNameWhatALongIdForUHugo", user_counter);

// do a barrel roll
let handle_barrel_roll = () => {
    max_roll = (max_roll===180)?360:180;
    rolling();
}

document.getElementById("barrel_roll").onclick = handle_barrel_roll;
