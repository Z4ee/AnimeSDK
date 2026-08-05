#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITY_TIMELINE_ODINNEWINITIALIZER_INITODINNEW_OFFSET UNITYSDK_OFFSET(0x1F9964E0)
#define UNITY_TIMELINE_ODINNEWINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9968F0)

inline static constexpr unsigned int Unity_Timeline_OdinNewInitializer_TypeDefinitionIndex = 32745;

class Unity_Timeline_OdinNewInitializer : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_TIMELINE_ODINNEWINITIALIZER__CTOR_OFFSET))(this);
	}

	static ::System::Void InitOdinNew()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_TIMELINE_ODINNEWINITIALIZER_INITODINNEW_OFFSET))();
	}
};
