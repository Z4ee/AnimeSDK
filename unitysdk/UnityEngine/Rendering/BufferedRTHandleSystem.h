#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/MSAASamples.h"
#include "unitysdk/UnityEngine/Rendering/RTHandleProperties.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine::Rendering { class RTHandleSystem; }

#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_ALLOCBUFFER_OFFSET UNITYSDK_OFFSET(0x188C8790)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x188C9280)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188C8F20)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GETFRAMERT_OFFSET UNITYSDK_OFFSET(0x188C86C0)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x188C8660)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x188C8640)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_RTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x188C8680)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_RELEASEALL_OFFSET UNITYSDK_OFFSET(0x188C8F70)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_RELEASEBUFFER_OFFSET UNITYSDK_OFFSET(0x188C89C0)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_SWAPANDSETREFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x188C8B00)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_SWAP_OFFSET UNITYSDK_OFFSET(0x188C8B40)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x188C92D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BufferedRTHandleSystem_TypeDefinitionIndex = 27865;

	class BufferedRTHandleSystem : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Rendering::RTHandle*>*>* m_RTHandles; // 0x10
		::UnityEngine::Rendering::RTHandleSystem* m_RTHandleSystem; // 0x18
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

		::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties()
		{
			return ((::UnityEngine::Rendering::RTHandleProperties(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_RTHANDLEPROPERTIES_OFFSET))(this);
		}

		::UnityEngine::Rendering::RTHandle* GetFrameRT(::System::Int32 bufferId, ::System::Int32 frameIndex)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GETFRAMERT_OFFSET))(this, bufferId, frameIndex);
		}

		::System::Void AllocBuffer(::System::Int32 bufferId, ::System::Func_3<::UnityEngine::Rendering::RTHandleSystem*, ::System::Int32, ::UnityEngine::Rendering::RTHandle*>* allocator, ::System::Int32 bufferCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_3<::UnityEngine::Rendering::RTHandleSystem*, ::System::Int32, ::UnityEngine::Rendering::RTHandle*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_ALLOCBUFFER_OFFSET))(this, bufferId, allocator, bufferCount);
		}

		::System::Void ReleaseBuffer(::System::Int32 bufferId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_RELEASEBUFFER_OFFSET))(this, bufferId);
		}

		::System::Void SwapAndSetReferenceSize(::System::Int32 width, ::System::Int32 height, ::UnityEngine::Rendering::MSAASamples msaaSamples)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_SWAPANDSETREFERENCESIZE_OFFSET))(this, width, height, msaaSamples);
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
