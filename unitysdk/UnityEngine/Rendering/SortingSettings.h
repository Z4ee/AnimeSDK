#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/DistanceMetric.h"
#include "unitysdk/UnityEngine/Rendering/SortingCriteria.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_RENDERING_SORTINGSETTINGS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BC40E0)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BC40A0)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BC4160)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS_GET_CRITERIA_OFFSET UNITYSDK_OFFSET(0x3E880)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS_SET_CRITERIA_OFFSET UNITYSDK_OFFSET(0xBF10)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x3BC4080)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SortingSettings_TypeDefinitionIndex = 4769;

	struct alignas(4) SortingSettings
	{
		::UnityEngine::Matrix4x4 m_WorldToCameraMatrix; // 0x10
		::UnityEngine::Vector3 m_CameraPosition; // 0x50
		::UnityEngine::Vector3 m_CustomAxis; // 0x5C
		::UnityEngine::Rendering::SortingCriteria m_Criteria; // 0x68
		::UnityEngine::Rendering::DistanceMetric m_DistanceMetric; // 0x6C
		::UnityEngine::Matrix4x4 m_PreviousVPMatrix; // 0x70
		::UnityEngine::Matrix4x4 m_NonJitteredVPMatrix; // 0xB0
		::UnityEngine::Matrix4x4 m_ProjMatrix; // 0xF0

		::System::Void _ctor(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS__CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::SortingCriteria get_criteria()
		{
			return ((::UnityEngine::Rendering::SortingCriteria(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_GET_CRITERIA_OFFSET))(this);
		}

		::System::Void set_criteria(::UnityEngine::Rendering::SortingCriteria a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::SortingCriteria))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_SET_CRITERIA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::SortingSettings a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::SortingSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_GETHASHCODE_OFFSET))(this);
		}
	};
}
