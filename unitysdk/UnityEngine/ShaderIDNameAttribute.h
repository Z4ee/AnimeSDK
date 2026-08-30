#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_SHADERIDNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED64CC0)

namespace UnityEngine
{
	inline static constexpr unsigned int ShaderIDNameAttribute_TypeDefinitionIndex = 4382;

	class ShaderIDNameAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERIDNAMEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
