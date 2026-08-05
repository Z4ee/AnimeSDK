#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::InputSystem::LowLevel { class IInputRuntime; }

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputRuntime_TypeDefinitionIndex = 32550;

	class InputRuntime : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::LowLevel::IInputRuntime** StaticGet_s_Instance()
		{
			return (::UnityEngine::InputSystem::LowLevel::IInputRuntime**)Il2CppClass::FromTypeDefinitionIndex(InputRuntime_TypeDefinitionIndex)->GetStaticField(0x275D0);
		}
		static ::System::Double* StaticGet_s_CurrentTimeOffsetToRealtimeSinceStartup()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(InputRuntime_TypeDefinitionIndex)->GetStaticField(0x7CE0);
		}
	};
}
