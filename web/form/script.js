function cal(){
    var num1 = parseInt(document.getElementById("num1").value);
    var num2 = parseInt(document.getElementById("num2").value);
    var operator = document.getElementById("operator").value;
    var result = document.getElementById("result");
    
    if(operator == '+'){
        result.value = num1+num2;
    }else if(operator == '-'){
        result.value = num1-num2;
    }else if(operator == '*'){
        result.value = num1*num2;
    }else if(operator == '/'){
        result.value = num1/num2;
    }else{
        result.value= "None";
    }
}