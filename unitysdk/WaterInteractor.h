#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_8AEBA54B3F639F38;
namespace System { class String; }

#define WATERINTERACTOR_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB9B1EA0)
#define WATERINTERACTOR_TRIGGERWAVE_OFFSET UNITYSDK_OFFSET(0xB9B1E40)
#define WATERINTERACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB9B1EF0)
#define WATERINTERACTOR___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB9B1F20)

inline static constexpr unsigned int WaterInteractor_TypeDefinitionIndex = 44231;

class WaterInteractor : public ::RPG::Client::TAMonoPlugin_1<::Class_3_8AEBA54B3F639F38*>
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

	::System::String* __iFixBaseProxy_GetTickLodTemplateName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WATERINTERACTOR___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
	}
};
