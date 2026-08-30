#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_MINIMALCRPVERSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED3EA90)

namespace UnityEngine
{
	inline static constexpr unsigned int MinimalCrpVersionAttribute_TypeDefinitionIndex = 4311;

	class MinimalCrpVersionAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Desc_k__BackingField; // 0x10
		::System::Int32 _Version_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MINIMALCRPVERSIONATTRIBUTE__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
