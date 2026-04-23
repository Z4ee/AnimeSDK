#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYCHAN_SPRINGMANAGER_CLASS_1_44494F1EF855DA72__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A60B0)

namespace UnityChan
{
	inline static constexpr unsigned int SpringManager_Class_1_44494F1EF855DA72_TypeDefinitionIndex = 44438;

	class SpringManager_Class_1_44494F1EF855DA72 : public ::System::Object
	{
	public:
		::System::Single Field_1_1; // 0x10
		::System::Single Field_1_0; // 0x14
		::System::Boolean Field_1_3; // 0x18
		::System::Single Field_1_2; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYCHAN_SPRINGMANAGER_CLASS_1_44494F1EF855DA72__CTOR_OFFSET))(this);
		}
	};
}
