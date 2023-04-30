let length = prompt("Enter the length of rectangle: ");
let width = prompt("Enter the width of rectangle: ");
length = Number(length);
width = Number(width);
let area = length * width;
let perimeter = 2 * (length + width);
document.write("The Rectangle Area is" + area);
document.write("The Rectangle Perimeter is: " + perimeter);