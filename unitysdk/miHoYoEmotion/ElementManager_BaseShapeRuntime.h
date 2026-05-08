#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYOEMOTION_ELEMENTMANAGER_BASESHAPERUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1978B380)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ElementManager_BaseShapeRuntime_TypeDefinitionIndex = 37711;

	class ElementManager_BaseShapeRuntime : public ::System::Object
	{
	public:
		::System::String* name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ELEMENTMANAGER_BASESHAPERUNTIME__CTOR_OFFSET))(this);
		}
	};
}
