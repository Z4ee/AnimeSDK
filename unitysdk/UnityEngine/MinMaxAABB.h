#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_MINMAXAABB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3AD3E10)
#define UNITYENGINE_MINMAXAABB_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AD3E00)
#define UNITYENGINE_MINMAXAABB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3AD3D20)
#define UNITYENGINE_MINMAXAABB_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x395C120)
#define UNITYENGINE_MINMAXAABB_GET_EXTENTS_OFFSET UNITYSDK_OFFSET(0x3AD3FC0)
#define UNITYENGINE_MINMAXAABB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3AD4000)

namespace UnityEngine
{
	inline static constexpr unsigned int MinMaxAABB_TypeDefinitionIndex = 4246;

	struct alignas(4) MinMaxAABB
	{
		::UnityEngine::Vector3 m_Min; // 0x10
		::UnityEngine::Vector3 m_Max; // 0x1C

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MINMAXAABB_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_MINMAXAABB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::MinMaxAABB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::MinMaxAABB))((::PBYTE)hIl2Cpp + UNITYENGINE_MINMAXAABB_EQUALS_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MINMAXAABB_GET_CENTER_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_extents()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MINMAXAABB_GET_EXTENTS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MINMAXAABB_TOSTRING_OFFSET))(this);
		}
	};
}
