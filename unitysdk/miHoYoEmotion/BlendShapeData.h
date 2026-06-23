#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MIHOYOEMOTION_BLENDSHAPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x92E580)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int BlendShapeData_TypeDefinitionIndex = 39315;

	struct alignas(8) BlendShapeData
	{
		::System::Int32 blendIndex; // 0x10
		::System::String* blendName; // 0x18
		::System::Single value; // 0x20

		::System::Void _ctor(::System::Int32 blendIndex, ::System::String* blendName, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEDATA__CTOR_OFFSET))(this, blendIndex, blendName, value);
		}
	};
}
