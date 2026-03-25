#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_SORTINGLAYERRANGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x211AD40)
#define UNITYENGINE_RENDERING_SORTINGLAYERRANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x211AD20)
#define UNITYENGINE_RENDERING_SORTINGLAYERRANGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_RENDERING_SORTINGLAYERRANGE_GET_ALL_OFFSET UNITYSDK_OFFSET(0x18A453C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SortingLayerRange_TypeDefinitionIndex = 4576;

	struct alignas(2) SortingLayerRange
	{
		::System::Int16 m_LowerBound; // 0x10
		::System::Int16 m_UpperBound; // 0x12

		static ::UnityEngine::Rendering::SortingLayerRange get_all()
		{
			return ((::UnityEngine::Rendering::SortingLayerRange(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGLAYERRANGE_GET_ALL_OFFSET))();
		}

		::System::Boolean Equals(::UnityEngine::Rendering::SortingLayerRange other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::SortingLayerRange))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGLAYERRANGE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGLAYERRANGE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SORTINGLAYERRANGE_GETHASHCODE_OFFSET))(this);
		}
	};
}
