#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_SERIALIZEPRIVATEVARIABLES__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA1BC20)

namespace UnityEngine
{
	inline static constexpr unsigned int SerializePrivateVariables_TypeDefinitionIndex = 5379;

	class SerializePrivateVariables : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SERIALIZEPRIVATEVARIABLES__CTOR_OFFSET))(this);
		}
	};
}
