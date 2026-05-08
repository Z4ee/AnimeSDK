#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_OCCLUSIONAREA_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B0C5570)
#define UNITYENGINE_OCCLUSIONAREA_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1B0C5520)
#define UNITYENGINE_OCCLUSIONAREA_GET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B0C55F0)
#define UNITYENGINE_OCCLUSIONAREA_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1B0C55A0)
#define UNITYENGINE_OCCLUSIONAREA_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B0C5590)
#define UNITYENGINE_OCCLUSIONAREA_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x1B0C5580)
#define UNITYENGINE_OCCLUSIONAREA_SET_SIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B0C5610)
#define UNITYENGINE_OCCLUSIONAREA_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1B0C5600)
#define UNITYENGINE_OCCLUSIONAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C5620)

namespace UnityEngine
{
	inline static constexpr unsigned int OcclusionArea_TypeDefinitionIndex = 5204;

	class OcclusionArea : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OCCLUSIONAREA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OCCLUSIONAREA_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_center(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_OCCLUSIONAREA_SET_CENTER_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OCCLUSIONAREA_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_OCCLUSIONAREA_SET_SIZE_OFFSET))(this, value);
		}

		::System::Void get_center_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_OCCLUSIONAREA_GET_CENTER_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_center_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_OCCLUSIONAREA_SET_CENTER_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_size_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_OCCLUSIONAREA_GET_SIZE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_size_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_OCCLUSIONAREA_SET_SIZE_INJECTED_OFFSET))(this, value);
		}
	};
}
