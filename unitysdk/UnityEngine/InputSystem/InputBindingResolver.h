#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionState_UnmanagedMemory.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/NameAndParameters.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::InputSystem { class IInputInteraction; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputActionState; }
namespace UnityEngine::InputSystem { class InputBindingComposite; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputProcessor; }

#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_ADDACTIONMAP_OFFSET UNITYSDK_OFFSET(0x8B6A60)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_ASSIGNCOMPOSITEPARTINDEX_OFFSET UNITYSDK_OFFSET(0x1A03DE80)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B6A00)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_GET_TOTALACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x3ABCC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_GET_TOTALBINDINGCOUNT_OFFSET UNITYSDK_OFFSET(0x787BB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_GET_TOTALCONTROLCOUNT_OFFSET UNITYSDK_OFFSET(0x7163D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_GET_TOTALMAPCOUNT_OFFSET UNITYSDK_OFFSET(0x2EF960)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_INSTANTIATEBINDINGCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x1A03DC30)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_RESOLVEINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x8B6AB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_RESOLVEPROCESSORS_OFFSET UNITYSDK_OFFSET(0x8B6AC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_STARTWITHARRAYSFROM_OFFSET UNITYSDK_OFFSET(0x8B6A50)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputBindingResolver_TypeDefinitionIndex = 28929;

	struct alignas(8) InputBindingResolver
	{
		::System::Int32 totalProcessorCount; // 0x10
		::System::Int32 totalCompositeCount; // 0x14
		::System::Int32 totalInteractionCount; // 0x18
		::Il2CppArray<::UnityEngine::InputSystem::InputActionMap*>* maps; // 0x20
		::Il2CppArray<::UnityEngine::InputSystem::InputControl*>* controls; // 0x28
		::UnityEngine::InputSystem::InputActionState_UnmanagedMemory memory; // 0x30
		::Il2CppArray<::UnityEngine::InputSystem::IInputInteraction*>* interactions; // 0xA0
		::Il2CppArray<::UnityEngine::InputSystem::InputProcessor*>* processors; // 0xA8
		::Il2CppArray<::UnityEngine::InputSystem::InputBindingComposite*>* composites; // 0xB0
		::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>* m_Parameters; // 0x118

		::System::Int32 get_totalMapCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_GET_TOTALMAPCOUNT_OFFSET))(this);
		}

		::System::Int32 get_totalActionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_GET_TOTALACTIONCOUNT_OFFSET))(this);
		}

		::System::Int32 get_totalBindingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_GET_TOTALBINDINGCOUNT_OFFSET))(this);
		}

		::System::Int32 get_totalControlCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_GET_TOTALCONTROLCOUNT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_DISPOSE_OFFSET))(this);
		}

		::System::Void StartWithArraysFrom(::UnityEngine::InputSystem::InputActionState* state)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionState*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_STARTWITHARRAYSFROM_OFFSET))(this, state);
		}

		::System::Void AddActionMap(::UnityEngine::InputSystem::InputActionMap* map)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionMap*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_ADDACTIONMAP_OFFSET))(this, map);
		}

		::System::Int32 ResolveInteractions(::System::String* interactionString)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_RESOLVEINTERACTIONS_OFFSET))(this, interactionString);
		}

		::System::Int32 ResolveProcessors(::System::String* processorString)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_RESOLVEPROCESSORS_OFFSET))(this, processorString);
		}

		static ::UnityEngine::InputSystem::InputBindingComposite* InstantiateBindingComposite(::System::String* nameAndParameters)
		{
			return ((::UnityEngine::InputSystem::InputBindingComposite*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_INSTANTIATEBINDINGCOMPOSITE_OFFSET))(nameAndParameters);
		}

		static ::System::Int32 AssignCompositePartIndex(::System::Object* composite, ::System::String* name, ::System::Int32& currentCompositePartCount)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDINGRESOLVER_ASSIGNCOMPOSITEPARTINDEX_OFFSET))(composite, name, currentCompositePartCount);
		}
	};
}
