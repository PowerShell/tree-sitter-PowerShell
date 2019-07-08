# PowerShell support for tree-sitter

## Initial goal

Parse the [big test file from EditorSyntax](https://github.com/PowerShell/EditorSyntax/blob/master/examples/TheBigTestFile.ps1) completely.

## TODO

- Add tree-sitter [tests](https://tree-sitter.github.io/tree-sitter/creating-parsers#writing-unit-tests)
- Add support for more syntax:
    + Statements
        * `switch`
        * `filter`
        * `using`
        * `throw`
        * `for`
        * `foreach`
        * `do`/`while`/`until`
        * `exit`/`return`
        * `break`/`continue`
        * `trap`
        * `try`/`catch`/`finally`
        * `data`
        * `workflow`/`parallel`/`sequence`
        * `configuration`
    + Expressions
        * `-not`
        * Unary `-`
        * `-ge`,`-gt`,`-le`,`-lt`,`-eq`,`-ne`,`-ceq`,`-ieq`, etc.
        * `+`,`-`,`*`,`/`,`%`,`-or`,`-and`,`-bor`,`-band`, etc.
        * Element access (`$x[$i]`)
    + Other syntax
        * Labels
        * Better whitespace handling
        * Herestrings
        * `#requires`
        * `#sig`
        * Pipeline redirection and jobs
        * Splatting
        * `&&`/`||`
- Investigate possibility of dynamic keyword support
        

## End goal

90%+ compatibility with the PowerShell parser today.

## Getting started

1. `npm install`
1. `npm start file.ps1`

If you want to just generate the parser, run `npm run generate`.

If you want to just parse a script, run `npm run parse file.ps1`
