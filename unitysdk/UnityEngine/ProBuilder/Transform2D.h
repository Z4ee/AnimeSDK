#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_TRANSFORM2D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B148D00)
#define UNITYENGINE_PROBUILDER_TRANSFORM2D_TRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x1B148C70)
#define UNITYENGINE_PROBUILDER_TRANSFORM2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B148C60)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Transform2D_TypeDefinitionIndex = 40823;

	class Transform2D : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 position; // 0x10
		::System::Single rotation; // 0x18
		::UnityEngine::Vector2 scale; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector2 a1, ::System::Single a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRANSFORM2D__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 TransformPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRANSFORM2D_TRANSFORMPOINT_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRANSFORM2D_TOSTRING_OFFSET))(this);
		}
	};
}
