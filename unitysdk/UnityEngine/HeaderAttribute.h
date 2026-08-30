#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

namespace System { class String; }

#define UNITYENGINE_HEADERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDF9BC0)

namespace UnityEngine
{
	inline static constexpr unsigned int HeaderAttribute_TypeDefinitionIndex = 4239;

	class HeaderAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::String* header; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_HEADERATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
