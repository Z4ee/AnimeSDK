#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_PROBUILDER_RAYCASTHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B11DF80)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int RaycastHit_TypeDefinitionIndex = 40797;

	class RaycastHit : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 normal; // 0x10
		::UnityEngine::Vector3 point; // 0x1C
		::System::Int32 face; // 0x28
		::System::Single distance; // 0x2C

		::System::Void _ctor(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_RAYCASTHIT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
