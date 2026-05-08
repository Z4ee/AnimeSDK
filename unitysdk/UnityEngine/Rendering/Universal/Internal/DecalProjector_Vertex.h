#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_VERTEX_LERP_OFFSET UNITYSDK_OFFSET(0xF7F4980)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_VERTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x696040)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DecalProjector_Vertex_TypeDefinitionIndex = 30342;

	struct alignas(4) DecalProjector_Vertex
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 normal; // 0x1C
		::UnityEngine::Vector4 tangent; // 0x28
		::UnityEngine::Vector2 uv; // 0x38

		::System::Void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 normal, ::UnityEngine::Vector4 tangent, ::UnityEngine::Vector2 uv)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector4, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_VERTEX__CTOR_OFFSET))(this, position, normal, tangent, uv);
		}

		static ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex Lerp(::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex A, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex B, ::System::Single d)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex(*)(::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex, ::UnityEngine::Rendering::Universal::Internal::DecalProjector_Vertex, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALPROJECTOR_VERTEX_LERP_OFFSET))(A, B, d);
		}
	};
}
