#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/TypeTable.h"

namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE_INPUTSYSTEM_INPUTINTERACTION_GETDISPLAYNAME_1_OFFSET UNITYSDK_OFFSET(0x1B51F8B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTINTERACTION_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1B51F820)
#define UNITYENGINE_INPUTSYSTEM_INPUTINTERACTION_GETVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1B51F790)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputInteraction_TypeDefinitionIndex = 28869;

	class InputInteraction : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::Utilities::TypeTable* StaticGet_s_Interactions()
		{
			return (::UnityEngine::InputSystem::Utilities::TypeTable*)Il2CppClass::FromTypeDefinitionIndex(InputInteraction_TypeDefinitionIndex)->GetStaticField(0x22450);
		}

		static ::System::Type* GetValueType(::System::Type* interactionType)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTINTERACTION_GETVALUETYPE_OFFSET))(interactionType);
		}

		static ::System::String* GetDisplayName(::System::String* interaction)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTINTERACTION_GETDISPLAYNAME_OFFSET))(interaction);
		}

		static ::System::String* GetDisplayName_1(::System::Type* interactionType)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTINTERACTION_GETDISPLAYNAME_1_OFFSET))(interactionType);
		}
	};
}
