#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/NameAndParameters.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/NamedValue.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD813A0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD813E0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__FROMCONTROLITEMS_B__25_0_OFFSET UNITYSDK_OFFSET(0x1DD81430)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__FROMCONTROLITEMS_B__25_1_OFFSET UNITYSDK_OFFSET(0x1DD814C0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__FROMCONTROLITEMS_B__25_2_OFFSET UNITYSDK_OFFSET(0x1DD814D0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__FROMCONTROLITEMS_B__25_3_OFFSET UNITYSDK_OFFSET(0x1DD814F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__TOLAYOUT_B__24_0_OFFSET UNITYSDK_OFFSET(0x1DD813F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__TOLAYOUT_B__24_1_OFFSET UNITYSDK_OFFSET(0x1DD81410)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_ControlItemJson___c_TypeDefinitionIndex = 31987;

	class InputControlLayout_ControlItemJson___c : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson___c**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_ControlItemJson___c_TypeDefinitionIndex)->GetStaticField(0x25C50);
		}
		static ::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_ControlItemJson___c_TypeDefinitionIndex)->GetStaticField(0x25C58);
		}
		static ::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_ControlItemJson___c_TypeDefinitionIndex)->GetStaticField(0x25C60);
		}
		static ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::System::String*>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_ControlItemJson___c_TypeDefinitionIndex)->GetStaticField(0x25C68);
		}
		static ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>** StaticGet___9__25_2()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_ControlItemJson___c_TypeDefinitionIndex)->GetStaticField(0x25C70);
		}
		static ::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::System::String*>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Utilities::NameAndParameters, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_ControlItemJson___c_TypeDefinitionIndex)->GetStaticField(0x25C78);
		}
		static ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>** StaticGet___9__25_3()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_ControlItemJson___c_TypeDefinitionIndex)->GetStaticField(0x25C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__24_0(::System::String* x)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__TOLAYOUT_B__24_0_OFFSET))(this, x);
		}

		::UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__24_1(::System::String* x)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__TOLAYOUT_B__24_1_OFFSET))(this, x);
		}

		::System::String* _FromControlItems_b__25_0(::UnityEngine::InputSystem::Utilities::NamedValue x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::NamedValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__FROMCONTROLITEMS_B__25_0_OFFSET))(this, x);
		}

		::System::String* _FromControlItems_b__25_1(::UnityEngine::InputSystem::Utilities::NameAndParameters x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::NameAndParameters))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__FROMCONTROLITEMS_B__25_1_OFFSET))(this, x);
		}

		::System::String* _FromControlItems_b__25_2(::UnityEngine::InputSystem::Utilities::InternedString x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__FROMCONTROLITEMS_B__25_2_OFFSET))(this, x);
		}

		::System::String* _FromControlItems_b__25_3(::UnityEngine::InputSystem::Utilities::InternedString x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON___C__FROMCONTROLITEMS_B__25_3_OFFSET))(this, x);
		}
	};
}
