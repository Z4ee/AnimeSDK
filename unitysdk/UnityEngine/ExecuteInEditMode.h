#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_EXECUTEINEDITMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B294740)

namespace UnityEngine
{
	inline static constexpr unsigned int ExecuteInEditMode_TypeDefinitionIndex = 4289;

	class ExecuteInEditMode : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXECUTEINEDITMODE__CTOR_OFFSET))(this);
		}
	};
}
