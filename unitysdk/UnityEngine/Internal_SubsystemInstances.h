#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ISubsystem; }
namespace UnityEngine { class IntegratedSubsystem; }

#define UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES_INTERNAL_CLEARMANAGEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x1D2FF810)
#define UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES_INTERNAL_INITIALIZEMANAGEDINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D2FF710)
#define UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES_INTERNAL_REMOVEINSTANCEBYPTR_OFFSET UNITYSDK_OFFSET(0x1D2FFA20)
#define UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2FFCC0)

namespace UnityEngine
{
	inline static constexpr unsigned int Internal_SubsystemInstances_TypeDefinitionIndex = 5810;

	class Internal_SubsystemInstances : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::ISubsystem*>** StaticGet_s_IntegratedSubsystemInstances()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ISubsystem*>**)Il2CppClass::FromTypeDefinitionIndex(Internal_SubsystemInstances_TypeDefinitionIndex)->GetStaticField(0x450);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::ISubsystem*>** StaticGet_s_StandaloneSubsystemInstances()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ISubsystem*>**)Il2CppClass::FromTypeDefinitionIndex(Internal_SubsystemInstances_TypeDefinitionIndex)->GetStaticField(0x458);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES__CCTOR_OFFSET))();
		}

		static ::System::Void Internal_InitializeManagedInstance(::System::IntPtr a1, ::UnityEngine::IntegratedSubsystem* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::IntegratedSubsystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES_INTERNAL_INITIALIZEMANAGEDINSTANCE_OFFSET))(a1, a2);
		}

		static ::System::Void Internal_ClearManagedInstances()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES_INTERNAL_CLEARMANAGEDINSTANCES_OFFSET))();
		}

		static ::System::Void Internal_RemoveInstanceByPtr(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMINSTANCES_INTERNAL_REMOVEINSTANCEBYPTR_OFFSET))(a1);
		}
	};
}
