#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE4BB30)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE4BB70)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__REG_CHANGEFOV_SCROLLY_B__68_0_OFFSET UNITYSDK_OFFSET(0x1AE4BD30)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__REG_FOV_TWOPOINTDRAG_B__70_0_OFFSET UNITYSDK_OFFSET(0x1AE4BFB0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__REG_MOVEZPOS_SCROLLY_B__67_0_OFFSET UNITYSDK_OFFSET(0x1AE4BB80)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__REG_MOVEZPOS_TWOPOINTDRAG_B__69_0_OFFSET UNITYSDK_OFFSET(0x1AE4BEE0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgEventTrigger___c_TypeDefinitionIndex = 81045;

	class UIImgEventTrigger___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Boolean>** StaticGet___9__69_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIImgEventTrigger___c_TypeDefinitionIndex)->GetStaticField(0x36250);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__68_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIImgEventTrigger___c_TypeDefinitionIndex)->GetStaticField(0x36258);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__67_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIImgEventTrigger___c_TypeDefinitionIndex)->GetStaticField(0x36260);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__70_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIImgEventTrigger___c_TypeDefinitionIndex)->GetStaticField(0x36268);
		}
		static ::UnityEngine::UI::Extension::UIImgEventTrigger___c** StaticGet___9()
		{
			return (::UnityEngine::UI::Extension::UIImgEventTrigger___c**)Il2CppClass::FromTypeDefinitionIndex(UIImgEventTrigger___c_TypeDefinitionIndex)->GetStaticField(0x36270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Reg_MoveZPos_ScrollY_b__67_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__REG_MOVEZPOS_SCROLLY_B__67_0_OFFSET))(this);
		}

		::System::Boolean _Reg_ChangeFov_ScrollY_b__68_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__REG_CHANGEFOV_SCROLLY_B__68_0_OFFSET))(this);
		}

		::System::Boolean _Reg_MoveZPos_TwoPointDrag_b__69_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__REG_MOVEZPOS_TWOPOINTDRAG_B__69_0_OFFSET))(this);
		}

		::System::Boolean _Reg_Fov_TwoPointDrag_b__70_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__REG_FOV_TWOPOINTDRAG_B__70_0_OFFSET))(this);
		}
	};
}
