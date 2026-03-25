#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_EXECUTEINEDITMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A09CD0)

namespace UnityEngine
{
	inline static constexpr unsigned int ExecuteInEditMode_TypeDefinitionIndex = 4113;

	class ExecuteInEditMode : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXECUTEINEDITMODE__CTOR_OFFSET))(this);
		}
	};
}
