#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_TRANSFORM2D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A2E8E50)
#define UNITYENGINE_PROBUILDER_TRANSFORM2D_TRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x1A2E8DC0)
#define UNITYENGINE_PROBUILDER_TRANSFORM2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E8DB0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Transform2D_TypeDefinitionIndex = 39996;

	class Transform2D : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 scale; // 0x10
		::UnityEngine::Vector2 position; // 0x18
		::System::Single rotation; // 0x20

		::System::Void _ctor(::UnityEngine::Vector2 position, ::System::Single rotation, ::UnityEngine::Vector2 scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRANSFORM2D__CTOR_OFFSET))(this, position, rotation, scale);
		}

		::UnityEngine::Vector2 TransformPoint(::UnityEngine::Vector2 p)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRANSFORM2D_TRANSFORMPOINT_OFFSET))(this, p);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRANSFORM2D_TOSTRING_OFFSET))(this);
		}
	};
}
