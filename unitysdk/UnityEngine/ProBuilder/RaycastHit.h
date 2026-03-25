#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_PROBUILDER_RAYCASTHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x18881860)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int RaycastHit_TypeDefinitionIndex = 34151;

	class RaycastHit : public ::System::Object
	{
	public:
		::System::Int32 face; // 0x10
		::UnityEngine::Vector3 normal; // 0x14
		::UnityEngine::Vector3 point; // 0x20
		::System::Single distance; // 0x2C

		::System::Void _ctor(::System::Single distance, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal, ::System::Int32 face)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_RAYCASTHIT__CTOR_OFFSET))(this, distance, point, normal, face);
		}
	};
}
