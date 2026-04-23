#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ISubsystemDescriptor; }

#define UNITYENGINE_INTEGRATEDSUBSYSTEM_SETHANDLE_OFFSET UNITYSDK_OFFSET(0x1A4F3CC0)
#define UNITYENGINE_INTEGRATEDSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F3CD0)

namespace UnityEngine
{
	inline static constexpr unsigned int IntegratedSubsystem_TypeDefinitionIndex = 5532;

	class IntegratedSubsystem : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::UnityEngine::ISubsystemDescriptor* m_subsystemDescriptor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTEGRATEDSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void SetHandle(::UnityEngine::IntegratedSubsystem* inst)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::IntegratedSubsystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_INTEGRATEDSUBSYSTEM_SETHANDLE_OFFSET))(this, inst);
		}
	};
}
