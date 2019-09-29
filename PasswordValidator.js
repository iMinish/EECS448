main = function()
{
  let pw1 = document.getElementById("pw1").value;
  let pw2 = document.getElementById("pw2").value;

  if((pw1.length < 8 || pw2.length < 8) && (pw1 != pw2)) {
    if(pw1.length < 8 && pw1 != pw2) {
      alert("ERROR: Password 1 is too short and Password 1 does NOT match Password 2");
    }
    else {
      alert("ERROR: Password 2 is too short and Password 1 does NOT match Password 2");
    }
  }
  else if(pw1.length < 8 || pw2.length < 8) {
    if(pw1.length < 8) {
      alert("ERROR: Password 1 is too short");
    }
    else {
      alert("ERROR: Password 2 is too short");
    }
  }
  else if(pw1 != pw2) {
    alert("ERROR: Password 1 does NOT match Password 2");
  }
  else {
    alert("SUCCESS: Password 1 matches Password 2");
  }
}
