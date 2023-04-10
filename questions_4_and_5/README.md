# Running unit tests

    make clean; make test ; ./test

# Using the program

    make clean ;  make concat_remove_app ; ./concat_remove_app

Then input the following parameters on three different lines through stdin, in order:
1. starting string (s)
2. target string (t)
3. maximum operations (k)

Please note that this program does not allow any invalid inputs, so it will return
"no" if any of the inputs are invalid. Also, the program returns:
- error code 1 if there is an issue with the inputs
- error code 2 if the inputs are good, but the string conversion fails for another reason
(e.g. lack of operations)