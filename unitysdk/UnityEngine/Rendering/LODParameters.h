#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_LODPARAMETERS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2118CA0)
#define UNITYENGINE_RENDERING_LODPARAMETERS_EQUALS_OFFSET UNITYSDK_OFFSET(0x2118BE0)
#define UNITYENGINE_RENDERING_LODPARAMETERS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2118DC0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LODParameters_TypeDefinitionIndex = 4562;

	struct alignas(4) LODParameters
	{
		::System::Int32 m_IsOrthographic; // 0x10
		::UnityEngine::Vector3 m_CameraPosition; // 0x14
		::System::Single m_FieldOfView; // 0x20
		::System::Single m_OrthoSize; // 0x24
		::System::Int32 m_CameraPixelHeight; // 0x28

		::System::Boolean Equals(::UnityEngine::Rendering::LODParameters other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::LODParameters))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LODPARAMETERS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LODPARAMETERS_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LODPARAMETERS_GETHASHCODE_OFFSET))(this);
		}
	};
}
