#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x746AC0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int OutlineRendererConfig_TypeDefinitionIndex = 27581;

	struct alignas(8) OutlineRendererConfig
	{
		::UnityEngine::Material* m_Mat; // 0x10
		::System::Int32 m_PassIndex; // 0x18
		::System::Boolean m_AllowDrawWhenInvisible; // 0x1C

		::System::Void _ctor(::UnityEngine::Material* mat, ::System::Int32 passIndex, ::System::Boolean allowDrawWhenInvisible)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERCONFIG__CTOR_OFFSET))(this, mat, passIndex, allowDrawWhenInvisible);
		}
	};
}
