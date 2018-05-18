var timeID1;

//function delay() {
//    timeID = setTimeout(show, 28000);
//}

function delay() {
    timeID1 = setTimeout(atpl, 21000);
}

//function show() {
//    audi = document.createAttribute("autoplay");
//}

function atpl() {
    var ctrl = document.createAttribute("controls");
    var audi = document.getElementById("aud");
    audi.setAttributeNode(ctrl);
}

