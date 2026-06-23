#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ISubsystemDescriptor; }
namespace UnityEngine { class ISubsystemDescriptorImpl; }
namespace UnityEngine { class SubsystemDescriptor; }

#define UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS_INTERNAL_ADDDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E878910)
#define UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS_INTERNAL_CLEARMANAGEDDESCRIPTORS_OFFSET UNITYSDK_OFFSET(0x1E878B90)
#define UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS_INTERNAL_INITIALIZEMANAGEDDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E878B00)
#define UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E878D40)

namespace UnityEngine
{
	inline static constexpr unsigned int Internal_SubsystemDescriptors_TypeDefinitionIndex = 18836;

	class Internal_SubsystemDescriptors : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::ISubsystemDescriptorImpl*>** StaticGet_s_IntegratedSubsystemDescriptors()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ISubsystemDescriptorImpl*>**)Il2CppClass::FromTypeDefinitionIndex(Internal_SubsystemDescriptors_TypeDefinitionIndex)->GetStaticField(0x8670);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::ISubsystemDescriptor*>** StaticGet_s_StandaloneSubsystemDescriptors()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ISubsystemDescriptor*>**)Il2CppClass::FromTypeDefinitionIndex(Internal_SubsystemDescriptors_TypeDefinitionIndex)->GetStaticField(0x8678);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS__CCTOR_OFFSET))();
		}

		static ::System::Boolean Internal_AddDescriptor(::UnityEngine::SubsystemDescriptor* descriptor)
		{
			return ((::System::Boolean(*)(::UnityEngine::SubsystemDescriptor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS_INTERNAL_ADDDESCRIPTOR_OFFSET))(descriptor);
		}

		static ::System::Void Internal_InitializeManagedDescriptor(::System::IntPtr ptr, ::UnityEngine::ISubsystemDescriptorImpl* desc)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::ISubsystemDescriptorImpl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS_INTERNAL_INITIALIZEMANAGEDDESCRIPTOR_OFFSET))(ptr, desc);
		}

		static ::System::Void Internal_ClearManagedDescriptors()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_SUBSYSTEMDESCRIPTORS_INTERNAL_CLEARMANAGEDDESCRIPTORS_OFFSET))();
		}
	};
}
