#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Rendering/VisibleLightFlags.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_VISIBLELIGHT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x211BA60)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_EQUALS_OFFSET UNITYSDK_OFFSET(0x211BA20)
#define UNITYENGINE_RENDERING_VISIBLELIGHT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x211BAE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VisibleLight_TypeDefinitionIndex = 4583;

	struct alignas(4) VisibleLight
	{
		::UnityEngine::LightType m_LightType; // 0x10
		::UnityEngine::Color m_FinalColor; // 0x14
		::UnityEngine::Rect m_ScreenRect; // 0x24
		::UnityEngine::Matrix4x4 m_LocalToWorldMatrix; // 0x34
		::System::Single m_Range; // 0x74
		::System::Single m_SpotAngle; // 0x78
		::System::Int32 m_InstanceId; // 0x7C
		::UnityEngine::Rendering::VisibleLightFlags m_Flags; // 0x80
		::UnityEngine::Bounds m_AABB; // 0x84

		::System::Boolean Equals(::UnityEngine::Rendering::VisibleLight other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::VisibleLight))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VISIBLELIGHT_GETHASHCODE_OFFSET))(this);
		}
	};
}
