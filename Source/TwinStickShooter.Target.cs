/*********************************
******                      ******
***        Ayran Olckers       ***
**                              **
**            04/2019           **
******                      ******
**********************************/

using UnrealBuildTool;
using System.Collections.Generic;

public class TwinStickShooterTarget : TargetRules
{
	public TwinStickShooterTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "TwinStickShooter" } );
	}
}
