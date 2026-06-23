#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_TEXTURESCALEBIAS_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1BC22E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_TEXTURESCALEBIAS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BC22F70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_TEXTURESCALEBIAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC22FD0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DecalSystem_TextureScaleBias_TypeDefinitionIndex = 26361;

	class DecalSystem_TextureScaleBias : public ::System::Object
	{
	public:
		::UnityEngine::Texture* m_Texture; // 0x10
		::UnityEngine::Vector4 m_ScaleBias; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_TEXTURESCALEBIAS__CTOR_OFFSET))(this);
		}

		::System::Int32 CompareTo(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_TEXTURESCALEBIAS_COMPARETO_OFFSET))(this, obj);
		}

		::System::Void Initialize(::UnityEngine::Texture* texture, ::UnityEngine::Vector4 scaleBias)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECALSYSTEM_TEXTURESCALEBIAS_INITIALIZE_OFFSET))(this, texture, scaleBias);
		}
	};
}
