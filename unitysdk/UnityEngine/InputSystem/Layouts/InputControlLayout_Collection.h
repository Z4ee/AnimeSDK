#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_Collection_LayoutMatcher.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_Collection_PrecompiledLayout.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_ADDMATCHER_OFFSET UNITYSDK_OFFSET(0xA52860)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xA52390)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_COMPUTEDISTANCEININHERITANCEHIERARCHY_OFFSET UNITYSDK_OFFSET(0xA525A0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_FINDLAYOUTTHATINTRODUCESCONTROL_OFFSET UNITYSDK_OFFSET(0xA525D0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_GETBASELAYOUTNAME_OFFSET UNITYSDK_OFFSET(0xA52470)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_GETBASELAYOUTS_OFFSET UNITYSDK_OFFSET(0xA52730)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_GETCONTROLTYPEFORLAYOUT_OFFSET UNITYSDK_OFFSET(0xA525F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_GETROOTLAYOUTNAME_OFFSET UNITYSDK_OFFSET(0xA524F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_HASLAYOUT_OFFSET UNITYSDK_OFFSET(0xA52410)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_ISBASEDON_OFFSET UNITYSDK_OFFSET(0xA527C0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_ISGENERATEDLAYOUT_OFFSET UNITYSDK_OFFSET(0xA526A0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_TRYFINDLAYOUTFORTYPE_OFFSET UNITYSDK_OFFSET(0xA523A0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_TRYFINDMATCHINGLAYOUT_OFFSET UNITYSDK_OFFSET(0xA523C0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_TRYLOADLAYOUTINTERNAL_OFFSET UNITYSDK_OFFSET(0xA52430)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_TRYLOADLAYOUT_OFFSET UNITYSDK_OFFSET(0xA52450)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_VALUETYPEISASSIGNABLEFROM_OFFSET UNITYSDK_OFFSET(0xA52610)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_Collection_TypeDefinitionIndex = 31988;

	struct alignas(8) InputControlLayout_Collection
	{
		// static const ::System::Single kBaseScoreForNonGeneratedLayouts; // 0x0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>* layoutTypes; // 0x10
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>* layoutStrings; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>* layoutBuilders; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString>* baseLayoutTable; // 0x28
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::Il2CppArray<::UnityEngine::InputSystem::Utilities::InternedString>*>* layoutOverrides; // 0x30
		::System::Collections::Generic::HashSet_1<::UnityEngine::InputSystem::Utilities::InternedString>* layoutOverrideNames; // 0x38
		::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection_PrecompiledLayout>* precompiledLayouts; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection_LayoutMatcher>* layoutMatchers; // 0x48

		::System::Void Allocate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_ALLOCATE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::InternedString TryFindLayoutForType(::System::Type* layoutType)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_TRYFINDLAYOUTFORTYPE_OFFSET))(this, layoutType);
		}

		/*
		::UnityEngine::InputSystem::Utilities::InternedString TryFindMatchingLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_TRYFINDMATCHINGLAYOUT_OFFSET))(this, deviceDescription);
		}
		*/

		::System::Boolean HasLayout(::UnityEngine::InputSystem::Utilities::InternedString name)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_HASLAYOUT_OFFSET))(this, name);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadLayoutInternal(::UnityEngine::InputSystem::Utilities::InternedString name)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_TRYLOADLAYOUTINTERNAL_OFFSET))(this, name);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadLayout(::UnityEngine::InputSystem::Utilities::InternedString name, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout*>* table)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputControlLayout*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_TRYLOADLAYOUT_OFFSET))(this, name, table);
		}

		::UnityEngine::InputSystem::Utilities::InternedString GetBaseLayoutName(::UnityEngine::InputSystem::Utilities::InternedString layoutName)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_GETBASELAYOUTNAME_OFFSET))(this, layoutName);
		}

		::UnityEngine::InputSystem::Utilities::InternedString GetRootLayoutName(::UnityEngine::InputSystem::Utilities::InternedString layoutName)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_GETROOTLAYOUTNAME_OFFSET))(this, layoutName);
		}

		::System::Boolean ComputeDistanceInInheritanceHierarchy(::UnityEngine::InputSystem::Utilities::InternedString firstLayout, ::UnityEngine::InputSystem::Utilities::InternedString secondLayout, ::System::Int32& distance)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_COMPUTEDISTANCEININHERITANCEHIERARCHY_OFFSET))(this, firstLayout, secondLayout, distance);
		}

		/*
		::UnityEngine::InputSystem::Utilities::InternedString FindLayoutThatIntroducesControl(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache cache)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_FINDLAYOUTTHATINTRODUCESCONTROL_OFFSET))(this, control, cache);
		}
		*/

		::System::Type* GetControlTypeForLayout(::UnityEngine::InputSystem::Utilities::InternedString layoutName)
		{
			return ((::System::Type*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_GETCONTROLTYPEFORLAYOUT_OFFSET))(this, layoutName);
		}

		::System::Boolean ValueTypeIsAssignableFrom(::UnityEngine::InputSystem::Utilities::InternedString layoutName, ::System::Type* valueType)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_VALUETYPEISASSIGNABLEFROM_OFFSET))(this, layoutName, valueType);
		}

		::System::Boolean IsGeneratedLayout(::UnityEngine::InputSystem::Utilities::InternedString layout)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_ISGENERATEDLAYOUT_OFFSET))(this, layout);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>* GetBaseLayouts(::UnityEngine::InputSystem::Utilities::InternedString layout, ::System::Boolean includeSelf)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_GETBASELAYOUTS_OFFSET))(this, layout, includeSelf);
		}

		::System::Boolean IsBasedOn(::UnityEngine::InputSystem::Utilities::InternedString parentLayout, ::UnityEngine::InputSystem::Utilities::InternedString childLayout)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_ISBASEDON_OFFSET))(this, parentLayout, childLayout);
		}

		/*
		::System::Void AddMatcher(::UnityEngine::InputSystem::Utilities::InternedString layout, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_COLLECTION_ADDMATCHER_OFFSET))(this, layout, matcher);
		}
		*/
	};
}
