#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE_GUITARGETATTRIBUTE_GETGUITARGETATTRVALUE_OFFSET UNITYSDK_OFFSET(0x1AED22D0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUITargetAttribute_TypeDefinitionIndex = 5234;

	class GUITargetAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 displayMask; // 0x10

		static ::System::Int32 GetGUITargetAttrValue(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUITARGETATTRIBUTE_GETGUITARGETATTRVALUE_OFFSET))(a1, a2);
		}
	};
}
