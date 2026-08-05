#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ISubsystem; }
namespace UnityEngine { class IntegratedSubsystem; }

#define UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES_INTERNAL_CLEARMANAGEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x1FC58990)
#define UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES_INTERNAL_GETINSTANCEBYPTR_OFFSET UNITYSDK_OFFSET(0x1FC58E30)
#define UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES_INTERNAL_INITIALIZEMANAGEDINSTANCE_OFFSET UNITYSDK_OFFSET(0x1FC588F0)
#define UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES_INTERNAL_REMOVEINSTANCEBYPTR_OFFSET UNITYSDK_OFFSET(0x1FC58BB0)
#define UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC58FD0)

namespace UnityEngine
{
	inline static constexpr unsigned int Internal_SubsystemInstances_TypeDefinitionIndex = 19175;

	class Internal_SubsystemInstances : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::ISubsystem*>** StaticGet_s_StandaloneSubsystemInstances()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ISubsystem*>**)Il2CppClass::FromTypeDefinitionIndex(Internal_SubsystemInstances_TypeDefinitionIndex)->GetStaticField(0x86A0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::ISubsystem*>** StaticGet_s_IntegratedSubsystemInstances()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ISubsystem*>**)Il2CppClass::FromTypeDefinitionIndex(Internal_SubsystemInstances_TypeDefinitionIndex)->GetStaticField(0x86A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES__CCTOR_OFFSET))();
		}

		static ::System::Void Internal_InitializeManagedInstance(::System::IntPtr ptr, ::UnityEngine::IntegratedSubsystem* inst)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::IntegratedSubsystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES_INTERNAL_INITIALIZEMANAGEDINSTANCE_OFFSET))(ptr, inst);
		}

		static ::System::Void Internal_ClearManagedInstances()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES_INTERNAL_CLEARMANAGEDINSTANCES_OFFSET))();
		}

		static ::System::Void Internal_RemoveInstanceByPtr(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES_INTERNAL_REMOVEINSTANCEBYPTR_OFFSET))(ptr);
		}

		static ::UnityEngine::IntegratedSubsystem* Internal_GetInstanceByPtr(::System::IntPtr ptr)
		{
			return ((::UnityEngine::IntegratedSubsystem*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES_INTERNAL_GETINSTANCEBYPTR_OFFSET))(ptr);
		}
	};
}
