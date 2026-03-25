#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_DISTANCERANGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2117ED0)
#define UNITYENGINE_RENDERING_DISTANCERANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x20FC700)
#define UNITYENGINE_RENDERING_DISTANCERANGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20F7A60)
#define UNITYENGINE_RENDERING_DISTANCERANGE_GET_ALL_OFFSET UNITYSDK_OFFSET(0x18A43C10)
#define UNITYENGINE_RENDERING_DISTANCERANGE_GET_LOWERBOUND_OFFSET UNITYSDK_OFFSET(0xCC60)
#define UNITYENGINE_RENDERING_DISTANCERANGE_GET_UPPERBOUND_OFFSET UNITYSDK_OFFSET(0xCC80)
#define UNITYENGINE_RENDERING_DISTANCERANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x2117E80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DistanceRange_TypeDefinitionIndex = 4557;

	struct alignas(4) DistanceRange
	{
		::System::Single m_LowerBound; // 0x10
		::System::Single m_UpperBound; // 0x14

		::System::Void _ctor(::System::Single lowerBound, ::System::Single upperBound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISTANCERANGE__CTOR_OFFSET))(this, lowerBound, upperBound);
		}

		static ::UnityEngine::Rendering::DistanceRange get_all()
		{
			return ((::UnityEngine::Rendering::DistanceRange(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISTANCERANGE_GET_ALL_OFFSET))();
		}

		::System::Single get_lowerBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISTANCERANGE_GET_LOWERBOUND_OFFSET))(this);
		}

		::System::Single get_upperBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISTANCERANGE_GET_UPPERBOUND_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::DistanceRange other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::DistanceRange))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISTANCERANGE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISTANCERANGE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISTANCERANGE_GETHASHCODE_OFFSET))(this);
		}
	};
}
