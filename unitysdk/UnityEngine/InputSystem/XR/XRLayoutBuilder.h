#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceDescription.h"
#include "unitysdk/UnityEngine/InputSystem/XR/FeatureType.h"
#include "unitysdk/UnityEngine/InputSystem/XR/XRFeatureDescriptor.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }
namespace UnityEngine::InputSystem::LowLevel { class InputDeviceExecuteCommandDelegate; }
namespace UnityEngine::InputSystem::XR { class XRDeviceDescriptor; }

#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x19599CF0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_CONVERTPOTENTIALALIASTONAME_OFFSET UNITYSDK_OFFSET(0x19599870)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_GETPARENTCONTROLNAME_OFFSET UNITYSDK_OFFSET(0x19599AE0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_GETSIZEOFFEATURE_OFFSET UNITYSDK_OFFSET(0x19599280)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_ISPOSECONTROL_OFFSET UNITYSDK_OFFSET(0x19599B20)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_ISSUBCONTROL_OFFSET UNITYSDK_OFFSET(0x19599AB0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_ONFINDLAYOUTFORDEVICE_OFFSET UNITYSDK_OFFSET(0x195994D0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_SANITIZESTRING_OFFSET UNITYSDK_OFFSET(0x19599300)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1959B0A0)
#define UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19599860)

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRLayoutBuilder_TypeDefinitionIndex = 29064;

	class XRLayoutBuilder : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::InputSystem::XR::FeatureType>** StaticGet_poseSubControlTypes()
		{
			return (::Il2CppArray<::UnityEngine::InputSystem::XR::FeatureType>**)Il2CppClass::FromTypeDefinitionIndex(XRLayoutBuilder_TypeDefinitionIndex)->GetStaticField(0x226B0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_poseSubControlNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XRLayoutBuilder_TypeDefinitionIndex)->GetStaticField(0x226B8);
		}
		::UnityEngine::InputSystem::XR::XRDeviceDescriptor* descriptor; // 0x10
		::System::String* parentLayout; // 0x18
		::System::String* interfaceName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER__CCTOR_OFFSET))();
		}

		static ::System::UInt32 GetSizeOfFeature(::UnityEngine::InputSystem::XR::XRFeatureDescriptor featureDescriptor)
		{
			return ((::System::UInt32(*)(::UnityEngine::InputSystem::XR::XRFeatureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_GETSIZEOFFEATURE_OFFSET))(featureDescriptor);
		}

		static ::System::String* SanitizeString(::System::String* original, ::System::Boolean allowPaths)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_SANITIZESTRING_OFFSET))(original, allowPaths);
		}

		static ::System::String* OnFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription& description, ::System::String* matchedLayout, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeCommandDelegate)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&, ::System::String*, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_ONFINDLAYOUTFORDEVICE_OFFSET))(description, matchedLayout, executeCommandDelegate);
		}

		static ::System::String* ConvertPotentialAliasToName(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::System::String* nameOrAlias)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_CONVERTPOTENTIALALIASTONAME_OFFSET))(layout, nameOrAlias);
		}

		::System::Boolean IsSubControl(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_ISSUBCONTROL_OFFSET))(this, name);
		}

		::System::String* GetParentControlName(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_GETPARENTCONTROLNAME_OFFSET))(this, name);
		}

		::System::Boolean IsPoseControl(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>* features, ::System::Int32 startIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_ISPOSECONTROL_OFFSET))(this, features, startIndex);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* Build()
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_XR_XRLAYOUTBUILDER_BUILD_OFFSET))(this);
		}
	};
}
