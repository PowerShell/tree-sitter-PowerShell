<#
Function Get-Magic{
<#
.SYNOPSIS
Really great function
#>
	Param(
	[Parameter(Position = 1, Mandatory = $true)]
	[ValidateNotNullOrEmpty()]
        [String]$firstParameter
	)
        Test-ValidCommand
}
#>
