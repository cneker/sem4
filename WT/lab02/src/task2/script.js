let floor = prompt("Numbers of floors in the house (1-25)");
floor = Number(floor);
if (isNaN(floor) || floor < 1 || floor > 25){
    alert("Invalid number of floors");
    throw "Ivalid number of floors";
}

let entrance = prompt("Numbers of entrances in the house (1-10)");
entrance = Number(entrance);
if (isNaN(entrance) || entrance < 1 || entrance > 10){
    alert("Invalid number of entrances")
    throw "Invalid number of entrances";
}

let flat = prompt("Numbers of flats in the entrance (1-20)");
flat = Number(flat);
if (isNaN(flat) || flat < 1 || flat > 20){
    alert("Invalid number of flats");
    throw "Invalid number of flats";
}

let requiredFlat = prompt("Required flat");
requiredFlat = Number(requiredFlat);
if (isNaN(requiredFlat) || requiredFlat < 1 || requiredFlat > flat){
    alert("Invalid nimber of flat");
    throw "Invalid nimber of flat";
}

let result = requiredFlat / flat * entrance;

result = Math.ceil(result);

alert(`Required flat is in ${result} entrance`);

