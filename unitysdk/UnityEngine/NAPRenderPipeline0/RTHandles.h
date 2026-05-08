#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DepthBits.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MSAASamples.h"
#include "unitysdk/UnityEngine/RenderTextureMemoryless.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/TextureWrapMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandleSystem; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLES_ALLOC_1_OFFSET UNITYSDK_OFFSET(0x1B495BA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLES_ALLOC_2_OFFSET UNITYSDK_OFFSET(0x1B495D30)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLES_ALLOC_OFFSET UNITYSDK_OFFSET(0x1B495A00)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B495980)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B495E70)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLES_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B495F10)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLES_SETHARDWAREDYNAMICRESOLUTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1B495F90)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B496010)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTHandles_TypeDefinitionIndex = 6009;

	class RTHandles : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::RTHandleSystem** StaticGet_s_DefaultInstance()
		{
			return (::UnityEngine::NAPRenderPipeline0::RTHandleSystem**)Il2CppClass::FromTypeDefinitionIndex(RTHandles_TypeDefinitionIndex)->GetStaticField(0x5490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLES__CCTOR_OFFSET))();
		}

		static ::System::Void Dispose()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLES_DISPOSE_OFFSET))();
		}

		static ::UnityEngine::NAPRenderPipeline0::RTHandle* Alloc(::System::Int32 width, ::System::Int32 height, ::System::Int32 slices, ::UnityEngine::NAPRenderPipeline0::DepthBits depthBufferBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, ::System::Boolean enableRandomWrite, ::System::Boolean useMipMap, ::System::Boolean autoGenerateMips, ::System::Boolean isShadowMap, ::System::Int32 anisoLevel, ::System::Single mipMapBias, ::UnityEngine::NAPRenderPipeline0::MSAASamples msaaSamples, ::System::Boolean bindTextureMS, ::System::Boolean useDynamicScale, ::System::Boolean autoApplyDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::System::String* name)
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::UnityEngine::NAPRenderPipeline0::MSAASamples, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLES_ALLOC_OFFSET))(width, height, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS, useDynamicScale, autoApplyDynamicScale, memoryless, name);
		}

		static ::UnityEngine::NAPRenderPipeline0::RTHandle* Alloc_1(::UnityEngine::Vector2 scaleFactor, ::System::Int32 slices, ::UnityEngine::NAPRenderPipeline0::DepthBits depthBufferBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, ::System::Boolean enableRandomWrite, ::System::Boolean useMipMap, ::System::Boolean autoGenerateMips, ::System::Boolean isShadowMap, ::System::Int32 anisoLevel, ::System::Single mipMapBias, ::System::Boolean enableMSAA, ::System::Boolean bindTextureMS, ::System::Boolean useDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::System::String* name)
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::UnityEngine::Vector2, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLES_ALLOC_1_OFFSET))(scaleFactor, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, enableMSAA, bindTextureMS, useDynamicScale, memoryless, name);
		}

		static ::UnityEngine::NAPRenderPipeline0::RTHandle* Alloc_2(::UnityEngine::Texture* tex)
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLES_ALLOC_2_OFFSET))(tex);
		}

		static ::System::Void Initialize(::System::Int32 width, ::System::Int32 height, ::System::Boolean scaledRTsupportsMSAA, ::UnityEngine::NAPRenderPipeline0::MSAASamples scaledRTMSAASamples)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLES_INITIALIZE_OFFSET))(width, height, scaledRTsupportsMSAA, scaledRTMSAASamples);
		}

		static ::System::Void Release(::UnityEngine::NAPRenderPipeline0::RTHandle* rth)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLES_RELEASE_OFFSET))(rth);
		}

		static ::System::Void SetHardwareDynamicResolutionState(::System::Boolean hwDynamicResRequested)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLES_SETHARDWAREDYNAMICRESOLUTIONSTATE_OFFSET))(hwDynamicResRequested);
		}
	};
}
