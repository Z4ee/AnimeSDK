#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

namespace System { class String; }

#define UNITYENGINE_INSPECTORNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B29CA20)

namespace UnityEngine
{
	inline static constexpr unsigned int InspectorNameAttribute_TypeDefinitionIndex = 4221;

	class InspectorNameAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::String* displayName; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INSPECTORNAMEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
