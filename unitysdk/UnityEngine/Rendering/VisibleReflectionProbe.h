#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_VISIBLEREFLECTIONPROBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x388C580)
#define UNITYENGINE_RENDERING_VISIBLEREFLECTIONPROBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x388C540)
#define UNITYENGINE_RENDERING_VISIBLEREFLECTIONPROBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x388C600)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VisibleReflectionProbe_TypeDefinitionIndex = 4761;

	struct alignas(4) VisibleReflectionProbe
	{
		::UnityEngine::Bounds m_Bounds; // 0x10
		::UnityEngine::Matrix4x4 m_LocalToWorldMatrix; // 0x28
		::UnityEngine::Vector4 m_HdrData; // 0x68
		::UnityEngine::Vector3 m_Center; // 0x78
		::System::Single m_BlendDistance; // 0x84
		::System::Int32 m_Importance; // 0x88
		::System::Int32 m_BoxProjection; // 0x8C
		::System::Int32 m_InstanceId; // 0x90
		::System::Int32 m_TextureId; // 0x94

		::System::Boolean Equals(::UnityEngine::Rendering::VisibleReflectionProbe a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::VisibleReflectionProbe))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLEREFLECTIONPROBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLEREFLECTIONPROBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLEREFLECTIONPROBE_GETHASHCODE_OFFSET))(this);
		}
	};
}
