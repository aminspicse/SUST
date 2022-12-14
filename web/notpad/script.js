// get data from html 
const form = document.querySelector('form');
const input = document.getElementById('data');
const btn_submit = document.getElementById('submit');
const btn_clear = document.getElementById('clear');
const tbl = document.querySelector('table');

// arry for store data 
let itemsArray = localStorage.getItem('items') ? JSON.parse(localStorage.getItem('items')) : [];
localStorage.setItem('items', JSON.stringify(itemsArray));

const entryMaker = (text) => {
  const tr = document.createElement('tr');
  const td = document.createElement('td');
  const td2 = document.createElement('td');
  
  const btn_del = document.createElement('button');
  btn_del.className = "btn btn-outline-danger btnCell";

  td2.style = "width: 50px;";
  tr.appendChild(td);
  tr.appendChild(td2)

  btn_del.innerHTML = "Delete";
  btn_del.onclick = function(){
    for (let i = 0; i < tbl.rows.length; i++) {
      if (tbl.rows[i] === tr) {
        itemsArray.splice(i,1);
        localStorage.setItem('items', JSON.stringify(itemsArray));
        tbl.removeChild(tr);
      }
    }
  };
 
  
  td.appendChild(document.createTextNode(text));
  td2.appendChild(btn_del);
  tbl.prepend(tr);
}

itemsArray.forEach(item => {
  entryMaker(item);
});

function submitNewEntry(){
  if (input.value === "" || input.value[0] === " ") {
    input.value = "";
    return;
  }
  itemsArray.push(input.value);
  localStorage.setItem('items', JSON.stringify(itemsArray));
  entryMaker(input.value);
  input.value = "";
}

form.addEventListener('submit', function (e) {
  e.preventDefault();
  submitNewEntry();
});

btn_submit.addEventListener('click', function(){
  submitNewEntry();
});

btn_clear.addEventListener('click', function () {
  localStorage.clear();
  while (tbl.firstChild) {
    tbl.removeChild(tbl.firstChild);
  }
  itemsArray = [];
});
