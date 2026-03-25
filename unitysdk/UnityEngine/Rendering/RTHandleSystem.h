#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/RenderTextureMemoryless.h"
#include "unitysdk/UnityEngine/Rendering/DepthBits.h"
#include "unitysdk/UnityEngine/Rendering/MSAASamples.h"
#include "unitysdk/UnityEngine/Rendering/RTHandleProperties.h"
#include "unitysdk/UnityEngine/Rendering/RTHandleSystem_ResizeMode.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/TextureWrapMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine::Rendering { class ScaleFunc; }

#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOCAUTOSIZEDRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x188EAF00)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_1_OFFSET UNITYSDK_OFFSET(0x188EAC00)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_2_OFFSET UNITYSDK_OFFSET(0x188EB6B0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_3_OFFSET UNITYSDK_OFFSET(0x188EB830)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_4_OFFSET UNITYSDK_OFFSET(0x188EB940)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET UNITYSDK_OFFSET(0x188EA5C0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_DEMANDRESIZE_OFFSET UNITYSDK_OFFSET(0x188EA380)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x188E97E0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188E97D0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_DUMPRTINFO_OFFSET UNITYSDK_OFFSET(0x188EB9F0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_GETMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x188EA5B0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_GETMAXWIDTH_OFFSET UNITYSDK_OFFSET(0x188EA5A0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_GET_RTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x188E9620)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x188E9AB0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_RELEASE_OFFSET UNITYSDK_OFFSET(0x188E9BA0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_REMOVE_OFFSET UNITYSDK_OFFSET(0x188E9140)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_RESIZE_OFFSET UNITYSDK_OFFSET(0x188E9E20)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_SETHARDWAREDYNAMICRESOLUTIONSTATE_OFFSET UNITYSDK_OFFSET(0x188EA190)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_SETREFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x188E9BB0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_SWITCHRESIZEMODE_OFFSET UNITYSDK_OFFSET(0x188EA260)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x188E9640)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RTHandleSystem_TypeDefinitionIndex = 27871;

	class RTHandleSystem : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Rendering::RTHandle*>* m_AutoSizedRTsArray; // 0x10
		::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* m_ResizeOnDemandRTs; // 0x18
		::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* m_AutoSizedRTs; // 0x20
		::System::Int32 m_MaxHeights; // 0x28
		::System::Int32 m_MaxWidths; // 0x2C
		::UnityEngine::Rendering::RTHandleProperties m_RTHandleProperties; // 0x30
		::UnityEngine::Rendering::MSAASamples m_ScaledRTCurrentMSAASamples; // 0x60
		::System::Boolean m_HardwareDynamicResRequested; // 0x64
		::System::Boolean m_ScaledRTSupportsMSAA; // 0x65

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties()
		{
			return ((::UnityEngine::Rendering::RTHandleProperties(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_GET_RTHANDLEPROPERTIES_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void Initialize(::System::Int32 width, ::System::Int32 height, ::System::Boolean scaledRTsupportsMSAA, ::UnityEngine::Rendering::MSAASamples scaledRTMSAASamples)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_INITIALIZE_OFFSET))(this, width, height, scaledRTsupportsMSAA, scaledRTMSAASamples);
		}

		::System::Void Release(::UnityEngine::Rendering::RTHandle* rth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_RELEASE_OFFSET))(this, rth);
		}

		::System::Void Remove(::UnityEngine::Rendering::RTHandle* rth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_REMOVE_OFFSET))(this, rth);
		}

		::System::Void SetReferenceSize(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Rendering::MSAASamples msaaSamples)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_SETREFERENCESIZE_OFFSET))(this, width, height, msaaSamples);
		}

		::System::Void SetHardwareDynamicResolutionState(::System::Boolean enableHWDynamicRes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_SETHARDWAREDYNAMICRESOLUTIONSTATE_OFFSET))(this, enableHWDynamicRes);
		}

		::System::Void SwitchResizeMode(::UnityEngine::Rendering::RTHandle* rth, ::UnityEngine::Rendering::RTHandleSystem_ResizeMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandleSystem_ResizeMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_SWITCHRESIZEMODE_OFFSET))(this, rth, mode);
		}

		::System::Void DemandResize(::UnityEngine::Rendering::RTHandle* rth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_DEMANDRESIZE_OFFSET))(this, rth);
		}

		::System::Int32 GetMaxWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_GETMAXWIDTH_OFFSET))(this);
		}

		::System::Int32 GetMaxHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_GETMAXHEIGHT_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Resize(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Rendering::MSAASamples msaaSamples, ::System::Boolean sizeChanged, ::System::Boolean msaaSampleChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::MSAASamples, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_RESIZE_OFFSET))(this, width, height, msaaSamples, sizeChanged, msaaSampleChanged);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::System::Int32 width, ::System::Int32 height, ::System::Int32 slices, ::UnityEngine::Rendering::DepthBits depthBufferBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, ::System::Boolean enableRandomWrite, ::System::Boolean useMipMap, ::System::Boolean autoGenerateMips, ::System::Boolean isShadowMap, ::System::Int32 anisoLevel, ::System::Single mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, ::System::Boolean bindTextureMS, ::System::Boolean useDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::System::String* name)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::MSAASamples, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET))(this, width, height, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, msaaSamples, bindTextureMS, useDynamicScale, memoryless, name);
		}

		::UnityEngine::Rendering::RTHandle* Alloc_1(::UnityEngine::Vector2 scaleFactor, ::System::Int32 slices, ::UnityEngine::Rendering::DepthBits depthBufferBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, ::System::Boolean enableRandomWrite, ::System::Boolean useMipMap, ::System::Boolean autoGenerateMips, ::System::Boolean isShadowMap, ::System::Int32 anisoLevel, ::System::Single mipMapBias, ::System::Boolean enableMSAA, ::System::Boolean bindTextureMS, ::System::Boolean useDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::System::String* name)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_1_OFFSET))(this, scaleFactor, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, enableMSAA, bindTextureMS, useDynamicScale, memoryless, name);
		}

		::UnityEngine::Rendering::RTHandle* Alloc_2(::UnityEngine::Rendering::ScaleFunc* scaleFunc, ::System::Int32 slices, ::UnityEngine::Rendering::DepthBits depthBufferBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, ::System::Boolean enableRandomWrite, ::System::Boolean useMipMap, ::System::Boolean autoGenerateMips, ::System::Boolean isShadowMap, ::System::Int32 anisoLevel, ::System::Single mipMapBias, ::System::Boolean enableMSAA, ::System::Boolean bindTextureMS, ::System::Boolean useDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::System::String* name)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::PVOID, ::UnityEngine::Rendering::ScaleFunc*, ::System::Int32, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_2_OFFSET))(this, scaleFunc, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, enableMSAA, bindTextureMS, useDynamicScale, memoryless, name);
		}

		::UnityEngine::Rendering::RTHandle* AllocAutoSizedRenderTexture(::System::Int32 width, ::System::Int32 height, ::System::Int32 slices, ::UnityEngine::Rendering::DepthBits depthBufferBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, ::System::Boolean enableRandomWrite, ::System::Boolean useMipMap, ::System::Boolean autoGenerateMips, ::System::Boolean isShadowMap, ::System::Int32 anisoLevel, ::System::Single mipMapBias, ::System::Boolean enableMSAA, ::System::Boolean bindTextureMS, ::System::Boolean useDynamicScale, ::UnityEngine::RenderTextureMemoryless memoryless, ::System::String* name)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOCAUTOSIZEDRENDERTEXTURE_OFFSET))(this, width, height, slices, depthBufferBits, colorFormat, filterMode, wrapMode, dimension, enableRandomWrite, useMipMap, autoGenerateMips, isShadowMap, anisoLevel, mipMapBias, enableMSAA, bindTextureMS, useDynamicScale, memoryless, name);
		}

		::UnityEngine::Rendering::RTHandle* Alloc_3(::UnityEngine::Texture* texture)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_3_OFFSET))(this, texture);
		}

		static ::UnityEngine::Rendering::RTHandle* Alloc_4(::UnityEngine::Rendering::RTHandle* tex)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_4_OFFSET))(tex);
		}

		::System::String* DumpRTInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_DUMPRTINFO_OFFSET))(this);
		}
	};
}
