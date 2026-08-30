#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/MSAASamples.h"
#include "unitysdk/UnityEngine/Rendering/RTHandleProperties.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class RTHandle; }
namespace UnityEngine::Rendering { class RTHandleSystem; }

#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_ALLOCBUFFER_OFFSET UNITYSDK_OFFSET(0x1EBE1110)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1EBE1A20)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EBE1710)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GETFRAMERT_OFFSET UNITYSDK_OFFSET(0x1EBE1040)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1EBE0FE0)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1EBE0FC0)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GET_RTHANDLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EBE1000)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_RELEASEALL_OFFSET UNITYSDK_OFFSET(0x1EBE1760)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_RELEASEBUFFER_OFFSET UNITYSDK_OFFSET(0x1EBE1310)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_SWAPANDSETREFERENCESIZE_OFFSET UNITYSDK_OFFSET(0x1EBE1410)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_SWAP_OFFSET UNITYSDK_OFFSET(0x1EBE1450)
#define UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE1A70)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BufferedRTHandleSystem_TypeDefinitionIndex = 34909;

	class BufferedRTHandleSystem : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::RTHandleSystem* m_RTHandleSystem; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Rendering::RTHandle*>*>* m_RTHandles; // 0x18
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

		::UnityEngine::Rendering::RTHandle* GetFrameRT(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Rendering::RTHandle*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_GETFRAMERT_OFFSET))(this, a1, a2);
		}

		::System::Void AllocBuffer(::System::Int32 a1, ::System::Func_3<::UnityEngine::Rendering::RTHandleSystem*, ::System::Int32, ::UnityEngine::Rendering::RTHandle*>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_3<::UnityEngine::Rendering::RTHandleSystem*, ::System::Int32, ::UnityEngine::Rendering::RTHandle*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_ALLOCBUFFER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReleaseBuffer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_RELEASEBUFFER_OFFSET))(this, a1);
		}

		::System::Void SwapAndSetReferenceSize(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Rendering::MSAASamples a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::MSAASamples))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_SWAPANDSETREFERENCESIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Swap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_SWAP_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BUFFEREDRTHANDLESYSTEM_DISPOSE_OFFSET))(this, a1);
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
