#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ConfigurableJointMotion.h"
#include "unitysdk/UnityEngine/Joint.h"

#define UNITYENGINE_CONFIGURABLEJOINT_SET_YMOTION_OFFSET UNITYSDK_OFFSET(0x18A9E8D0)

namespace UnityEngine
{
	inline static constexpr unsigned int ConfigurableJoint_TypeDefinitionIndex = 5223;

	class ConfigurableJoint : public ::UnityEngine::Joint
	{
	public:
		::System::Void set_yMotion(::UnityEngine::ConfigurableJointMotion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ConfigurableJointMotion))((::PBYTE)hIl2Cpp + UNITYENGINE_CONFIGURABLEJOINT_SET_YMOTION_OFFSET))(this, value);
		}
	};
}
