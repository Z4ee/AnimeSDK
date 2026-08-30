#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_SPHERECOLLIDER_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E8FDC70)
#define UNITYENGINE_SPHERECOLLIDER_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1E8FDC20)
#define UNITYENGINE_SPHERECOLLIDER_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1E8FDCA0)
#define UNITYENGINE_SPHERECOLLIDER_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E8FDC90)
#define UNITYENGINE_SPHERECOLLIDER_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x1E8FDC80)
#define UNITYENGINE_SPHERECOLLIDER_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1E8FDCB0)
#define UNITYENGINE_SPHERECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8FDCC0)

namespace UnityEngine
{
	inline static constexpr unsigned int SphereCollider_TypeDefinitionIndex = 5313;

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

		::System::Void set_center(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_SET_CENTER_OFFSET))(this, a1);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_SET_RADIUS_OFFSET))(this, a1);
		}

		::System::Void get_center_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_GET_CENTER_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_center_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPHERECOLLIDER_SET_CENTER_INJECTED_OFFSET))(this, a1);
		}
	};
}
