#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_CORECAMERAVALUES_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2117C20)
#define UNITYENGINE_RENDERING_CORECAMERAVALUES_EQUALS_OFFSET UNITYSDK_OFFSET(0x20FA460)
#define UNITYENGINE_RENDERING_CORECAMERAVALUES_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2108C30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CoreCameraValues_TypeDefinitionIndex = 4545;

	struct alignas(4) CoreCameraValues
	{
		::System::Int32 filterMode; // 0x10
		::System::UInt32 cullingMask; // 0x14
		::System::Int32 instanceID; // 0x18

		::System::Boolean Equals(::UnityEngine::Rendering::CoreCameraValues other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::CoreCameraValues))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CORECAMERAVALUES_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CORECAMERAVALUES_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CORECAMERAVALUES_GETHASHCODE_OFFSET))(this);
		}
	};
}
