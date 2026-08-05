#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

#define UNITYENGINE_INPUTSYSTEM_COMMONUSAGES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC31BC0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int CommonUsages_TypeDefinitionIndex = 32223;

	class CommonUsages : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Forward()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x279E0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Primary2DMotion()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x279F0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_BatteryStrength()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27A00);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Submit()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27A10);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_SecondaryTrigger()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27A20);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Orientation()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27A30);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Cancel()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27A40);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_LeftHand()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27A50);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Point()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27A60);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_RightHand()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27A70);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_PrimaryTrigger()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27A80);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_ScrollVertical()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27A90);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Secondary2DMotion()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27AA0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Vertical()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27AB0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Position()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27AC0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_SecondaryAction()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27AD0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Twist()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27AE0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_PrimaryAction()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27AF0);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_LowFreqMotor()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27B00);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Hatswitch()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27B10);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Pressure()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27B20);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Menu()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27B30);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Horizontal()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27B40);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_ScrollHorizontal()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27B50);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Modifier()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27B60);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_Back()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27B70);
		}
		static ::UnityEngine::InputSystem::Utilities::InternedString* StaticGet_HighFreqMotor()
		{
			return (::UnityEngine::InputSystem::Utilities::InternedString*)Il2CppClass::FromTypeDefinitionIndex(CommonUsages_TypeDefinitionIndex)->GetStaticField(0x27B80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMMONUSAGES__CCTOR_OFFSET))();
		}
	};
}
