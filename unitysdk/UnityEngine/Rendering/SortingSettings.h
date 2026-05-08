#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/DistanceMetric.h"
#include "unitysdk/UnityEngine/Rendering/SortingCriteria.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_RENDERING_SORTINGSETTINGS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x94B980)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0x94B940)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x94BA00)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS_GET_CRITERIA_OFFSET UNITYSDK_OFFSET(0x871EC0)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS_SET_CRITERIA_OFFSET UNITYSDK_OFFSET(0x870BE0)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS_SET_DISTANCEMETRIC_OFFSET UNITYSDK_OFFSET(0x7166E0)
#define UNITYENGINE_RENDERING_SORTINGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x94B920)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SortingSettings_TypeDefinitionIndex = 6239;

	struct alignas(4) SortingSettings
	{
		::UnityEngine::Matrix4x4 m_WorldToCameraMatrix; // 0x10
		::UnityEngine::Vector3 m_CameraPosition; // 0x50
		::UnityEngine::Vector3 m_CustomAxis; // 0x5C
		::UnityEngine::Rendering::SortingCriteria m_Criteria; // 0x68
		::UnityEngine::Rendering::DistanceMetric m_DistanceMetric; // 0x6C
		::UnityEngine::Matrix4x4 m_PreviousVPMatrix; // 0x70
		::UnityEngine::Matrix4x4 m_NonJitteredVPMatrix; // 0xB0

		::System::Void _ctor(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS__CTOR_OFFSET))(this, camera);
		}

		::UnityEngine::Rendering::SortingCriteria get_criteria()
		{
			return ((::UnityEngine::Rendering::SortingCriteria(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_GET_CRITERIA_OFFSET))(this);
		}

		::System::Void set_criteria(::UnityEngine::Rendering::SortingCriteria value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::SortingCriteria))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_SET_CRITERIA_OFFSET))(this, value);
		}

		::System::Void set_distanceMetric(::UnityEngine::Rendering::DistanceMetric value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DistanceMetric))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_SET_DISTANCEMETRIC_OFFSET))(this, value);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::SortingSettings other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::SortingSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGSETTINGS_GETHASHCODE_OFFSET))(this);
		}
	};
}
