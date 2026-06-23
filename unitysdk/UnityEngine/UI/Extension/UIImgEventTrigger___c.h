#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEAF380)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEAF3C0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__REG_CHANGEFOV_SCROLLY_B__68_0_OFFSET UNITYSDK_OFFSET(0x1AEAF580)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__REG_FOV_TWOPOINTDRAG_B__70_0_OFFSET UNITYSDK_OFFSET(0x1AEAF800)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__REG_MOVEZPOS_SCROLLY_B__67_0_OFFSET UNITYSDK_OFFSET(0x1AEAF3D0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER___C__REG_MOVEZPOS_TWOPOINTDRAG_B__69_0_OFFSET UNITYSDK_OFFSET(0x1AEAF730)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgEventTrigger___c_TypeDefinitionIndex = 65759;

	class UIImgEventTrigger___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Boolean>** StaticGet___9__69_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIImgEventTrigger___c_TypeDefinitionIndex)->GetStaticField(0x38880);
		}
		static ::UnityEngine::UI::Extension::UIImgEventTrigger___c** StaticGet___9()
		{
			return (::UnityEngine::UI::Extension::UIImgEventTrigger___c**)Il2CppClass::FromTypeDefinitionIndex(UIImgEventTrigger___c_TypeDefinitionIndex)->GetStaticField(0x38888);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__70_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIImgEventTrigger___c_TypeDefinitionIndex)->GetStaticField(0x38890);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__68_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIImgEventTrigger___c_TypeDefinitionIndex)->GetStaticField(0x38898);
		}
		static ::System::Func_1<::System::Boolean>** StaticGet___9__67_0()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIImgEventTrigger___c_TypeDefinitionIndex)->GetStaticField(0x388A0);
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
