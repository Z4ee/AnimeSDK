#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__ADDLOCKTAB_B__40_1_OFFSET UNITYSDK_OFFSET(0x1DA4DE50)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__ADDLOCKTAB_B__40_3_OFFSET UNITYSDK_OFFSET(0x1DA4DE60)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA4DE00)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4DE40)
#define UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__GETORDEREDENABLEDTABS_B__69_1_OFFSET UNITYSDK_OFFSET(0x1DA4DE70)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITabButtonGroup___c_TypeDefinitionIndex = 56165;

	class UITabButtonGroup___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Int32>** StaticGet___9__40_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UITabButtonGroup___c_TypeDefinitionIndex)->GetStaticField(0x3D4E0);
		}
		static ::System::Action** StaticGet___9__40_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UITabButtonGroup___c_TypeDefinitionIndex)->GetStaticField(0x3D4E8);
		}
		static ::System::Func_2<::UnityEngine::UI::Extension::UITabButton*, ::System::Boolean>** StaticGet___9__69_1()
		{
			return (::System::Func_2<::UnityEngine::UI::Extension::UITabButton*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UITabButtonGroup___c_TypeDefinitionIndex)->GetStaticField(0x3D4F0);
		}
		static ::UnityEngine::UI::Extension::UITabButtonGroup___c** StaticGet___9()
		{
			return (::UnityEngine::UI::Extension::UITabButtonGroup___c**)Il2CppClass::FromTypeDefinitionIndex(UITabButtonGroup___c_TypeDefinitionIndex)->GetStaticField(0x3D4F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__CTOR_OFFSET))(this);
		}

		::System::Void _AddLockTab_b__40_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__ADDLOCKTAB_B__40_1_OFFSET))(this, _);
		}

		::System::Void _AddLockTab_b__40_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__ADDLOCKTAB_B__40_3_OFFSET))(this);
		}

		::System::Boolean _GetOrderedEnabledTabs_b__69_1(::UnityEngine::UI::Extension::UITabButton* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::UITabButton*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABBUTTONGROUP___C__GETORDEREDENABLEDTABS_B__69_1_OFFSET))(this, x);
		}
	};
}
