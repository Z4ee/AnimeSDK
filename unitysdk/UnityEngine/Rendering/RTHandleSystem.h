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

#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOCAUTOSIZEDRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B17F250)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_1_OFFSET UNITYSDK_OFFSET(0x1B17EF40)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_2_OFFSET UNITYSDK_OFFSET(0x1B17F9C0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_3_OFFSET UNITYSDK_OFFSET(0x1B17FB40)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_4_OFFSET UNITYSDK_OFFSET(0x1B17FC40)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET UNITYSDK_OFFSET(0x1B17E8F0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_DEMANDRESIZE_OFFSET UNITYSDK_OFFSET(0x1B17E6A0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B17DC00)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B17DBF0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_DUMPRTINFO_OFFSET UNITYSDK_OFFSET(0x1B17FCF0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_GETMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B17E8E0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_GETMAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1B17E8D0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_GET_RTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B17DA40)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B17DE50)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B17DF40)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B17D830)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_RESIZE_OFFSET UNITYSDK_OFFSET(0x1B17E1C0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_SETHARDWAREDYNAMICRESOLUTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1B17E4C0)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_SETREFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x1B17DF50)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM_SWITCHRESIZEMODE_OFFSET UNITYSDK_OFFSET(0x1B17E580)
#define UNITYENGINE_RENDERING_RTHANDLESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B17DA60)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RTHandleSystem_TypeDefinitionIndex = 33777;

	class RTHandleSystem : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* m_AutoSizedRTs; // 0x10
		::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* m_ResizeOnDemandRTs; // 0x18
		::Il2CppArray<::UnityEngine::Rendering::RTHandle*>* m_AutoSizedRTsArray; // 0x20
		::System::Int32 m_MaxWidths; // 0x28
		::UnityEngine::Rendering::RTHandleProperties m_RTHandleProperties; // 0x2C
		::UnityEngine::Rendering::MSAASamples m_ScaledRTCurrentMSAASamples; // 0x5C
		::System::Boolean m_HardwareDynamicResRequested; // 0x60
		::System::Boolean m_ScaledRTSupportsMSAA; // 0x61
		::System::Int32 m_MaxHeights; // 0x64

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

		::System::Void Initialize(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::UnityEngine::Rendering::MSAASamples a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_INITIALIZE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Release(::UnityEngine::Rendering::RTHandle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_RELEASE_OFFSET))(this, a1);
		}

		::System::Void Remove(::UnityEngine::Rendering::RTHandle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_REMOVE_OFFSET))(this, a1);
		}

		::System::Void SetReferenceSize(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Rendering::MSAASamples a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_SETREFERENCESIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetHardwareDynamicResolutionState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_SETHARDWAREDYNAMICRESOLUTIONSTATE_OFFSET))(this, a1);
		}

		::System::Void SwitchResizeMode(::UnityEngine::Rendering::RTHandle* a1, ::UnityEngine::Rendering::RTHandleSystem_ResizeMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandleSystem_ResizeMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_SWITCHRESIZEMODE_OFFSET))(this, a1, a2);
		}

		::System::Void DemandResize(::UnityEngine::Rendering::RTHandle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_DEMANDRESIZE_OFFSET))(this, a1);
		}

		::System::Int32 GetMaxWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_GETMAXWIDTH_OFFSET))(this);
		}

		::System::Int32 GetMaxHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_GETMAXHEIGHT_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void Resize(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Rendering::MSAASamples a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::MSAASamples, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_RESIZE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Rendering::RTHandle* Alloc(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Rendering::DepthBits a4, ::UnityEngine::Experimental::Rendering::GraphicsFormat a5, ::UnityEngine::FilterMode a6, ::UnityEngine::TextureWrapMode a7, ::UnityEngine::Rendering::TextureDimension a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Boolean a12, ::System::Int32 a13, ::System::Single a14, ::UnityEngine::Rendering::MSAASamples a15, ::System::Boolean a16, ::System::Boolean a17, ::UnityEngine::RenderTextureMemoryless a18, ::System::String* a19)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::UnityEngine::Rendering::MSAASamples, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
		}

		::UnityEngine::Rendering::RTHandle* Alloc_1(::UnityEngine::Vector2 a1, ::System::Int32 a2, ::UnityEngine::Rendering::DepthBits a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::UnityEngine::FilterMode a5, ::UnityEngine::TextureWrapMode a6, ::UnityEngine::Rendering::TextureDimension a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Int32 a12, ::System::Single a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::UnityEngine::RenderTextureMemoryless a17, ::System::String* a18)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
		}

		::UnityEngine::Rendering::RTHandle* Alloc_2(::UnityEngine::Rendering::ScaleFunc* a1, ::System::Int32 a2, ::UnityEngine::Rendering::DepthBits a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::UnityEngine::FilterMode a5, ::UnityEngine::TextureWrapMode a6, ::UnityEngine::Rendering::TextureDimension a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Int32 a12, ::System::Single a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Boolean a16, ::UnityEngine::RenderTextureMemoryless a17, ::System::String* a18)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::PVOID, ::UnityEngine::Rendering::ScaleFunc*, ::System::Int32, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
		}

		::UnityEngine::Rendering::RTHandle* AllocAutoSizedRenderTexture(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Rendering::DepthBits a4, ::UnityEngine::Experimental::Rendering::GraphicsFormat a5, ::UnityEngine::FilterMode a6, ::UnityEngine::TextureWrapMode a7, ::UnityEngine::Rendering::TextureDimension a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Boolean a12, ::System::Int32 a13, ::System::Single a14, ::System::Boolean a15, ::System::Boolean a16, ::System::Boolean a17, ::UnityEngine::RenderTextureMemoryless a18, ::System::String* a19)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::DepthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, ::UnityEngine::Rendering::TextureDimension, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOCAUTOSIZEDRENDERTEXTURE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
		}

		::UnityEngine::Rendering::RTHandle* Alloc_3(::UnityEngine::Texture* a1)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_3_OFFSET))(this, a1);
		}

		static ::UnityEngine::Rendering::RTHandle* Alloc_4(::UnityEngine::Rendering::RTHandle* a1)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::UnityEngine::Rendering::RTHandle*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_ALLOC_4_OFFSET))(a1);
		}

		::System::String* DumpRTInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RTHANDLESYSTEM_DUMPRTINFO_OFFSET))(this);
		}
	};
}
