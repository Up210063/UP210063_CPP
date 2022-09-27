<div align= center>

# EXCERSICE 1.- RENTA PROGRAM IN C++

<div>

<div align= justify>

## What is the purpose of this program? well, the program was made with a simple instruction
### this instruction is:
    the tax brackets for the declaration of income
    in a given country are the following:

    Tax rate income
    Less than $10,000 5%
    Between $10,000 and $20,000 15%
    Between $20,000 and $35,000 20%
    Between $35,000 and $60,000 30%
    More than $60,000 45%

    Write a program that asks the user for their rent
    annual and shows on the screen the tax rate that
    corresponds

<div>

```c++
// introduce the rent account 
    cout << " Cual es tu renta anual: " << endl;
    cin >> rentaAnual;
    

    // the variables are validated by the functions 
    if (rentaAnual < 10000)
    {
        porcentaje =.05;
    }
    else if (rentaAnual >= 10000 & rentaAnual <20000 )
    {
        porcentaje = .15;
    }
    else if (rentaAnual >= 20000 & rentaAnual <35000)
    {
        porcentaje = .20;
    }
    else if (rentaAnual >= 35000 & rentaAnual < 60000)
    {
        porcentaje = .30;
    }
    else if (rentaAnual >= 60000 )
    {
        porcentaje = .45;
    }
    
    // you can see the results in this part 
    cout << "el porcentaje anual es : " << (porcentaje*100) << "%" <<endl;
    cout << "el interes anual es : " << (rentaAnual*porcentaje) << endl;
