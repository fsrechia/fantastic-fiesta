___________________________________________________________________________________________
Problem #1
___________________________________________________________________________________________

I have a relation ABC.

What are the sequence of commands to determine its structure?

    bq               # start utility
    rel ABC          # select ABC relation
    di               # display structure
    x                # exit


___________________________________________________________________________________________
Problem #2
___________________________________________________________________________________________

I have a relation XYZ.
Its structure is noted below:

XYZ =  { file (B1) of } record
  B1   : integer;     { block number   B1
  Name : Char8;       { B1 name
end;

What are the sequence of commands to read the first and last records of relation XYZ?

    bq               # start utility
    rel XYZ          # select XYZ relation
    rel f            # read the first record
    rel l            # read the last record
    x                # exit the tool


___________________________________________________________________________________________
Problem #3
___________________________________________________________________________________________
Continuing with relation XYZ

What are the sequences of commands to read key value 10 and the next 2 records?

    bq               # start utility
    rel XYZ          # select XYZ relation
    key 10           # select key 10
    re k             # read the record for key 10 specified above
    re n             # read the next record (11)
    re n             # read the next record (12)
    x                # exit the tool