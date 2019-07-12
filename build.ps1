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
    $d = if ($TreeSitterDebug) { "-d" } else { "" }
    $Parse | ForEach-Object {
        npm run parse $d $_
    }
}
