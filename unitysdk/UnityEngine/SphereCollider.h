#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_SPHERECOLLIDER_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BFBC0)
#define UNITYENGINE_SPHERECOLLIDER_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1B7BFB70)
#define UNITYENGINE_SPHERECOLLIDER_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1B7BFBF0)
#define UNITYENGINE_SPHERECOLLIDER_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BFBE0)
#define UNITYENGINE_SPHERECOLLIDER_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x1B7BFBD0)
#define UNITYENGINE_SPHERECOLLIDER_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1B7BFC00)
#define UNITYENGINE_SPHERECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7BFC10)

namespace UnityEngine
{
	inline static constexpr unsigned int SphereCollider_TypeDefinitionIndex = 7673;

	class SphereCollider : public ::UnityEngine::Collider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_center(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_SET_CENTER_OFFSET))(this, value);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_SET_RADIUS_OFFSET))(this, value);
		}

		::System::Void get_center_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_GET_CENTER_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_center_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_SET_CENTER_INJECTED_OFFSET))(this, value);
		}
	};
}
