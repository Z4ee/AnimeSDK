#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define UNITYENGINE_RAY_GETPOINT_OFFSET UNITYSDK_OFFSET(0x3A4FB30)
#define UNITYENGINE_RAY_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x379FAC0)
#define UNITYENGINE_RAY_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x17670)
#define UNITYENGINE_RAY_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x3C64780)
#define UNITYENGINE_RAY_SET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x17490)
#define UNITYENGINE_RAY_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3C64820)
#define UNITYENGINE_RAY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C64810)
#define UNITYENGINE_RAY__CTOR_OFFSET UNITYSDK_OFFSET(0x3C646E0)

namespace UnityEngine
{
	inline static constexpr unsigned int Ray_TypeDefinitionIndex = 4078;

	struct alignas(4) Ray
	{
		::UnityEngine::Vector3 m_Origin; // 0x10
		::UnityEngine::Vector3 m_Direction; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 get_origin()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_GET_ORIGIN_OFFSET))(this);
		}

		::System::Void set_origin(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_SET_ORIGIN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_direction()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_direction(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_SET_DIRECTION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetPoint(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_GETPOINT_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY_TOSTRING_1_OFFSET))(this, a1);
		}
	};
}
