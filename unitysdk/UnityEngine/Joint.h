#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Rigidbody; }

#define UNITYENGINE_JOINT_GET_CONNECTEDBODY_OFFSET UNITYSDK_OFFSET(0x1ED9D850)
#define UNITYENGINE_JOINT_SET_CONNECTEDANCHOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED9D870)
#define UNITYENGINE_JOINT_SET_CONNECTEDANCHOR_OFFSET UNITYSDK_OFFSET(0x1ED9D860)
#define UNITYENGINE_JOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED9D880)

namespace UnityEngine
{
	inline static constexpr unsigned int Joint_TypeDefinitionIndex = 7798;

	class Joint : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOINT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rigidbody* get_connectedBody()
		{
			return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOINT_GET_CONNECTEDBODY_OFFSET))(this);
		}

		::System::Void set_connectedAnchor(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_JOINT_SET_CONNECTEDANCHOR_OFFSET))(this, value);
		}

		::System::Void set_connectedAnchor_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_JOINT_SET_CONNECTEDANCHOR_INJECTED_OFFSET))(this, value);
		}
	};
}
