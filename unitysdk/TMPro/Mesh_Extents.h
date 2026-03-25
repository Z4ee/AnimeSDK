#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define TMPRO_MESH_EXTENTS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x210B990)
#define TMPRO_MESH_EXTENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x72D10)

namespace TMPro
{
	inline static constexpr unsigned int Mesh_Extents_TypeDefinitionIndex = 34423;

	struct alignas(4) Mesh_Extents
	{
		::UnityEngine::Vector2 min; // 0x10
		::UnityEngine::Vector2 max; // 0x18

		::System::Void _ctor(::UnityEngine::Vector2 min, ::UnityEngine::Vector2 max)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TMPRO_MESH_EXTENTS__CTOR_OFFSET))(this, min, max);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MESH_EXTENTS_TOSTRING_OFFSET))(this);
		}
	};
}
