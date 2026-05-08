#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define UNITYENGINE_RAY_GETPOINT_OFFSET UNITYSDK_OFFSET(0x96F200)
#define UNITYENGINE_RAY_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x3FFA00)
#define UNITYENGINE_RAY_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x2E2760)
#define UNITYENGINE_RAY_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x96F170)
#define UNITYENGINE_RAY_SET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x2E2450)
#define UNITYENGINE_RAY_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x96F240)
#define UNITYENGINE_RAY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x96F230)
#define UNITYENGINE_RAY__CTOR_OFFSET UNITYSDK_OFFSET(0x96F0D0)

namespace UnityEngine
{
	inline static constexpr unsigned int Ray_TypeDefinitionIndex = 5164;

	struct alignas(4) Ray
	{
		::UnityEngine::Vector3 m_Origin; // 0x10
		::UnityEngine::Vector3 m_Direction; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY__CTOR_OFFSET))(this, origin, direction);
		}

		::UnityEngine::Vector3 get_origin()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_GET_ORIGIN_OFFSET))(this);
		}

		::System::Void set_origin(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_SET_ORIGIN_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_direction()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_direction(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_SET_DIRECTION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 GetPoint(::System::Single distance)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_GETPOINT_OFFSET))(this, distance);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_TOSTRING_1_OFFSET))(this, format);
		}
	};
}
