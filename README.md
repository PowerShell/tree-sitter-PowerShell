# PowerShell support for tree-sitter

## Initial goal

Parse the [big test file from EditorSyntax](https://github.com/PowerShell/EditorSyntax/blob/master/examples/TheBigTestFile.ps1) completely.

## End goal

90%+ compatibility with the PowerShell parser today.

## Getting started

1. `npm install`
1. `npm start file.ps1`

If you want to just generate the parser, run `npm run generate`.

If you want to just parse a script, run `npm run parse file.ps1`
