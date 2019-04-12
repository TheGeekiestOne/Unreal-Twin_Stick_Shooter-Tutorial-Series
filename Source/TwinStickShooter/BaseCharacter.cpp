/*********************************
******                      ******
***        Ayran Olckers       ***
**                              **
**            04/2019           **
******                      ******
**********************************/

#include "BaseCharacter.h"


// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//Step 1: Implement the CalculateHealth function.
void ABaseCharacter::CalculateHealth(float Delta)
{
    Health += Delta;
    CalculateDead();
}

//Step 2: Implement the CalculateDead function.
void ABaseCharacter::CalculateDead()
{
    if (Health <= 0)
        isDead = true;
    else
        isDead = false;

}
#if WITH_EDITOR
//Step 3: Implement the remainder of our helper code, used by the editor when we change values.
void ABaseCharacter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    isDead = false;
    Health = 100;

    Super::PostEditChangeProperty(PropertyChangedEvent);

    CalculateDead();
}
#endif


