#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NVIDIA/InitDeviceCmdData.h"

namespace System { class String; }
namespace UnityEngine::NVIDIA { class NativeStr; }
namespace UnityEngine::NVIDIA { template <typename T> class NativeData_1; }

#define UNITYENGINE_NVIDIA_INITDEVICECONTEXT_GETINITCMDPTR_OFFSET UNITYSDK_OFFSET(0x1EFF7C30)
#define UNITYENGINE_NVIDIA_INITDEVICECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFF7910)

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int InitDeviceContext_TypeDefinitionIndex = 5024;

	class InitDeviceContext : public ::System::Object
	{
	public:
		::UnityEngine::NVIDIA::NativeStr* m_ProjectId; // 0x10
		::UnityEngine::NVIDIA::NativeStr* m_EngineVersion; // 0x18
		::UnityEngine::NVIDIA::NativeStr* m_AppDir; // 0x20
		::UnityEngine::NVIDIA::NativeData_1<::UnityEngine::NVIDIA::InitDeviceCmdData>* m_InitData; // 0x28

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_INITDEVICECONTEXT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::IntPtr GetInitCmdPtr()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_INITDEVICECONTEXT_GETINITCMDPTR_OFFSET))(this);
		}
	};
}
