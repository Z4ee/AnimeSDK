#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_LODPARAMETERS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x96EAC0)
#define UNITYENGINE_RENDERING_LODPARAMETERS_EQUALS_OFFSET UNITYSDK_OFFSET(0x96EA00)
#define UNITYENGINE_RENDERING_LODPARAMETERS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x96EBE0)
#define UNITYENGINE_RENDERING_LODPARAMETERS_SET_CAMERAPIXELHEIGHT_OFFSET UNITYSDK_OFFSET(0x319040)
#define UNITYENGINE_RENDERING_LODPARAMETERS_SET_CAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x704010)
#define UNITYENGINE_RENDERING_LODPARAMETERS_SET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x5A1FC0)
#define UNITYENGINE_RENDERING_LODPARAMETERS_SET_ISORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0x96E9F0)
#define UNITYENGINE_RENDERING_LODPARAMETERS_SET_ORTHOSIZE_OFFSET UNITYSDK_OFFSET(0x6E8A00)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LODParameters_TypeDefinitionIndex = 6219;

	struct alignas(4) LODParameters
	{
		::System::Int32 m_IsOrthographic; // 0x10
		::UnityEngine::Vector3 m_CameraPosition; // 0x14
		::System::Single m_FieldOfView; // 0x20
		::System::Single m_OrthoSize; // 0x24
		::System::Int32 m_CameraPixelHeight; // 0x28

		::System::Void set_isOrthographic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LODPARAMETERS_SET_ISORTHOGRAPHIC_OFFSET))(this, value);
		}

		::System::Void set_cameraPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LODPARAMETERS_SET_CAMERAPOSITION_OFFSET))(this, value);
		}

		::System::Void set_fieldOfView(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LODPARAMETERS_SET_FIELDOFVIEW_OFFSET))(this, value);
		}

		::System::Void set_orthoSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LODPARAMETERS_SET_ORTHOSIZE_OFFSET))(this, value);
		}

		::System::Void set_cameraPixelHeight(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LODPARAMETERS_SET_CAMERAPIXELHEIGHT_OFFSET))(this, value);
		}

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
