param(
    [Parameter()]
    [switch]
    $Test,

    [Parameter()]
    [switch]
    $NoBuild,

    [Parameter()]
    [string[]]
    $Parse,

    [Parameter()]
    [switch]
    $TreeSitterDebug
)

if (!$NoBuild) {
    npm run generate
}

if ($Test) {
    npm test
}

if ($Parse.Count -gt 0) {
    $d = if ($TreeSitterDebug) {
        "parse-debug"
    } else {
        "parse"
    }
    $Parse | ForEach-Object {
        npm run $d $_
    }
}
