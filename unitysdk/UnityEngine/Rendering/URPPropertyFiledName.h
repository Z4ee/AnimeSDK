#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_URPPROPERTYFILEDNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D0A40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int URPPropertyFiledName_TypeDefinitionIndex = 26239;

	class URPPropertyFiledName : public ::System::Attribute
	{
	public:
		::System::String* FiledName; // 0x10
		::System::String* Tips; // 0x18

		::System::Void _ctor(::System::String* text, ::System::String* tips)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_URPPROPERTYFILEDNAME__CTOR_OFFSET))(this, text, tips);
		}
	};
}
