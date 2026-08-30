#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_DISTANCERANGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BFED90)
#define UNITYENGINE_RENDERING_DISTANCERANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BFED60)
#define UNITYENGINE_RENDERING_DISTANCERANGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3A54FC0)
#define UNITYENGINE_RENDERING_DISTANCERANGE_GET_ALL_OFFSET UNITYSDK_OFFSET(0x1DCD0780)
#define UNITYENGINE_RENDERING_DISTANCERANGE_GET_LOWERBOUND_OFFSET UNITYSDK_OFFSET(0x213E0)
#define UNITYENGINE_RENDERING_DISTANCERANGE_GET_UPPERBOUND_OFFSET UNITYSDK_OFFSET(0x784700)
#define UNITYENGINE_RENDERING_DISTANCERANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x3BFED10)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DistanceRange_TypeDefinitionIndex = 4748;

	struct alignas(4) DistanceRange
	{
		::System::Single m_LowerBound; // 0x10
		::System::Single m_UpperBound; // 0x14

		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISTANCERANGE__CTOR_OFFSET))(this, a1, a2);
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

		::System::Boolean Equals(::UnityEngine::Rendering::DistanceRange a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::DistanceRange))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISTANCERANGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISTANCERANGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISTANCERANGE_GETHASHCODE_OFFSET))(this);
		}
	};
}
