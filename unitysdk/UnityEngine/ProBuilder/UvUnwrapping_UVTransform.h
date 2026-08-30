#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_UVUNWRAPPING_UVTRANSFORM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BAEF40)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int UvUnwrapping_UVTransform_TypeDefinitionIndex = 43255;

	struct alignas(4) UvUnwrapping_UVTransform
	{
		::UnityEngine::Vector2 translation; // 0x10
		::System::Single rotation; // 0x18
		::UnityEngine::Vector2 scale; // 0x1C

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_UVUNWRAPPING_UVTRANSFORM_TOSTRING_OFFSET))(this);
		}
	};
}
