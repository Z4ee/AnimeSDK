#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x332CF0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int OutlineRendererConfig_TypeDefinitionIndex = 26647;

	struct alignas(8) OutlineRendererConfig
	{
		::UnityEngine::Material* m_Mat; // 0x10
		::System::Int32 m_PassIndex; // 0x18

		::System::Void _ctor(::UnityEngine::Material* mat, ::System::Int32 passIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERCONFIG__CTOR_OFFSET))(this, mat, passIndex);
		}
	};
}
