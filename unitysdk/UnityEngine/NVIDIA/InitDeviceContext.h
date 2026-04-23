#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NVIDIA/InitDeviceCmdData.h"

namespace System { class String; }
namespace UnityEngine::NVIDIA { class NativeStr; }
namespace UnityEngine::NVIDIA { template <typename T> class NativeData_1; }

#define UNITYENGINE_NVIDIA_INITDEVICECONTEXT_GETINITCMDPTR_OFFSET UNITYSDK_OFFSET(0x1A4C7B60)
#define UNITYENGINE_NVIDIA_INITDEVICECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C7710)

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int InitDeviceContext_TypeDefinitionIndex = 5182;

	class InitDeviceContext : public ::System::Object
	{
	public:
		::UnityEngine::NVIDIA::NativeStr* m_ProjectId; // 0x10
		::UnityEngine::NVIDIA::NativeStr* m_EngineVersion; // 0x18
		::UnityEngine::NVIDIA::NativeStr* m_AppDir; // 0x20
		::UnityEngine::NVIDIA::NativeData_1<::UnityEngine::NVIDIA::InitDeviceCmdData>* m_InitData; // 0x28

		::System::Void _ctor(::System::String* projectId, ::System::String* engineVersion, ::System::String* appDir)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_INITDEVICECONTEXT__CTOR_OFFSET))(this, projectId, engineVersion, appDir);
		}

		::System::IntPtr GetInitCmdPtr()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_INITDEVICECONTEXT_GETINITCMDPTR_OFFSET))(this);
		}
	};
}
