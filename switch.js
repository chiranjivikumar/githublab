let day = 4;
let name; // Corrected the variable name
switch(day){
    case 1:
        name = "Sunday";
        break;
    case 2:
        name = "Monday";
        break;
    case 3:
        name = "Tuesday";
        break;
    case 4:
        name = "Wednesday"; // Changed day 4 to "Wednesday"
        break;
    case 5:
        name = "Thursday";
        break;
    case 6:
        name = "Friday";
        break;
    case 7:
        name = "Saturday";
        break;
    default:
        name = "Invalid day"; // Added a default case for invalid values
}
console.log(name); // Log the name instead of day
