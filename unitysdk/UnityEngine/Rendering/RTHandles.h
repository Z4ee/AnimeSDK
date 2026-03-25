#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/RenderTextureMemoryless.h"
#include "unitysdk/UnityEngine/Rendering/DepthBits.h"
#include "unitysdk/UnityEngine/Rendering/MSAASamples.h"
#include "unitysdk/UnityEngine/Rendering/RTHandleProperties.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/TextureWrapMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine::Rendering { class RTHandleSystem; }
namespace UnityEngine::Rendering { class ScaleFunc; }

#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_1_OFFSET UNITYSDK_OFFSET(0x188EC1C0)
#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_2_OFFSET UNITYSDK_OFFSET(0x188EC350)
#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_3_OFFSET UNITYSDK_OFFSET(0x188EC540)
#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_4_OFFSET UNITYSDK_OFFSET(0x188EC6C0)
#define UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET UNITYSDK_OFFSET(0x188EC030)
#define UNITYENGINE_RENDERING_RTHANDLES_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x188EBF10)
#define UNITYENGINE_RENDERING_RTHANDLES_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x188EBE90)
#define UNITYENGINE_RENDERING_RTHANDLES_GET_RTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x188EBF90)
#define UNITYENGINE_RENDERING_RTHANDLES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x188EC770)
#define UNITYENGINE_RENDERING_RTHANDLES_RELEASE_OFFSET UNITYSDK_OFFSET(0x188EC810)
#define UNITYENGINE_RENDERING_RTHANDLES_SETHARDWAREDYNAMICRESOLUTIONSTATE_OFFSET UNITYSDK_OFFSET(0x188EC8A0)
#define UNITYENGINE_RENDERING_RTHANDLES_SETREFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x188EC920)
#define UNITYENGINE_RENDERING_RTHANDLES__CCTOR_OFFSET UNITYSDK_OFFSET(0x188EC9B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RTHandles_TypeDefinitionIndex = 27873;

	class RTHandles : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::RTHandleSystem** StaticGet_s_DefaultInstance()
		{
			return (::UnityEngine::Rendering::RTHandleSystem**)Il2CppClass::FromTypeDefinitionIndex(RTHandles_TypeDefinitionIndex)->GetStaticField(0x20320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_maxWidth()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_GET_MAXWIDTH_OFFSET))();
		}

		static ::System::Int32 get_maxHeight()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_GET_MAXHEIGHT_OFFSET))();
		}

		static ::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties()
		{
			return ((::UnityEngine::Rendering::RTHandleProperties(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_GET_RTHANDLEPROPERTIES_OFFSET))();
		}

		static ::UnityEngine::Rendering::RTHandle* Alloc(::System::Int32 width, ::System::Int32 height, ::System::Int32 slices, ::UnityEngine::Rendering::DepthBits depthBufferBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, ::System::Boolean enableRandomWrite, ::System::Boolean useMipMap, ::System::Boolean autoGenerateMips, ::System::Boolean isShadowMap, ::System::Int32 anisoLevel, ::System::Single mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, ::System::Boolean bindTextureMS, ::System::Boolean useDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::System::String* name)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::MSAASamples, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_OFFSET))(width, height, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS, useDynamicScale, memoryless, name);
		}

		static ::UnityEngine::Rendering::RTHandle* Alloc_1(::UnityEngine::Vector2 scaleFactor, ::System::Int32 slices, ::UnityEngine::Rendering::DepthBits depthBufferBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, ::System::Boolean enableRandomWrite, ::System::Boolean useMipMap, ::System::Boolean autoGenerateMips, ::System::Boolean isShadowMap, ::System::Int32 anisoLevel, ::System::Single mipMapBias, ::System::Boolean enableMSAA, ::System::Boolean bindTextureMS, ::System::Boolean useDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::System::String* name)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Vector2, ::System::Int32, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_1_OFFSET))(scaleFactor, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, enableMSAA, bindTextureMS, useDynamicScale, memoryless, name);
		}

		static ::UnityEngine::Rendering::RTHandle* Alloc_2(::UnityEngine::Rendering::ScaleFunc* scaleFunc, ::System::Int32 slices, ::UnityEngine::Rendering::DepthBits depthBufferBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, ::System::Boolean enableRandomWrite, ::System::Boolean useMipMap, ::System::Boolean autoGenerateMips, ::System::Boolean isShadowMap, ::System::Int32 anisoLevel, ::System::Single mipMapBias, ::System::Boolean enableMSAA, ::System::Boolean bindTextureMS, ::System::Boolean useDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::System::String* name)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Rendering::ScaleFunc*, ::System::Int32, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_2_OFFSET))(scaleFunc, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, enableMSAA, bindTextureMS, useDynamicScale, memoryless, name);
		}

		static ::UnityEngine::Rendering::RTHandle* Alloc_3(::UnityEngine::Texture* tex)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_3_OFFSET))(tex);
		}

		static ::UnityEngine::Rendering::RTHandle* Alloc_4(::UnityEngine::Rendering::RTHandle* tex)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_ALLOC_4_OFFSET))(tex);
		}

		static ::System::Void Initialize(::System::Int32 width, ::System::Int32 height, ::System::Boolean scaledRTsupportsMSAA, ::UnityEngine::Rendering::MSAASamples scaledRTMSAASamples)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_INITIALIZE_OFFSET))(width, height, scaledRTsupportsMSAA, scaledRTMSAASamples);
		}

		static ::System::Void Release(::UnityEngine::Rendering::RTHandle* rth)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_RELEASE_OFFSET))(rth);
		}

		static ::System::Void SetHardwareDynamicResolutionState(::System::Boolean hwDynamicResRequested)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_SETHARDWAREDYNAMICRESOLUTIONSTATE_OFFSET))(hwDynamicResRequested);
		}

		static ::System::Void SetReferenceSize(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Rendering::MSAASamples msaaSamples)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLES_SETREFERENCESIZE_OFFSET))(width, height, msaaSamples);
		}
	};
}
