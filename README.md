// Syntax of switch Statement in C

switch(expression)
{
case value1: 
            statement_1;
            break;
case value2: 
            statement_2;
            break;
.
.
.
case value_n: 
            statement_n;
            break;

default: 
         default_statement;
}

////// Rules of Switch Statement:
1. the “case value” must be of “char” and “int” type.
2. There can be one or N number of cases.
3. The values in the case must be unique.
4. Each statement of the case can have a break statement(optional). 
5. The default Statement is also optional.
