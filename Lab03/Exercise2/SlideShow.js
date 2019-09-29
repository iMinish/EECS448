let index = 0;
let pictures = ["Pictures/image1.jpg", "Pictures/image2.jpg", "Pictures/image3.jpg", "Pictures/image4.jpg", "Pictures/image5.jpg"];

next = function()
{
  index = index + 1;
  document.getElementById("picture").src = pictures[index];

  if(index == 5) {
    index = 0;
    document.getElementById("picture").src = pictures[index];
  }
}

previous = function()
{
  if(index == 0) {
    index = 5;
    document.getElementById("picture").src = pictures[index - 1];
  }
  else if(index != 0) {
    index = index - 1;
    document.getElementById("picture").src = pictures[index];
  }
}
