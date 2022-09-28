<div align= center>

# EXCERSICE 1.- RENTA PROGRAM IN C++

<div>

<div align= justify>

## What is the purpose of this program? well, the program was made with a simple instruction

## This instruction is:
    The tax brackets for the declaration of income
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

<div align = "center">

# INPUT
<div>

<div align = "justify">

```c++
// introduce the rent account 
    cout << " What is your AnnualRent: " << endl;
    cin >> AnnualRent;
    
```
<div>

<div align = "center">

# PROCCESS
<div>

<div align = "justify">

```c++
                // the variables are validated by the functions 
    if (AnnualRent < 10000)
    {
        Tax =.05;
    }
    else if (AnnualRent >= 10000 & AnnualRent <20000 )
    {
        Tax = .15;
    }
    else if (AnnualRent >= 20000 & AnnualRent <35000)
    {
        Tax = .20;
    }
    else if (AnnualRent >= 35000 & AnnualRent < 60000)
    {
        Tax = .30;
    }
    else if (AnnualRent >= 60000 )
    {
        Tax = .45;
    }
    
```

<div>

<div align = "center" >

# OUTPUT 
<div>


<div align = justify>

```c++    
                    // you can see the results in this part 
    cout << "your Annual Tax is : " << (Tax*100) << "%" << endl;
    cout << "your AnnualRent with Tax is : " << (AnnualRent*Tax) << endl;

```
<div>