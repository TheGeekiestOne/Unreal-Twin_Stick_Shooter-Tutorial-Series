/*********************************
******                      ******
***        Ayran Olckers       ***
**                              **
**            04/2019           **
******                      ******
**********************************/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

UCLASS(Blueprintable)
class TWINSTICKSHOOTER_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()
    
public:
    //Step2: Expose a float property
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="BaseCharacter")
    float Health = 100;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category= "BaseCharacter")
    bool isDead = false;
    
    virtual void CalculateDead();
    
    UFUNCTION(BlueprintCallable, Category="BaseCharacter")
    virtual void CalculateHealth(float delta);
    
#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
    

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
