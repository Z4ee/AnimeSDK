#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CullingAllocationInfo.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_CULLINGRESULTS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BFEBD0)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BFEB70)
#define UNITYENGINE_RENDERING_CULLINGRESULTS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x126C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CullingResults_TypeDefinitionIndex = 4745;

	struct alignas(8) CullingResults
	{
		::System::IntPtr ptr; // 0x10
		::UnityEngine::Rendering::CullingAllocationInfo* m_AllocationInfo; // 0x18

		::System::Boolean Equals(::UnityEngine::Rendering::CullingResults a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::CullingResults))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CULLINGRESULTS_GETHASHCODE_OFFSET))(this);
		}
	};
}
