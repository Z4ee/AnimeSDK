#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MSAASamples.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTHandleProperties.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandleSystem; }

#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_ALLOCBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA67420)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1CA68130)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CA67CC0)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GETFRAMERT_OFFSET UNITYSDK_OFFSET(0x1CA67300)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1CA672A0)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1CA67280)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_RTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1CA672C0)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_RELEASEALL_OFFSET UNITYSDK_OFFSET(0x1CA67D40)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_RELEASEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CA676A0)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_SWAPANDSETREFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x1CA67820)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_SWAP_OFFSET UNITYSDK_OFFSET(0x1CA678A0)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA681E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BufferedRTHandleSystem_TypeDefinitionIndex = 18719;

	class BufferedRTHandleSystem : public ::System::Object
	{
	public:
		::UnityEngine::NAPRenderPipeline0::RTHandleSystem* m_RTHandleSystem; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::RTHandle*>*>* m_RTHandles; // 0x18
		::System::Boolean m_DisposedValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_maxWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_MAXWIDTH_OFFSET))(this);
		}

		::System::Int32 get_maxHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_MAXHEIGHT_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandleProperties get_rtHandleProperties()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandleProperties(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_RTHANDLEPROPERTIES_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* GetFrameRT(::System::Int32 bufferId, ::System::Int32 frameIndex)
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GETFRAMERT_OFFSET))(this, bufferId, frameIndex);
		}

		::System::Void AllocBuffer(::System::Int32 bufferId, ::System::Func_3<::UnityEngine::NAPRenderPipeline0::RTHandleSystem*, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::RTHandle*>* allocator, ::System::Int32 bufferCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_3<::UnityEngine::NAPRenderPipeline0::RTHandleSystem*, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::RTHandle*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_ALLOCBUFFER_OFFSET))(this, bufferId, allocator, bufferCount);
		}

		::System::Void ReleaseBuffer(::System::Int32 bufferId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_RELEASEBUFFER_OFFSET))(this, bufferId);
		}

		::System::Void SwapAndSetReferenceSize(::System::Int32 width, ::System::Int32 height, ::UnityEngine::NAPRenderPipeline0::MSAASamples msaaSamples)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::NAPRenderPipeline0::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_SWAPANDSETREFERENCESIZE_OFFSET))(this, width, height, msaaSamples);
		}

		::System::Void Swap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_SWAP_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_DISPOSE_1_OFFSET))(this);
		}

		::System::Void ReleaseAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_RELEASEALL_OFFSET))(this);
		}
	};
}
