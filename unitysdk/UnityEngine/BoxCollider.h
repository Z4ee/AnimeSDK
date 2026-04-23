#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_BOXCOLLIDER_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D8E40)
#define UNITYENGINE_BOXCOLLIDER_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1A4D8DF0)
#define UNITYENGINE_BOXCOLLIDER_GET_EXTENTS_OFFSET UNITYSDK_OFFSET(0x1A4D8EF0)
#define UNITYENGINE_BOXCOLLIDER_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D8EC0)
#define UNITYENGINE_BOXCOLLIDER_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A4D8E70)
#define UNITYENGINE_BOXCOLLIDER_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D8E60)
#define UNITYENGINE_BOXCOLLIDER_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x1A4D8E50)
#define UNITYENGINE_BOXCOLLIDER_SET_EXTENTS_OFFSET UNITYSDK_OFFSET(0x1A4D8F50)
#define UNITYENGINE_BOXCOLLIDER_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D8EE0)
#define UNITYENGINE_BOXCOLLIDER_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A4D8ED0)
#define UNITYENGINE_BOXCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4D8F80)

namespace UnityEngine
{
	inline static constexpr unsigned int BoxCollider_TypeDefinitionIndex = 5231;

	class BoxCollider : public ::UnityEngine::Collider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_center(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_CENTER_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_SIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_extents()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_EXTENTS_OFFSET))(this);
		}

		::System::Void set_extents(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_EXTENTS_OFFSET))(this, value);
		}

		::System::Void get_center_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_CENTER_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_center_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_CENTER_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_size_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_GET_SIZE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_BOXCOLLIDER_SET_SIZE_INJECTED_OFFSET))(this, value);
		}
	};
}
