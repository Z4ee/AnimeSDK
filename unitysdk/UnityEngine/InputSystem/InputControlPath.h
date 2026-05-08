#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlList_1.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlPath_HumanReadableStringOptions.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlPath_ParsedPathComponent.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlPath_PathComponentType.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlPath_PathParser.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_ControlItem.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/Substring.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_CLEANSLASHES_OFFSET UNITYSDK_OFFSET(0x1A03E0B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_COMBINE_OFFSET UNITYSDK_OFFSET(0x1A03E0E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_CONTROLLAYOUTMATCHESPATHCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A03F750)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_FINDCONTROLLAYOUTRECURSIVE_1_OFFSET UNITYSDK_OFFSET(0x1A03F500)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_FINDCONTROLLAYOUTRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1A03F270)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHESPREFIX_OFFSET UNITYSDK_OFFSET(0x1A03FDF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHESRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1A03FD80)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHES_OFFSET UNITYSDK_OFFSET(0x1A03EAA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHPATHCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A03FF10)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSE_OFFSET UNITYSDK_OFFSET(0x1A0402D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PATHCOMPONENTCANYIELDMULTIPLEMATCHES_OFFSET UNITYSDK_OFFSET(0x1A040230)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_STRINGMATCHES_OFFSET UNITYSDK_OFFSET(0x1A03F930)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TOHUMANREADABLESTRING_1_OFFSET UNITYSDK_OFFSET(0x1A03E240)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TOHUMANREADABLESTRING_OFFSET UNITYSDK_OFFSET(0x1A03E210)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCHILD_OFFSET UNITYSDK_OFFSET(0x1A03FD30)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCONTROLS_1_OFFSET UNITYSDK_OFFSET(0x1A03FCD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCONTROLS_OFFSET UNITYSDK_OFFSET(0x1A03FBC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCONTROL_OFFSET UNITYSDK_OFFSET(0x1A032CA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYGETCONTROLLAYOUT_OFFSET UNITYSDK_OFFSET(0x1A03EEE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYGETDEVICELAYOUT_OFFSET UNITYSDK_OFFSET(0x1A03ED20)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYGETDEVICEUSAGES_OFFSET UNITYSDK_OFFSET(0x1A03EBA0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlPath_TypeDefinitionIndex = 28961;

	class InputControlPath : public ::System::Object
	{
	public:
		// static const ::System::String* Wildcard; // 0x0
		// static const ::System::String* DoubleWildcard; // 0x0
		// static const ::System::Char Separator; // 0x0
		// static const ::System::Char SeparatorReplacement; // 0x0

		static ::System::String* CleanSlashes(::System::String* pathComponent)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_CLEANSLASHES_OFFSET))(pathComponent);
		}

		static ::System::String* Combine(::UnityEngine::InputSystem::InputControl* parent, ::System::String* path)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_COMBINE_OFFSET))(parent, path);
		}

		static ::System::String* ToHumanReadableString(::System::String* path, ::UnityEngine::InputSystem::InputControlPath_HumanReadableStringOptions options, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::InputSystem::InputControlPath_HumanReadableStringOptions, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TOHUMANREADABLESTRING_OFFSET))(path, options, control);
		}

		static ::System::String* ToHumanReadableString_1(::System::String* path, ::System::String*& deviceLayoutName, ::System::String*& controlPath, ::UnityEngine::InputSystem::InputControlPath_HumanReadableStringOptions options, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*&, ::System::String*&, ::UnityEngine::InputSystem::InputControlPath_HumanReadableStringOptions, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TOHUMANREADABLESTRING_1_OFFSET))(path, deviceLayoutName, controlPath, options, control);
		}

		static ::Il2CppArray<::System::String*>* TryGetDeviceUsages(::System::String* path)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYGETDEVICEUSAGES_OFFSET))(path);
		}

		static ::System::String* TryGetDeviceLayout(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYGETDEVICELAYOUT_OFFSET))(path);
		}

		static ::System::String* TryGetControlLayout(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYGETCONTROLLAYOUT_OFFSET))(path);
		}

		static ::System::String* FindControlLayoutRecursive(::UnityEngine::InputSystem::InputControlPath_PathParser& parser, ::System::String* layoutName)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::InputControlPath_PathParser&, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_FINDCONTROLLAYOUTRECURSIVE_OFFSET))(parser, layoutName);
		}

		static ::System::String* FindControlLayoutRecursive_1(::UnityEngine::InputSystem::InputControlPath_PathParser& parser, ::UnityEngine::InputSystem::Layouts::InputControlLayout* layout)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::InputControlPath_PathParser&, ::UnityEngine::InputSystem::Layouts::InputControlLayout*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_FINDCONTROLLAYOUTRECURSIVE_1_OFFSET))(parser, layout);
		}

		static ::System::Boolean ControlLayoutMatchesPathComponent(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem& controlItem, ::UnityEngine::InputSystem::InputControlPath_PathParser& parser)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem&, ::UnityEngine::InputSystem::InputControlPath_PathParser&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_CONTROLLAYOUTMATCHESPATHCOMPONENT_OFFSET))(controlItem, parser);
		}

		static ::System::Boolean StringMatches(::UnityEngine::InputSystem::Utilities::Substring str, ::UnityEngine::InputSystem::Utilities::InternedString matchTo)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::Substring, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_STRINGMATCHES_OFFSET))(str, matchTo);
		}

		static ::UnityEngine::InputSystem::InputControl* TryFindControl(::UnityEngine::InputSystem::InputControl* control, ::System::String* path, ::System::Int32 indexInPath)
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCONTROL_OFFSET))(control, path, indexInPath);
		}

		static ::Il2CppArray<::UnityEngine::InputSystem::InputControl*>* TryFindControls(::UnityEngine::InputSystem::InputControl* control, ::System::String* path, ::System::Int32 indexInPath)
		{
			return ((::Il2CppArray<::UnityEngine::InputSystem::InputControl*>*(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCONTROLS_OFFSET))(control, path, indexInPath);
		}

		static ::System::Int32 TryFindControls_1(::UnityEngine::InputSystem::InputControl* control, ::System::String* path, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>& matches, ::System::Int32 indexInPath)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCONTROLS_1_OFFSET))(control, path, matches, indexInPath);
		}

		static ::UnityEngine::InputSystem::InputControl* TryFindChild(::UnityEngine::InputSystem::InputControl* control, ::System::String* path, ::System::Int32 indexInPath)
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::UnityEngine::InputSystem::InputControl*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_TRYFINDCHILD_OFFSET))(control, path, indexInPath);
		}

		static ::System::Boolean Matches(::System::String* expected, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHES_OFFSET))(expected, control);
		}

		static ::System::Boolean MatchesPrefix(::System::String* expected, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHESPREFIX_OFFSET))(expected, control);
		}

		static ::System::Boolean MatchesRecursive(::UnityEngine::InputSystem::InputControlPath_PathParser& parser, ::UnityEngine::InputSystem::InputControl* currentControl, ::System::Boolean prefixOnly)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::InputControlPath_PathParser&, ::UnityEngine::InputSystem::InputControl*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHESRECURSIVE_OFFSET))(parser, currentControl, prefixOnly);
		}

		static ::System::Boolean MatchPathComponent(::System::String* component, ::System::String* path, ::System::Int32& indexInPath, ::UnityEngine::InputSystem::InputControlPath_PathComponentType componentType, ::System::Int32 startIndexInComponent)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Int32&, ::UnityEngine::InputSystem::InputControlPath_PathComponentType, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_MATCHPATHCOMPONENT_OFFSET))(component, path, indexInPath, componentType, startIndexInComponent);
		}

		static ::System::Boolean PathComponentCanYieldMultipleMatches(::System::String* path, ::System::Int32 indexInPath)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PATHCOMPONENTCANYIELDMULTIPLEMATCHES_OFFSET))(path, indexInPath);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent>* Parse(::System::String* path)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSE_OFFSET))(path);
		}
	};
}
