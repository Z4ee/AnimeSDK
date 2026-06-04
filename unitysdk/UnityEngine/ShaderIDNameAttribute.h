#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_SHADERIDNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D6880)

namespace UnityEngine
{
	inline static constexpr unsigned int ShaderIDNameAttribute_TypeDefinitionIndex = 4367;

	class ShaderIDNameAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADERIDNAMEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
