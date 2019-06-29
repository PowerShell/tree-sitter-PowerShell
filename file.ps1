param(
    [Parameter()]
    [string]
    $Greeting
)

$y = "$Greeting Jim!"
$z = 7,2.34e3ulkb,'banana',[system.collections.generic.dictionary[string, system.datetime][]]

$sb = {
    $y = 7
}

if ($y)
{
    Write-Host "If" -Verbose
} elseif($foo) {
    
} else {
    Write-Host "Else" -Verbose
}

# A comment
$d = @{
    $y = 111; duck = "Hello "
    '7 nice things' = 1,@{}
}

${            } = "asdf"

enum EnumName {
    Foo;
    Bar
}
