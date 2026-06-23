#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_HUMANPOSE_INIT_OFFSET UNITYSDK_OFFSET(0xA731B0)

namespace UnityEngine
{
	inline static constexpr unsigned int HumanPose_TypeDefinitionIndex = 6642;

	struct alignas(8) HumanPose
	{
		::UnityEngine::Vector3 bodyPosition; // 0x10
		::UnityEngine::Quaternion bodyRotation; // 0x1C
		::Il2CppArray<::System::Single>* muscles; // 0x30

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HUMANPOSE_INIT_OFFSET))(this);
		}
	};
}
