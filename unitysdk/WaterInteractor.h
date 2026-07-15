#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_E572CFD9F39A06D6;
namespace System { class String; }

#define WATERINTERACTOR_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x1053C8D0)
#define WATERINTERACTOR_TRIGGERWAVE_OFFSET UNITYSDK_OFFSET(0x1053C870)
#define WATERINTERACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1053C920)

inline static constexpr unsigned int WaterInteractor_TypeDefinitionIndex = 45694;

class WaterInteractor : public ::RPG::Client::TAMonoPlugin_1<::Class_3_E572CFD9F39A06D6*>
{
public:
	::System::Single radius; // 0x30
	::System::Single TriggerTick; // 0x34
	::System::Single timecounter; // 0x38
	::System::Single maxDepth; // 0x3C
	::System::Boolean enableQuasiContinuousCollision; // 0x40
	::System::Int32 maxInteractCount; // 0x44
	::System::Single TirggerRadius; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WATERINTERACTOR__CTOR_OFFSET))(this);
	}

	::System::Void TriggerWave(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WATERINTERACTOR_TRIGGERWAVE_OFFSET))(this, a1);
	}

	::System::String* GetTickLodTemplateName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WATERINTERACTOR_GETTICKLODTEMPLATENAME_OFFSET))(this);
	}
};
