#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/TextureSizeMode.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/RenderTextureMemoryless.h"
#include "unitysdk/UnityEngine/Rendering/DepthBits.h"
#include "unitysdk/UnityEngine/Rendering/MSAASamples.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/TextureWrapMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class ScaleFunc; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3A1BD00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC_INITDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x3A1BB60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3A1BCE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3A1BCF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC__CTOR_3_OFFSET UNITYSDK_OFFSET(0x38ACF60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC__CTOR_OFFSET UNITYSDK_OFFSET(0x3A1BCD0)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int TextureDesc_TypeDefinitionIndex = 34028;

	struct alignas(8) TextureDesc
	{
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureSizeMode sizeMode; // 0x10
		::System::Int32 width; // 0x14
		::System::Int32 height; // 0x18
		::System::Int32 slices; // 0x1C
		::UnityEngine::Vector2 scale; // 0x20
		::UnityEngine::Rendering::ScaleFunc* func; // 0x28
		::UnityEngine::Rendering::DepthBits depthBufferBits; // 0x30
		::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat; // 0x34
		::UnityEngine::FilterMode filterMode; // 0x38
		::UnityEngine::TextureWrapMode wrapMode; // 0x3C
		::UnityEngine::Rendering::TextureDimension dimension; // 0x40
		::System::Boolean enableRandomWrite; // 0x44
		::System::Boolean useMipMap; // 0x45
		::System::Boolean autoGenerateMips; // 0x46
		::System::Boolean isShadowMap; // 0x47
		::System::Int32 anisoLevel; // 0x48
		::System::Single mipMapBias; // 0x4C
		::System::Boolean enableMSAA; // 0x50
		::UnityEngine::Rendering::MSAASamples msaaSamples; // 0x54
		::System::Boolean bindTextureMS; // 0x58
		::System::Boolean useDynamicScale; // 0x59
		::UnityEngine::RenderTextureMemoryless memoryless; // 0x5C
		::System::String* name; // 0x60
		::System::Boolean clearBuffer; // 0x68
		::UnityEngine::Color clearColor; // 0x6C

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::UnityEngine::Vector2 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::UnityEngine::Rendering::ScaleFunc* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScaleFunc*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC__CTOR_3_OFFSET))(this, a1);
		}

		::System::Void InitDefaultValues(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC_INITDEFAULTVALUES_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_TEXTUREDESC_GETHASHCODE_OFFSET))(this);
		}
	};
}
