#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DepthBits.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MSAASamples.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTHandleProperties.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTHandleSystem_ResizeMode.h"
#include "unitysdk/UnityEngine/RenderTextureMemoryless.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/TextureWrapMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::NAPRenderPipeline0 { class ScaleFunc; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_ALLOCAUTOSIZEDRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B3A3180)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_ALLOC_1_OFFSET UNITYSDK_OFFSET(0x1B3A2E20)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_ALLOC_2_OFFSET UNITYSDK_OFFSET(0x1B3A3740)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_ALLOC_3_OFFSET UNITYSDK_OFFSET(0x1B3A38B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_ALLOC_OFFSET UNITYSDK_OFFSET(0x1B3A2930)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_DEMANDRESIZE_OFFSET UNITYSDK_OFFSET(0x1B3A2630)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B3A1670)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B3A1660)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_GETMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B3A2000)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_GETMAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3A1FF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_GET_RTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B3A14A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B3A1B10)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B3A1C40)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B3A1D50)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_RESIZE_OFFSET UNITYSDK_OFFSET(0x1B3A2010)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_SETHARDWAREDYNAMICRESOLUTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1B3A2330)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_SETREFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x1B3A1DB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_SWITCHRESIZEMODE_OFFSET UNITYSDK_OFFSET(0x1B3A2500)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A14C0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTHandleSystem_TypeDefinitionIndex = 6006;

	class RTHandleSystem : public ::System::Object
	{
	public:
		::System::Boolean m_HardwareDynamicResRequested; // 0x10
		::System::Boolean m_ScaledRTSupportsMSAA; // 0x11
		::UnityEngine::NAPRenderPipeline0::MSAASamples m_ScaledRTCurrentMSAASamples; // 0x14
		::System::Collections::Generic::HashSet_1<::UnityEngine::NAPRenderPipeline0::RTHandle*>* m_AutoSizedRTs; // 0x18
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>* m_AutoSizedRTsArray; // 0x20
		::System::Collections::Generic::HashSet_1<::UnityEngine::NAPRenderPipeline0::RTHandle*>* m_ResizeOnDemandRTs; // 0x28
		::UnityEngine::NAPRenderPipeline0::RTHandleProperties m_RTHandleProperties; // 0x30
		::System::Int32 m_MaxWidths; // 0x60
		::System::Int32 m_MaxHeights; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM__CTOR_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandleProperties get_rtHandleProperties()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandleProperties(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_GET_RTHANDLEPROPERTIES_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void Initialize(::System::Int32 width, ::System::Int32 height, ::System::Boolean scaledRTsupportsMSAA, ::UnityEngine::NAPRenderPipeline0::MSAASamples scaledRTMSAASamples)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_INITIALIZE_OFFSET))(this, width, height, scaledRTsupportsMSAA, scaledRTMSAASamples);
		}

		::System::Void Release(::UnityEngine::NAPRenderPipeline0::RTHandle* rth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_RELEASE_OFFSET))(this, rth);
		}

		::System::Void Remove(::UnityEngine::NAPRenderPipeline0::RTHandle* rth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_REMOVE_OFFSET))(this, rth);
		}

		::System::Void SetReferenceSize(::System::Int32 width, ::System::Int32 height, ::UnityEngine::NAPRenderPipeline0::MSAASamples msaaSamples)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_SETREFERENCESIZE_OFFSET))(this, width, height, msaaSamples);
		}

		::System::Void SetHardwareDynamicResolutionState(::System::Boolean enableHWDynamicRes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_SETHARDWAREDYNAMICRESOLUTIONSTATE_OFFSET))(this, enableHWDynamicRes);
		}

		::System::Void SwitchResizeMode(::UnityEngine::NAPRenderPipeline0::RTHandle* rth, ::UnityEngine::NAPRenderPipeline0::RTHandleSystem_ResizeMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RTHandle*, ::UnityEngine::NAPRenderPipeline0::RTHandleSystem_ResizeMode))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_SWITCHRESIZEMODE_OFFSET))(this, rth, mode);
		}

		::System::Void DemandResize(::UnityEngine::NAPRenderPipeline0::RTHandle* rth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_DEMANDRESIZE_OFFSET))(this, rth);
		}

		::System::Int32 GetMaxWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_GETMAXWIDTH_OFFSET))(this);
		}

		::System::Int32 GetMaxHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_GETMAXHEIGHT_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Resize(::System::Int32 width, ::System::Int32 height, ::UnityEngine::NAPRenderPipeline0::MSAASamples msaaSamples, ::System::Boolean sizeChanged, ::System::Boolean msaaSampleChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::MSAASamples, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_RESIZE_OFFSET))(this, width, height, msaaSamples, sizeChanged, msaaSampleChanged);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* Alloc(::System::Int32 width, ::System::Int32 height, ::System::Int32 slices, ::UnityEngine::NAPRenderPipeline0::DepthBits depthBufferBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, ::System::Boolean enableRandomWrite, ::System::Boolean useMipMap, ::System::Boolean autoGenerateMips, ::System::Boolean isShadowMap, ::System::Int32 anisoLevel, ::System::Single mipMapBias, ::UnityEngine::NAPRenderPipeline0::MSAASamples msaaSamples, ::System::Boolean bindTextureMS, ::System::Boolean useDynamicScale, ::System::Boolean autoApplyDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::System::String* name)
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::UnityEngine::NAPRenderPipeline0::MSAASamples, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_ALLOC_OFFSET))(this, width, height, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS, useDynamicScale, autoApplyDynamicScale, memoryless, name);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* Alloc_1(::UnityEngine::Vector2 scaleFactor, ::System::Int32 slices, ::UnityEngine::NAPRenderPipeline0::DepthBits depthBufferBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, ::System::Boolean enableRandomWrite, ::System::Boolean useMipMap, ::System::Boolean autoGenerateMips, ::System::Boolean isShadowMap, ::System::Int32 anisoLevel, ::System::Single mipMapBias, ::System::Boolean enableMSAA, ::System::Boolean bindTextureMS, ::System::Boolean useDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::System::String* name)
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_ALLOC_1_OFFSET))(this, scaleFactor, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, enableMSAA, bindTextureMS, useDynamicScale, memoryless, name);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* Alloc_2(::UnityEngine::NAPRenderPipeline0::ScaleFunc* scaleFunc, ::System::Int32 slices, ::UnityEngine::NAPRenderPipeline0::DepthBits depthBufferBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, ::System::Boolean enableRandomWrite, ::System::Boolean useMipMap, ::System::Boolean autoGenerateMips, ::System::Boolean isShadowMap, ::System::Int32 anisoLevel, ::System::Single mipMapBias, ::System::Boolean enableMSAA, ::System::Boolean bindTextureMS, ::System::Boolean useDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::System::String* name)
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::ScaleFunc*, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_ALLOC_2_OFFSET))(this, scaleFunc, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, enableMSAA, bindTextureMS, useDynamicScale, memoryless, name);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* AllocAutoSizedRenderTexture(::System::Int32 width, ::System::Int32 height, ::System::Int32 slices, ::UnityEngine::NAPRenderPipeline0::DepthBits depthBufferBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, ::System::Boolean enableRandomWrite, ::System::Boolean useMipMap, ::System::Boolean autoGenerateMips, ::System::Boolean isShadowMap, ::System::Int32 anisoLevel, ::System::Single mipMapBias, ::System::Boolean enableMSAA, ::System::Boolean bindTextureMS, ::System::Boolean useDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::System::String* name)
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_ALLOCAUTOSIZEDRENDERTEXTURE_OFFSET))(this, width, height, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, enableMSAA, bindTextureMS, useDynamicScale, memoryless, name);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* Alloc_3(::UnityEngine::Texture* texture)
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTHANDLESYSTEM_ALLOC_3_OFFSET))(this, texture);
		}
	};
}
