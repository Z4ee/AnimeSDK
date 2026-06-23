#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionMap_DeviceArray.h"
#include "unitysdk/UnityEngine/InputSystem/InputAction_CallbackContext.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/CallbackArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::InputSystem { class InputAction; }
namespace UnityEngine::InputSystem { class InputActionAsset; }
namespace UnityEngine::InputSystem { class InputActionState; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ADD_ACTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1D3B8C60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLEARACTIONLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x1D3B92F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLEARCACHEDACTIONDATA_OFFSET UNITYSDK_OFFSET(0x1D3BA780)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1D3B9800)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1D3B9A40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DISABLE_OFFSET UNITYSDK_OFFSET(0x1D3B97D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D3B8D20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ENABLE_OFFSET UNITYSDK_OFFSET(0x1D3B9750)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTIONINDEX_1_OFFSET UNITYSDK_OFFSET(0x1D3B9360)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1D3B8D40)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTION_1_OFFSET UNITYSDK_OFFSET(0x1D3B9520)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTION_OFFSET UNITYSDK_OFFSET(0x1D3B8B70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDBINDINGRELATIVETOMAP_OFFSET UNITYSDK_OFFSET(0x1D3BBD50)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDBINDING_OFFSET UNITYSDK_OFFSET(0x1D3BBC00)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1D3BBDD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GENERATEID_OFFSET UNITYSDK_OFFSET(0x1D3B84A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETBINDINGSFORSINGLEACTION_OFFSET UNITYSDK_OFFSET(0x1D3B9DA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETCONTROLSFORSINGLEACTION_OFFSET UNITYSDK_OFFSET(0x1D3BA730)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D3B9C00)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ACTIONS_OFFSET UNITYSDK_OFFSET(0x1D3B8540)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1D3B8410)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x1D3B8780)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x1D3B8570)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_CONTROLSCHEMES_OFFSET UNITYSDK_OFFSET(0x1D3B8610)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0x1D3B8950)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1D3B8530)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_IDDONTGENERATE_OFFSET UNITYSDK_OFFSET(0x1D3B84F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D3B8420)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D3B8A60)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D3B8400)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ISUSABLEWITHDEVICE_OFFSET UNITYSDK_OFFSET(0x1D3B9580)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_LAZYRESOLVEBINDINGS_OFFSET UNITYSDK_OFFSET(0x1D3B8910)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D3BBFC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D3BBFB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_REMOVE_ACTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1D3B8CB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_RESOLVEBINDINGSIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1D3B97B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_RESOLVEBINDINGS_OFFSET UNITYSDK_OFFSET(0x1D3BA7A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SETUPACTIONLOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x1D3B90A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SETUPPERACTIONCONTROLANDBINDINGARRAYS_OFFSET UNITYSDK_OFFSET(0x1D3B9DF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_BINDINGMASK_OFFSET UNITYSDK_OFFSET(0x1D3B87D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_DEVICES_OFFSET UNITYSDK_OFFSET(0x1D3B89F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D3B9CD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1D3B9A30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_TOJSON_1_OFFSET UNITYSDK_OFFSET(0x1D3BBEE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_TOJSON_OFFSET UNITYSDK_OFFSET(0x1D3BBE50)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D3B9A70)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_UNITYENGINE_INPUTSYSTEM_IINPUTACTIONCOLLECTION2_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x1D3B85A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D3B8D10)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B8D00)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionMap_TypeDefinitionIndex = 31535;

	class InputActionMap : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_DeferBindingResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InputActionMap_TypeDefinitionIndex)->GetStaticField(0x7D50);
		}
		::System::String* m_Name; // 0x10
		::System::String* m_Id; // 0x18
		::UnityEngine::InputSystem::InputActionAsset* m_Asset; // 0x20
		::Il2CppArray<::UnityEngine::InputSystem::InputAction*>* m_Actions; // 0x28
		::Il2CppArray<::UnityEngine::InputSystem::InputBinding>* m_Bindings; // 0x30
		::Il2CppArray<::UnityEngine::InputSystem::InputBinding>* m_BindingsForEachAction; // 0x38
		::Il2CppArray<::UnityEngine::InputSystem::InputControl*>* m_ControlsForEachAction; // 0x40
		::System::Boolean m_ControlsForEachActionInitialized; // 0x48
		::System::Boolean m_BindingsForEachActionInitialized; // 0x49
		::System::Int32 m_EnabledActionsCount; // 0x4C
		::UnityEngine::InputSystem::InputAction* m_SingletonAction; // 0x50
		::System::Int32 m_MapIndexInState; // 0x58
		::UnityEngine::InputSystem::InputActionState* m_State; // 0x60
		::System::Boolean m_NeedToResolveBindings; // 0x68
		::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> m_BindingMask; // 0x70
		::UnityEngine::InputSystem::InputActionMap_DeviceArray m_Devices; // 0xD0
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> m_ActionCallbacks; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* m_ActionIndexByNameOrId; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP__CTOR_1_OFFSET))(this, name);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_NAME_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionAsset* get_asset()
		{
			return ((::UnityEngine::InputSystem::InputActionAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ASSET_OFFSET))(this);
		}

		::System::Guid get_id()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ID_OFFSET))(this);
		}

		::System::Guid get_idDontGenerate()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_IDDONTGENERATE_OFFSET))(this);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ENABLED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> get_actions()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ACTIONS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> get_bindings()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* UnityEngine_InputSystem_IInputActionCollection2_get_bindings()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_UNITYENGINE_INPUTSYSTEM_IINPUTACTIONCOLLECTION2_GET_BINDINGS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_CONTROLSCHEMES_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask()
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_BINDINGMASK_OFFSET))(this);
		}

		::System::Void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_BINDINGMASK_OFFSET))(this, value);
		}

		::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> get_devices()
		{
			return ((::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_DEVICES_OFFSET))(this);
		}

		::System::Void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SET_DEVICES_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputAction* get_Item(::System::String* actionNameOrId)
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GET_ITEM_OFFSET))(this, actionNameOrId);
		}

		::System::Void add_actionTriggered(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ADD_ACTIONTRIGGERED_OFFSET))(this, value);
		}

		::System::Void remove_actionTriggered(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_REMOVE_ACTIONTRIGGERED_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DISPOSE_OFFSET))(this);
		}

		::System::Int32 FindActionIndex(::System::String* nameOrId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTIONINDEX_OFFSET))(this, nameOrId);
		}

		::System::Void SetUpActionLookupTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SETUPACTIONLOOKUPTABLE_OFFSET))(this);
		}

		::System::Void ClearActionLookupTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLEARACTIONLOOKUPTABLE_OFFSET))(this);
		}

		::System::Int32 FindActionIndex_1(::System::Guid id)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTIONINDEX_1_OFFSET))(this, id);
		}

		::UnityEngine::InputSystem::InputAction* FindAction(::System::String* actionNameOrId, ::System::Boolean throwIfNotFound)
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTION_OFFSET))(this, actionNameOrId, throwIfNotFound);
		}

		::UnityEngine::InputSystem::InputAction* FindAction_1(::System::Guid id)
		{
			return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDACTION_1_OFFSET))(this, id);
		}

		::System::Boolean IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ISUSABLEWITHDEVICE_OFFSET))(this, device);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ENABLE_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_DISABLE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputActionMap* Clone()
		{
			return ((::UnityEngine::InputSystem::InputActionMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLONE_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Contains(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CONTAINS_OFFSET))(this, action);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_TOSTRING_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> GetBindingsForSingleAction(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETBINDINGSFORSINGLEACTION_OFFSET))(this, action);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> GetControlsForSingleAction(::UnityEngine::InputSystem::InputAction* action)
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>(*)(::PVOID, ::UnityEngine::InputSystem::InputAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GETCONTROLSFORSINGLEACTION_OFFSET))(this, action);
		}

		::System::Void SetUpPerActionControlAndBindingArrays()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_SETUPPERACTIONCONTROLANDBINDINGARRAYS_OFFSET))(this);
		}

		::System::Void ClearCachedActionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_CLEARCACHEDACTIONDATA_OFFSET))(this);
		}

		::System::Void GenerateId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_GENERATEID_OFFSET))(this);
		}

		::System::Boolean LazyResolveBindings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_LAZYRESOLVEBINDINGS_OFFSET))(this);
		}

		::System::Void ResolveBindingsIfNecessary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_RESOLVEBINDINGSIFNECESSARY_OFFSET))(this);
		}

		::System::Void ResolveBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_RESOLVEBINDINGS_OFFSET))(this);
		}

		::System::Int32 FindBinding(::UnityEngine::InputSystem::InputBinding mask, ::UnityEngine::InputSystem::InputAction*& action)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::InputBinding, ::UnityEngine::InputSystem::InputAction*&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDBINDING_OFFSET))(this, mask, action);
		}

		::System::Int32 FindBindingRelativeToMap(::UnityEngine::InputSystem::InputBinding mask)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::InputSystem::InputBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FINDBINDINGRELATIVETOMAP_OFFSET))(this, mask);
		}

		static ::Il2CppArray<::UnityEngine::InputSystem::InputActionMap*>* FromJson(::System::String* json)
		{
			return ((::Il2CppArray<::UnityEngine::InputSystem::InputActionMap*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_FROMJSON_OFFSET))(json);
		}

		static ::System::String* ToJson(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>* maps)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_TOJSON_OFFSET))(maps);
		}

		::System::String* ToJson_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_TOJSON_1_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONMAP_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
