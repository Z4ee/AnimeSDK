#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_BATCHPACKEDCULLINGVIEWID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9EA980)
#define UNITYENGINE_RENDERING_BATCHPACKEDCULLINGVIEWID_EQUALS_OFFSET UNITYSDK_OFFSET(0x332D90)
#define UNITYENGINE_RENDERING_BATCHPACKEDCULLINGVIEWID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8B87D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchPackedCullingViewID_TypeDefinitionIndex = 6213;

	struct alignas(8) BatchPackedCullingViewID
	{
		::System::UInt64 handle; // 0x10

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHPACKEDCULLINGVIEWID_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::BatchPackedCullingViewID other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::BatchPackedCullingViewID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHPACKEDCULLINGVIEWID_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHPACKEDCULLINGVIEWID_EQUALS_1_OFFSET))(this, obj);
		}
	};
}
