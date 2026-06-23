#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionMap_DeviceArray.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionMap; }
namespace UnityEngine::InputSystem { class InputActionState; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1C359AA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_DISABLE_OFFSET UNITYSDK_OFFSET(0x1C359930)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1C359790)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDACTIONMAP_1_OFFSET UNITYSDK_OFFSET(0x1C3591B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDACTIONMAP_OFFSET UNITYSDK_OFFSET(0x1C358E60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDACTION_1_OFFSET UNITYSDK_OFFSET(0x1C359360)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDACTION_OFFSET UNITYSDK_OFFSET(0x1C358750)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDBINDING_OFFSET UNITYSDK_OFFSET(0x1C358D80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDCONTROLSCHEMEINDEX_OFFSET UNITYSDK_OFFSET(0x1C359430)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDCONTROLSCHEME_OFFSET UNITYSDK_OFFSET(0x1C359530)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1C358CF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C359B20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_ACTIONMAPS_OFFSET UNITYSDK_OFFSET(0x1C358120)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x1C3581E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x1C358180)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_CONTROLSCHEMES_OFFSET UNITYSDK_OFFSET(0x1C358150)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0x1C358400)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1C357FC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C3586C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_ISUSABLEWITHDEVICE_OFFSET UNITYSDK_OFFSET(0x1C359620)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_LOADFROMJSON_OFFSET UNITYSDK_OFFSET(0x1C358C60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_MARKASDIRTY_OFFSET UNITYSDK_OFFSET(0x1C359BC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C359BD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_RERESOLVEIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1C358390)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_SET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x1C358220)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_SET_DEVICES_OFFSET UNITYSDK_OFFSET(0x1C3584A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C359B70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_TOJSON_OFFSET UNITYSDK_OFFSET(0x1C358B80)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C359C10)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionAsset_TypeDefinitionIndex = 31529;

	class InputActionAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		// static const ::System::String* Extension; // 0x0
		::Il2CppArray<::UnityEngine::InputSystem::InputActionMap*>* m_ActionMaps; // 0x18
		::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme>* m_ControlSchemes; // 0x20
		::UnityEngine::InputSystem::InputActionState* m_SharedStateForAllMaps; // 0x28
		::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> m_BindingMask; // 0x30
		::UnityEngine::InputSystem::InputActionMap_DeviceArray m_Devices; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET__CTOR_OFFSET))(this);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_ENABLED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*> get_actionMaps()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_ACTIONMAPS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_CONTROLSCHEMES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* get_bindings()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_BINDINGS_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask()
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_BINDINGMASK_OFFSET))(this);
		}

		::System::Void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_SET_BINDINGMASK_OFFSET))(this, value);
		}

		::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> get_devices()
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_DEVICES_OFFSET))(this);
		}

		::System::Void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_SET_DEVICES_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputAction* get_Item(::System::String* actionNameOrId)
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GET_ITEM_OFFSET))(this, actionNameOrId);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_TOJSON_OFFSET))(this);
		}

		::System::Void LoadFromJson(::System::String* json)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_LOADFROMJSON_OFFSET))(this, json);
		}

		static ::UnityEngine::InputSystem::InputActionAsset* FromJson(::System::String* json)
		{
			return ((::UnityEngine::InputSystem::InputActionAsset*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FROMJSON_OFFSET))(json);
		}

		::UnityEngine::InputSystem::InputAction* FindAction(::System::String* actionNameOrId, ::System::Boolean throwIfNotFound)
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDACTION_OFFSET))(this, actionNameOrId, throwIfNotFound);
		}

		::System::Int32 FindBinding(::UnityEngine::InputSystem::InputBinding mask, ::UnityEngine::InputSystem::InputAction*& action)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::InputAction*&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDBINDING_OFFSET))(this, mask, action);
		}

		::UnityEngine::InputSystem::InputActionMap* FindActionMap(::System::String* nameOrId, ::System::Boolean throwIfNotFound)
		{
			return ((::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDACTIONMAP_OFFSET))(this, nameOrId, throwIfNotFound);
		}

		::UnityEngine::InputSystem::InputActionMap* FindActionMap_1(::System::Guid id)
		{
			return ((::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDACTIONMAP_1_OFFSET))(this, id);
		}

		::UnityEngine::InputSystem::InputAction* FindAction_1(::System::Guid guid)
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDACTION_1_OFFSET))(this, guid);
		}

		::System::Int32 FindControlSchemeIndex(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDCONTROLSCHEMEINDEX_OFFSET))(this, name);
		}

		::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> FindControlScheme(::System::String* name)
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_FINDCONTROLSCHEME_OFFSET))(this, name);
		}

		::System::Boolean IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_ISUSABLEWITHDEVICE_OFFSET))(this, device);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_ENABLE_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_DISABLE_OFFSET))(this);
		}

		::System::Boolean Contains(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_CONTAINS_OFFSET))(this, action);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void MarkAsDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_MARKASDIRTY_OFFSET))(this);
		}

		::System::Void ReResolveIfNecessary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_RERESOLVEIFNECESSARY_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONASSET_ONDESTROY_OFFSET))(this);
		}
	};
}
