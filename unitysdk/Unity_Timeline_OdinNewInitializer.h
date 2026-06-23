#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITY_TIMELINE_ODINNEWINITIALIZER_INITODINNEW_OFFSET UNITYSDK_OFFSET(0x1E6CDB20)
#define UNITY_TIMELINE_ODINNEWINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CDC70)

inline static constexpr unsigned int Unity_Timeline_OdinNewInitializer_TypeDefinitionIndex = 32117;

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
