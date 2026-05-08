#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYOEMOTION_ODINNEWINITIALIZER_INITODINNEW_OFFSET UNITYSDK_OFFSET(0x197A1740)
#define MIHOYOEMOTION_ODINNEWINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x197A1910)

inline static constexpr unsigned int miHoYoEmotion_OdinNewInitializer_TypeDefinitionIndex = 37688;

class miHoYoEmotion_OdinNewInitializer : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ODINNEWINITIALIZER__CTOR_OFFSET))(this);
	}

	static ::System::Void InitOdinNew()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ODINNEWINITIALIZER_INITODINNEW_OFFSET))();
	}
};
