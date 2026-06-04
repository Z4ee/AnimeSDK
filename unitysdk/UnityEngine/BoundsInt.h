#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_BOUNDSINT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x387F8E0)
#define UNITYENGINE_BOUNDSINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x387F850)
#define UNITYENGINE_BOUNDSINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x387F930)
#define UNITYENGINE_BOUNDSINT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x25350)
#define UNITYENGINE_BOUNDSINT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x25370)
#define UNITYENGINE_BOUNDSINT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F70430)
#define UNITYENGINE_BOUNDSINT_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x13E060)
#define UNITYENGINE_BOUNDSINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x387F840)
#define UNITYENGINE_BOUNDSINT__CTOR_OFFSET UNITYSDK_OFFSET(0x25280)

namespace UnityEngine
{
	inline static constexpr unsigned int BoundsInt_TypeDefinitionIndex = 4062;

	struct alignas(4) BoundsInt
	{
		::UnityEngine::Vector3Int m_Position; // 0x10
		::UnityEngine::Vector3Int m_Size; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3Int a1, ::UnityEngine::Vector3Int a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3Int get_position()
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3Int get_size()
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector3Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_SET_SIZE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::BoundsInt a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::BoundsInt))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BOUNDSINT_GETHASHCODE_OFFSET))(this);
		}
	};
}
