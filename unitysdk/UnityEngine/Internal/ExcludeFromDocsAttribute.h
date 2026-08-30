#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_INTERNAL_EXCLUDEFROMDOCSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDF9DE0)

namespace UnityEngine::Internal
{
	inline static constexpr unsigned int ExcludeFromDocsAttribute_TypeDefinitionIndex = 4682;

	class ExcludeFromDocsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_EXCLUDEFROMDOCSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
