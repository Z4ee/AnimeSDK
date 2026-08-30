#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_SORTINGLAYERRANGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BC4010)
#define UNITYENGINE_RENDERING_SORTINGLAYERRANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BC3FF0)
#define UNITYENGINE_RENDERING_SORTINGLAYERRANGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5F00)
#define UNITYENGINE_RENDERING_SORTINGLAYERRANGE_GET_ALL_OFFSET UNITYSDK_OFFSET(0x1ED5BA30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SortingLayerRange_TypeDefinitionIndex = 4767;

	struct alignas(2) SortingLayerRange
	{
		::System::Int16 m_LowerBound; // 0x10
		::System::Int16 m_UpperBound; // 0x12

		static ::UnityEngine::Rendering::SortingLayerRange get_all()
		{
			return ((::UnityEngine::Rendering::SortingLayerRange(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGLAYERRANGE_GET_ALL_OFFSET))();
		}

		::System::Boolean Equals(::UnityEngine::Rendering::SortingLayerRange a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::SortingLayerRange))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGLAYERRANGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGLAYERRANGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGLAYERRANGE_GETHASHCODE_OFFSET))(this);
		}
	};
}
