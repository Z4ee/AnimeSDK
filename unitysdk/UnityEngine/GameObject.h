#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/PrimitiveType.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/UnityEngine/SendMessageOptions.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_GAMEOBJECT_ADDCOMPONENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B1814C0)
#define UNITYENGINE_GAMEOBJECT_ADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B1814E0)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_1_OFFSET UNITYSDK_OFFSET(0x1B1814B0)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_2_OFFSET UNITYSDK_OFFSET(0x1B181630)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_3_OFFSET UNITYSDK_OFFSET(0x1B181640)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B1814A0)
#define UNITYENGINE_GAMEOBJECT_COMPARETAG_OFFSET UNITYSDK_OFFSET(0x1B1815D0)
#define UNITYENGINE_GAMEOBJECT_CREATEPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1B180F80)
#define UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTSWITHTAG_OFFSET UNITYSDK_OFFSET(0x1B1815E0)
#define UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTWITHTAG_OFFSET UNITYSDK_OFFSET(0x1B181450)
#define UNITYENGINE_GAMEOBJECT_FINDWITHTAG_OFFSET UNITYSDK_OFFSET(0x1B181440)
#define UNITYENGINE_GAMEOBJECT_FIND_OFFSET UNITYSDK_OFFSET(0x1B1817F0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTBYNAME_OFFSET UNITYSDK_OFFSET(0x1B180FB0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTFASTPATH_OFFSET UNITYSDK_OFFSET(0x1B180FA0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_1_OFFSET UNITYSDK_OFFSET(0x1B180FE0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_OFFSET UNITYSDK_OFFSET(0x1B180FD0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINPARENT_OFFSET UNITYSDK_OFFSET(0x1B180FF0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_1_OFFSET UNITYSDK_OFFSET(0x1B181170)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_OFFSET UNITYSDK_OFFSET(0x1B1810E0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_1_OFFSET UNITYSDK_OFFSET(0x1B181290)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_OFFSET UNITYSDK_OFFSET(0x1B181200)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B181000)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_1_OFFSET UNITYSDK_OFFSET(0x1B1810B0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1B181020)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x1B180FC0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B180F90)
#define UNITYENGINE_GAMEOBJECT_GET_ACTIVEINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1B181560)
#define UNITYENGINE_GAMEOBJECT_GET_ACTIVESELF_OFFSET UNITYSDK_OFFSET(0x1B181550)
#define UNITYENGINE_GAMEOBJECT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1B181520)
#define UNITYENGINE_GAMEOBJECT_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B181870)
#define UNITYENGINE_GAMEOBJECT_GET_ISSTATICBATCHABLE_OFFSET UNITYSDK_OFFSET(0x1B1815A0)
#define UNITYENGINE_GAMEOBJECT_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1B181580)
#define UNITYENGINE_GAMEOBJECT_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1B181500)
#define UNITYENGINE_GAMEOBJECT_GET_LIGHTWEIGHTDEACTIVEINTREE_OFFSET UNITYSDK_OFFSET(0x1B181860)
#define UNITYENGINE_GAMEOBJECT_GET_LIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1B181840)
#define UNITYENGINE_GAMEOBJECT_GET_SCENECULLINGMASK_OFFSET UNITYSDK_OFFSET(0x1B181830)
#define UNITYENGINE_GAMEOBJECT_GET_SCENE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B181820)
#define UNITYENGINE_GAMEOBJECT_GET_SCENE_OFFSET UNITYSDK_OFFSET(0x1B181800)
#define UNITYENGINE_GAMEOBJECT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1B1815B0)
#define UNITYENGINE_GAMEOBJECT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B1814F0)
#define UNITYENGINE_GAMEOBJECT_INTERNAL_ADDCOMPONENTWITHTYPE_OFFSET UNITYSDK_OFFSET(0x1B1814D0)
#define UNITYENGINE_GAMEOBJECT_INTERNAL_CREATEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B1816C0)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_1_OFFSET UNITYSDK_OFFSET(0x1B181470)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_2_OFFSET UNITYSDK_OFFSET(0x1B1815F0)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_3_OFFSET UNITYSDK_OFFSET(0x1B181600)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_OFFSET UNITYSDK_OFFSET(0x1B181460)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE__1_OFFSET UNITYSDK_OFFSET(0x1B181490)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE__2_OFFSET UNITYSDK_OFFSET(0x1B181610)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE__3_OFFSET UNITYSDK_OFFSET(0x1B181620)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0x1B181480)
#define UNITYENGINE_GAMEOBJECT_SETACTIVERECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1B181570)
#define UNITYENGINE_GAMEOBJECT_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1B181540)
#define UNITYENGINE_GAMEOBJECT_SETHIDEFLAGRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1B181010)
#define UNITYENGINE_GAMEOBJECT_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1B181530)
#define UNITYENGINE_GAMEOBJECT_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1B181590)
#define UNITYENGINE_GAMEOBJECT_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x1B181510)
#define UNITYENGINE_GAMEOBJECT_SET_LIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1B181850)
#define UNITYENGINE_GAMEOBJECT_SET_TAG_OFFSET UNITYSDK_OFFSET(0x1B1815C0)
#define UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTFASTPATH_OFFSET UNITYSDK_OFFSET(0x1B181430)
#define UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B181420)
#define UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B181320)
#define UNITYENGINE_GAMEOBJECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1816D0)
#define UNITYENGINE_GAMEOBJECT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B181730)
#define UNITYENGINE_GAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B181650)

namespace UnityEngine
{
	inline static constexpr unsigned int GameObject_TypeDefinitionIndex = 5342;

	class GameObject : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* name, ::Il2CppArray<::System::Type*>* components)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT__CTOR_2_OFFSET))(this, name, components);
		}

		static ::UnityEngine::GameObject* CreatePrimitive(::UnityEngine::PrimitiveType type)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::PrimitiveType))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_CREATEPRIMITIVE_OFFSET))(type);
		}

		::UnityEngine::Component* GetComponent(::System::Type* type)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENT_OFFSET))(this, type);
		}

		::System::Void GetComponentFastPath(::System::Type* type, ::System::IntPtr oneFurtherThanResultValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTFASTPATH_OFFSET))(this, type, oneFurtherThanResultValue);
		}

		::UnityEngine::Component* GetComponentByName(::System::String* type)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTBYNAME_OFFSET))(this, type);
		}

		::UnityEngine::Component* GetComponent_1(::System::String* type)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENT_1_OFFSET))(this, type);
		}

		::UnityEngine::Component* GetComponentInChildren(::System::Type* type, ::System::Boolean includeInactive)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_OFFSET))(this, type, includeInactive);
		}

		::UnityEngine::Component* GetComponentInChildren_1(::System::Type* type)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_1_OFFSET))(this, type);
		}

		::UnityEngine::Component* GetComponentInParent(::System::Type* type)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTINPARENT_OFFSET))(this, type);
		}

		::System::Array* GetComponentsInternal(::System::Type* type, ::System::Boolean useSearchTypeAsArrayReturnType, ::System::Boolean recursive, ::System::Boolean includeInactive, ::System::Boolean reverse, ::System::Object* resultList)
		{
			return ((::System::Array*(*)(::PVOID, ::System::Type*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINTERNAL_OFFSET))(this, type, useSearchTypeAsArrayReturnType, recursive, includeInactive, reverse, resultList);
		}

		::System::Void SetHideFlagRecursively(::System::Int32 flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SETHIDEFLAGRECURSIVELY_OFFSET))(this, flag);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponents(::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_OFFSET))(this, type);
		}

		::System::Void GetComponents_1(::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::Component*>* results)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_1_OFFSET))(this, type, results);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInChildren(::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_OFFSET))(this, type);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInChildren_1(::System::Type* type, ::System::Boolean includeInactive)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_1_OFFSET))(this, type, includeInactive);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInParent(::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_OFFSET))(this, type);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInParent_1(::System::Type* type, ::System::Boolean includeInactive)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_1_OFFSET))(this, type, includeInactive);
		}

		::System::Boolean TryGetComponent(::System::Type* type, ::UnityEngine::Component*& component)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::UnityEngine::Component*&))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENT_OFFSET))(this, type, component);
		}

		::UnityEngine::Component* TryGetComponentInternal(::System::Type* type)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTINTERNAL_OFFSET))(this, type);
		}

		::System::Void TryGetComponentFastPath(::System::Type* type, ::System::IntPtr oneFurtherThanResultValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTFASTPATH_OFFSET))(this, type, oneFurtherThanResultValue);
		}

		static ::UnityEngine::GameObject* FindWithTag(::System::String* tag)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_FINDWITHTAG_OFFSET))(tag);
		}

		::System::Void SendMessageUpwards(::System::String* methodName, ::UnityEngine::SendMessageOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_OFFSET))(this, methodName, options);
		}

		::System::Void SendMessage_(::System::String* methodName, ::UnityEngine::SendMessageOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGE__OFFSET))(this, methodName, options);
		}

		::System::Void BroadcastMessage(::System::String* methodName, ::UnityEngine::SendMessageOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_OFFSET))(this, methodName, options);
		}

		::UnityEngine::Component* AddComponentInternal(::System::String* className)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_ADDCOMPONENTINTERNAL_OFFSET))(this, className);
		}

		::UnityEngine::Component* Internal_AddComponentWithType(::System::Type* componentType)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_INTERNAL_ADDCOMPONENTWITHTYPE_OFFSET))(this, componentType);
		}

		::UnityEngine::Component* AddComponent(::System::Type* componentType)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_ADDCOMPONENT_OFFSET))(this, componentType);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Int32 get_layer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_layer(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_LAYER_OFFSET))(this, value);
		}

		::System::Boolean get_active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ACTIVE_OFFSET))(this);
		}

		::System::Void set_active(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_ACTIVE_OFFSET))(this, value);
		}

		::System::Void SetActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SETACTIVE_OFFSET))(this, value);
		}

		::System::Boolean get_activeSelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ACTIVESELF_OFFSET))(this);
		}

		::System::Boolean get_activeInHierarchy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ACTIVEINHIERARCHY_OFFSET))(this);
		}

		::System::Void SetActiveRecursively(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SETACTIVERECURSIVELY_OFFSET))(this, state);
		}

		::System::Boolean get_isStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ISSTATIC_OFFSET))(this);
		}

		::System::Void set_isStatic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_ISSTATIC_OFFSET))(this, value);
		}

		::System::Boolean get_isStaticBatchable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ISSTATICBATCHABLE_OFFSET))(this);
		}

		::System::String* get_tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_TAG_OFFSET))(this);
		}

		::System::Void set_tag(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_TAG_OFFSET))(this, value);
		}

		::System::Boolean CompareTag(::System::String* tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_COMPARETAG_OFFSET))(this, tag);
		}

		static ::UnityEngine::GameObject* FindGameObjectWithTag(::System::String* tag)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTWITHTAG_OFFSET))(tag);
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* FindGameObjectsWithTag(::System::String* tag)
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTSWITHTAG_OFFSET))(tag);
		}

		::System::Void SendMessageUpwards_1(::System::String* methodName, ::System::Object* value, ::UnityEngine::SendMessageOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_1_OFFSET))(this, methodName, value, options);
		}

		::System::Void SendMessageUpwards_2(::System::String* methodName, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_2_OFFSET))(this, methodName, value);
		}

		::System::Void SendMessageUpwards_3(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_3_OFFSET))(this, methodName);
		}

		::System::Void SendMessage__1(::System::String* methodName, ::System::Object* value, ::UnityEngine::SendMessageOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGE__1_OFFSET))(this, methodName, value, options);
		}

		::System::Void SendMessage__2(::System::String* methodName, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGE__2_OFFSET))(this, methodName, value);
		}

		::System::Void SendMessage__3(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGE__3_OFFSET))(this, methodName);
		}

		::System::Void BroadcastMessage_1(::System::String* methodName, ::System::Object* parameter, ::UnityEngine::SendMessageOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_1_OFFSET))(this, methodName, parameter, options);
		}

		::System::Void BroadcastMessage_2(::System::String* methodName, ::System::Object* parameter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_2_OFFSET))(this, methodName, parameter);
		}

		::System::Void BroadcastMessage_3(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_3_OFFSET))(this, methodName);
		}

		static ::System::Void Internal_CreateGameObject(::UnityEngine::GameObject* self, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_INTERNAL_CREATEGAMEOBJECT_OFFSET))(self, name);
		}

		static ::UnityEngine::GameObject* Find(::System::String* name)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_FIND_OFFSET))(name);
		}

		::UnityEngine::SceneManagement::Scene get_scene()
		{
			return ((::UnityEngine::SceneManagement::Scene(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_SCENE_OFFSET))(this);
		}

		::System::UInt64 get_sceneCullingMask()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_SCENECULLINGMASK_OFFSET))(this);
		}

		::System::Boolean get_lightweightDeactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void set_lightweightDeactive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_LIGHTWEIGHTDEACTIVE_OFFSET))(this, value);
		}

		::System::Boolean get_lightweightDeactiveInTree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LIGHTWEIGHTDEACTIVEINTREE_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_GAMEOBJECT_OFFSET))(this);
		}

		::System::Void get_scene_Injected(::UnityEngine::SceneManagement::Scene& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene&))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_SCENE_INJECTED_OFFSET))(this, ret);
		}
	};
}
