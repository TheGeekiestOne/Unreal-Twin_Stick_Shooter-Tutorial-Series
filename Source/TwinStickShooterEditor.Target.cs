/*********************************
******                      ******
***        Ayran Olckers       ***
**                              **
**            04/2019           **
******                      ******
**********************************/

using UnrealBuildTool;
using System.Collections.Generic;

public class TwinStickShooterEditorTarget : TargetRules
{
	public TwinStickShooterEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "TwinStickShooter" } );
	}
}
