#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_CacheRefInstance.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_ControlItem.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDCHILDCONTROLIFMISSING_OFFSET UNITYSDK_OFFSET(0x9EBE30)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDCHILDCONTROLS_OFFSET UNITYSDK_OFFSET(0x9EBCE0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDCHILDCONTROL_OFFSET UNITYSDK_OFFSET(0x9EBD10)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDPARENTDISPLAYNAMERECURSIVE_OFFSET UNITYSDK_OFFSET(0x1D3C58C0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDPROCESSORS_OFFSET UNITYSDK_OFFSET(0x1D3C4ED0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_APPLYUSESTATEFROM_OFFSET UNITYSDK_OFFSET(0x1D3C3DE0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_CHILDCONTROLOVERRIDEPATH_OFFSET UNITYSDK_OFFSET(0x9EBDC0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_COMPUTESTATELAYOUT_OFFSET UNITYSDK_OFFSET(0x1D3C36B0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EBB10)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_FINALIZECONTROLHIERARCHYRECURSIVE_OFFSET UNITYSDK_OFFSET(0x9EBF50)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_FINALIZECONTROLHIERARCHY_OFFSET UNITYSDK_OFFSET(0x9EBF40)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_FINDORLOADLAYOUT_OFFSET UNITYSDK_OFFSET(0x1D3C25D0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_FINISH_OFFSET UNITYSDK_OFFSET(0x9EBA60)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D3C5D50)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSERTCHILDCONTROLOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9EBDB0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSERTCHILDCONTROL_OFFSET UNITYSDK_OFFSET(0x9EBF00)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSTANTIATELAYOUT_1_OFFSET UNITYSDK_OFFSET(0x9EBCA0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSTANTIATELAYOUT_OFFSET UNITYSDK_OFFSET(0x9EBC50)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_REF_OFFSET UNITYSDK_OFFSET(0x1D3C5D90)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_RESET_OFFSET UNITYSDK_OFFSET(0x9EBBB0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_SETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9EBF30)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_SETFORMAT_OFFSET UNITYSDK_OFFSET(0x1D3C4E40)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_SETUP_OFFSET UNITYSDK_OFFSET(0x9EBA00)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_SHIFTCHILDINDICESINHIERARCHYONEUP_OFFSET UNITYSDK_OFFSET(0x1D3C5550)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputDeviceBuilder_TypeDefinitionIndex = 31997;

	struct alignas(8) InputDeviceBuilder
	{
		static ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder* StaticGet_s_Instance()
		{
			return (::UnityEngine::InputSystem::Layouts::InputDeviceBuilder*)Il2CppClass::FromTypeDefinitionIndex(InputDeviceBuilder_TypeDefinitionIndex)->GetStaticField(0x25FC0);
		}
		static ::System::Int32* StaticGet_s_InstanceRef()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InputDeviceBuilder_TypeDefinitionIndex)->GetStaticField(0x7D20);
		}
		// static const ::System::UInt32 kSizeForControlUsingStateFromOtherControl = 0xFFFFFFFF; // 0x0
		::UnityEngine::InputSystem::InputDevice* m_Device; // 0x10
		::UnityEngine::InputSystem::Layouts::InputControlLayout_CacheRefInstance m_LayoutCacheRef; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* m_ChildControlOverrides; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* m_StateOffsetToControlMap; // 0x28
		::System::Text::StringBuilder* m_StringBuilder; // 0x30

		/*
		::System::Void Setup(::UnityEngine::InputSystem::Utilities::InternedString layout, ::UnityEngine::InputSystem::Utilities::InternedString variants, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_SETUP_OFFSET))(this, layout, variants, deviceDescription);
		}
		*/

		::UnityEngine::InputSystem::InputDevice* Finish()
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_FINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_DISPOSE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_RESET_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::InputControl* InstantiateLayout(::UnityEngine::InputSystem::Utilities::InternedString layout, ::UnityEngine::InputSystem::Utilities::InternedString variants, ::UnityEngine::InputSystem::Utilities::InternedString name, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSTANTIATELAYOUT_OFFSET))(this, layout, variants, name, parent);
		}
		*/

		/*
		::UnityEngine::InputSystem::InputControl* InstantiateLayout_1(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variants, ::UnityEngine::InputSystem::Utilities::InternedString name, ::UnityEngine::InputSystem::InputControl* parent)
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSTANTIATELAYOUT_1_OFFSET))(this, layout, variants, name, parent);
		}
		*/

		/*
		::System::Void AddChildControls(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variants, ::UnityEngine::InputSystem::InputControl* parent, ::System::Boolean& haveChildrenUsingStateFromOtherControls)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDCHILDCONTROLS_OFFSET))(this, layout, variants, parent, haveChildrenUsingStateFromOtherControls);
		}
		*/

		/*
		::UnityEngine::InputSystem::InputControl* AddChildControl(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variants, ::UnityEngine::InputSystem::InputControl* parent, ::System::Boolean& haveChildrenUsingStateFromOtherControls, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem controlItem, ::System::Int32 childIndex, ::System::String* nameOverride)
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*, ::System::Boolean&, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDCHILDCONTROL_OFFSET))(this, layout, variants, parent, haveChildrenUsingStateFromOtherControls, controlItem, childIndex, nameOverride);
		}
		*/

		::System::Void InsertChildControlOverride(::UnityEngine::InputSystem::InputControl* parent, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem& controlItem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSERTCHILDCONTROLOVERRIDE_OFFSET))(this, parent, controlItem);
		}

		/*
		::System::String* ChildControlOverridePath(::UnityEngine::InputSystem::InputControl* parent, ::UnityEngine::InputSystem::Utilities::InternedString controlName)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_CHILDCONTROLOVERRIDEPATH_OFFSET))(this, parent, controlName);
		}
		*/

		/*
		::System::Void AddChildControlIfMissing(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variants, ::UnityEngine::InputSystem::InputControl* parent, ::System::Boolean& haveChildrenUsingStateFromOtherControls, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem& controlItem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*, ::System::Boolean&, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDCHILDCONTROLIFMISSING_OFFSET))(this, layout, variants, parent, haveChildrenUsingStateFromOtherControls, controlItem);
		}
		*/

		/*
		::UnityEngine::InputSystem::InputControl* InsertChildControl(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variant, ::UnityEngine::InputSystem::InputControl* parent, ::System::Boolean& haveChildrenUsingStateFromOtherControls, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem& controlItem)
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*, ::System::Boolean&, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_INSERTCHILDCONTROL_OFFSET))(this, layout, variant, parent, haveChildrenUsingStateFromOtherControls, controlItem);
		}
		*/

		static ::System::Void ApplyUseStateFrom(::UnityEngine::InputSystem::InputControl* parent, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem& controlItem, ::UnityEngine::InputSystem::Layouts::InputControlLayout* layout)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem&, ::UnityEngine::InputSystem::Layouts::InputControlLayout*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_APPLYUSESTATEFROM_OFFSET))(parent, controlItem, layout);
		}

		static ::System::Void ShiftChildIndicesInHierarchyOneUp(::UnityEngine::InputSystem::InputDevice* device, ::System::Int32 startIndex, ::UnityEngine::InputSystem::InputControl* exceptControl)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::System::Int32, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_SHIFTCHILDINDICESINHIERARCHYONEUP_OFFSET))(device, startIndex, exceptControl);
		}

		::System::Void SetDisplayName(::UnityEngine::InputSystem::InputControl* control, ::System::String* longDisplayNameFromLayout, ::System::String* shortDisplayNameFromLayout, ::System::Boolean shortName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_SETDISPLAYNAME_OFFSET))(this, control, longDisplayNameFromLayout, shortDisplayNameFromLayout, shortName);
		}

		static ::System::Void AddParentDisplayNameRecursive(::UnityEngine::InputSystem::InputControl* control, ::System::Text::StringBuilder* stringBuilder, ::System::Boolean shortName)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::System::Text::StringBuilder*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDPARENTDISPLAYNAMERECURSIVE_OFFSET))(control, stringBuilder, shortName);
		}

		static ::System::Void AddProcessors(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem& controlItem, ::System::String* layoutName)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem&, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_ADDPROCESSORS_OFFSET))(control, controlItem, layoutName);
		}

		static ::System::Void SetFormat(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem controlItem)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_SETFORMAT_OFFSET))(control, controlItem);
		}

		static ::UnityEngine::InputSystem::Layouts::InputControlLayout* FindOrLoadLayout(::System::String* name)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_FINDORLOADLAYOUT_OFFSET))(name);
		}

		static ::System::Void ComputeStateLayout(::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_COMPUTESTATELAYOUT_OFFSET))(control);
		}

		::System::Void FinalizeControlHierarchy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_FINALIZECONTROLHIERARCHY_OFFSET))(this);
		}

		::System::Void FinalizeControlHierarchyRecursive(::UnityEngine::InputSystem::InputControl* control, ::System::Int32 controlIndex, ::Il2CppArray<::UnityEngine::InputSystem::InputControl*>* allControls, ::System::Boolean noisy, ::System::Boolean dontReset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::System::Int32, ::Il2CppArray<::UnityEngine::InputSystem::InputControl*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_FINALIZECONTROLHIERARCHYRECURSIVE_OFFSET))(this, control, controlIndex, allControls, noisy, dontReset);
		}

		static ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder& get_instance()
		{
			return ((::UnityEngine::InputSystem::Layouts::InputDeviceBuilder&(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_GET_INSTANCE_OFFSET))();
		}

		/*
		static ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance Ref()
		{
			return ((::UnityEngine::InputSystem::Layouts::InputDeviceBuilder_RefInstance(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEBUILDER_REF_OFFSET))();
		}
		*/
	};
}
