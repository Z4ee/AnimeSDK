#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlPath_ParsedPathComponent.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlPath_PathParser.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH__PARSE_D__33_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EAD8770)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH__PARSE_D__33_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EAD89B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH__PARSE_D__33_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EAD88A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH__PARSE_D__33_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EAD8A40)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH__PARSE_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EAD8930)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH__PARSE_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EAD88E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH__PARSE_D__33_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EAD8760)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH__PARSE_D__33__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD8740)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlPath__Parse_d__33_TypeDefinitionIndex = 32244;

	class InputControlPath__Parse_d__33 : public ::System::Object
	{
	public:
		::System::String* __3__path; // 0x10
		::UnityEngine::InputSystem::InputControlPath_PathParser _parser_5__2; // 0x18
		::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent __2__current; // 0x80
		::System::String* path; // 0xD0
		::System::Int32 __l__initialThreadId; // 0xD8
		::System::Int32 __1__state; // 0xDC

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH__PARSE_D__33__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH__PARSE_D__33_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH__PARSE_D__33_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current()
		{
			return ((::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH__PARSE_D__33_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH__PARSE_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH__PARSE_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent>* System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH__PARSE_D__33_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH__PARSE_D__33_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
