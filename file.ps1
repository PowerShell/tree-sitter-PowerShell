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

# A comment
$d = @{
    $y = 111; duck = "Hello "
    '7 nice things' = 1,@{}
}
