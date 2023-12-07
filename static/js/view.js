const side_bt = document.getElementsByClassName("nav-item");
const expander_bt = document.getElementsByClassName("expander_bt");
const side_input = document.getElementsByClassName("library_head_btn_input");
var active_side_bt = 1;
var side_mini = 1; // Is side bar in full or mini mode
var search_input = 0; // Is side bar search displayed

// Player Specific Buttons
var love_bt = 0; // Is side bar search displayed
/**
 * Adjusts the dimensions of various elements in the application based on the current window size.
 */
function appResize() {
    // some important variabls
    let window_height = window.innerHeight;
    let window_width = window.innerWidth;
    document.body.style.height = window_height + 'px';
    document.body.style.width = window_width + 'px';
    document.getElementById("items").style.height = window_height - 177 + 'px';
    if (side_mini) {
        document.getElementById("side_mini").style.display = ''
        document.getElementById("side").style.display = 'none'
        document.getElementById("main").style.left = 70 + 'px'
        document.getElementById("main").style.width = window_width - 75 + 'px';
        document.getElementById("side_mini").style.height = window_height - 102 + 'px';
        document.getElementById("mini_library_items").style.height = window_height - 377 + 'px';
    } else {
        document.getElementById("library_items").style.height = window_height - 373 + 'px';
        document.getElementById("side").style.display = ''
        document.getElementById("side_mini").style.display = 'none'
        document.getElementById("main").style.width = window_width - 250 + 'px';
        document.getElementById("main").style.left = 245 + 'px'
    }
}
//---------------------------------------------------------
// Pre-start Routines
//---------------------------------------------------------
window.onresize = () => {
    appResize();
}
window.onload = () => {
    appResize();
    active_bt(0);
}
//---------------------------------------------------------
// Misc Views
//---------------------------------------------------------
function active_bt(index) {
    side_bt[index].style.color = "var(--accent-color)";
}
function Deactive_bt(index) {
    side_bt[index].style.color = "";
}
// Side buttons
for (let index = 0; index < side_bt.length; index++) {
    side_bt[index].addEventListener('click', () => {
        if (active_side_bt > 0) {
            side_opt_on(index);
        };
    })
};
//Expand Mini or Full Side
for (let index = 0; index < expander_bt.length; index++) {
    expander_bt[index].addEventListener('click', () => {
        side_mini == 1 ? side_mini = 0 : side_mini = 1; appResize();
    })
};
document.getElementById("library_head_input").style.display = "none"

function showSideInput(index) {
    if (index) {
        document.getElementById("library_head_head").style.display = "none";
        document.getElementById("library_head_input").style.display = "";
        search_input = 0;
    } else {
        document.getElementById("library_head_input").style.display = "none"
        document.getElementById("library_head_head").style.display = "";
    }
}
// show\hide input
for (let index = 0; index < side_input.length; index++) {
    side_input[index].addEventListener('click', () => {
        search_input == 1 ? search_input = 0 : search_input = 1; showSideInput(search_input);
        document.getElementById("library_head_input_ok").addEventListener('click', () => {
            //TODO: Implement later
            showSideInput(0);
        })
    })
};

// General function applied to all Side buttons
function side_opt_on(index) {
    Deactive_bt(active_side_bt - 1);
    active_bt(index);
    active_side_bt = index + 1;
};

//---------------------------------------------------------
// Player Buttons
//---------------------------------------------------------
