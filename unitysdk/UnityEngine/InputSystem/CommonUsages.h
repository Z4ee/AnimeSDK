#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

#define UNITYENGINE_INPUTSYSTEM_COMMONUSAGES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8A6230)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int CommonUsages_TypeDefinitionIndex = 31603;

	class CommonUsages : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Pressure()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x26260);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Back()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x26270);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_RightHand()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x26280);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_PrimaryAction()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x26290);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Forward()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x262A0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_PrimaryTrigger()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x262B0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_ScrollVertical()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x262C0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Vertical()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x262D0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_ScrollHorizontal()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x262E0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_HighFreqMotor()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x262F0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_LeftHand()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x26300);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_SecondaryAction()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x26310);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Menu()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x26320);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Hatswitch()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x26330);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_SecondaryTrigger()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x26340);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Cancel()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x26350);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Orientation()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x26360);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Twist()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x26370);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Secondary2DMotion()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x26380);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Primary2DMotion()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x26390);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Modifier()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x263A0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Point()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x263B0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_LowFreqMotor()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x263C0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Position()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x263D0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Submit()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x263E0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_BatteryStrength()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x263F0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Horizontal()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x26400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMMONUSAGES__CCTOR_OFFSET))();
		}
	};
}
