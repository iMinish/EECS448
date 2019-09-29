change = function()
{
  var styling = document.getElementById("dummyText");

  styling.style.backgroundColor = `rgb(${document.getElementById("bg1").value},
    ${document.getElementById("bg2").value},
    ${document.getElementById("bg3").value})`;

  styling.style.borderColor = `rgb(${document.getElementById("bd1").value},
    ${document.getElementById("bd2").value},
    ${document.getElementById("bd3").value})`;

  styling.style.borderWidth = document.getElementById("borderwidth").value;
}
