#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define UNITYENGINE_RAY2D_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x676DC0)
#define UNITYENGINE_RAY2D_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define UNITYENGINE_RAY2D_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x3ACC110)
#define UNITYENGINE_RAY2D_SET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x164FF0)
#define UNITYENGINE_RAY2D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3ACC1A0)

namespace UnityEngine
{
	inline static constexpr unsigned int Ray2D_TypeDefinitionIndex = 4071;

	struct alignas(4) Ray2D
	{
		::UnityEngine::Vector2 m_Origin; // 0x10
		::UnityEngine::Vector2 m_Direction; // 0x18

		::UnityEngine::Vector2 get_origin()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY2D_GET_ORIGIN_OFFSET))(this);
		}

		::System::Void set_origin(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY2D_SET_ORIGIN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_direction()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY2D_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_direction(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY2D_SET_DIRECTION_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAY2D_TOSTRING_OFFSET))(this);
		}
	};
}
