#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SkillSlot_Active

#include "Basic.hpp"

#include "BP_SkillSlot_Active_classes.hpp"
#include "BP_SkillSlot_Active_parameters.hpp"


namespace SDK
{

// Function BP_SkillSlot_Active.BP_SkillSlot_Active_C.ExecuteUbergraph_BP_SkillSlot_Active
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SkillSlot_Active_C::ExecuteUbergraph_BP_SkillSlot_Active(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillSlot_Active_C", "ExecuteUbergraph_BP_SkillSlot_Active");

	Params::BP_SkillSlot_Active_C_ExecuteUbergraph_BP_SkillSlot_Active Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillSlot_Active.BP_SkillSlot_Active_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SkillSlot_Active_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillSlot_Active_C", "PreConstruct");

	Params::BP_SkillSlot_Active_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillSlot_Active.BP_SkillSlot_Active_C.ApplySkillTypeImpl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       MaskTexture_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSoftObjectPath                  BasicBorderSprite                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSoftObjectPath                  EquipSprite                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                       EquipMaskTexture                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          EquipCustomMaterial                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSoftObjectPath                  DimmedSprite                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSoftObjectPath                  HoverSprite                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                       GradeMask                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SkillSlot_Active_C::ApplySkillTypeImpl(class UTexture2D* MaskTexture_0, const struct FSoftObjectPath& BasicBorderSprite, const struct FSoftObjectPath& EquipSprite, class UTexture2D* EquipMaskTexture, class UObject* EquipCustomMaterial, const struct FSoftObjectPath& DimmedSprite, const struct FSoftObjectPath& HoverSprite, class UTexture2D* GradeMask)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillSlot_Active_C", "ApplySkillTypeImpl");

	Params::BP_SkillSlot_Active_C_ApplySkillTypeImpl Parms{};

	Parms.MaskTexture_0 = MaskTexture_0;
	Parms.BasicBorderSprite = std::move(BasicBorderSprite);
	Parms.EquipSprite = std::move(EquipSprite);
	Parms.EquipMaskTexture = EquipMaskTexture;
	Parms.EquipCustomMaterial = EquipCustomMaterial;
	Parms.DimmedSprite = std::move(DimmedSprite);
	Parms.HoverSprite = std::move(HoverSprite);
	Parms.GradeMask = GradeMask;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillSlot_Active.BP_SkillSlot_Active_C.ApplySkillType
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SkillSlot_Active_C::ApplySkillType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillSlot_Active_C", "ApplySkillType");

	UObject::ProcessEvent(Func, nullptr);
}

}
