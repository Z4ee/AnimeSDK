#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYOEMOTION_BLENDSHAPEBIND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D025D90)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int BlendShapeBind_TypeDefinitionIndex = 39988;

	class BlendShapeBind : public ::System::Object
	{
	public:
		::System::String* blendShapeName; // 0x10
		::System::Int32 propertyID; // 0x18

		::System::Void _ctor(::System::String* blendShapeName, ::System::Int32 propertyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_BLENDSHAPEBIND__CTOR_OFFSET))(this, blendShapeName, propertyID);
		}
	};
}
