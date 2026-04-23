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
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define UNITYENGINE_GAMEOBJECT_ADDCOMPONENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4473D0)
#define UNITYENGINE_GAMEOBJECT_ADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A4473F0)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_1_OFFSET UNITYSDK_OFFSET(0x1A4473C0)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_2_OFFSET UNITYSDK_OFFSET(0x1A447580)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_3_OFFSET UNITYSDK_OFFSET(0x1A447590)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A4473B0)
#define UNITYENGINE_GAMEOBJECT_COMPARETAG_OFFSET UNITYSDK_OFFSET(0x1A432610)
#define UNITYENGINE_GAMEOBJECT_CREATEPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1A447120)
#define UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTSWITHTAG_OFFSET UNITYSDK_OFFSET(0x1A447530)
#define UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTWITHTAG_OFFSET UNITYSDK_OFFSET(0x1A447360)
#define UNITYENGINE_GAMEOBJECT_FINDWITHTAG_OFFSET UNITYSDK_OFFSET(0x1A447350)
#define UNITYENGINE_GAMEOBJECT_FIND_OFFSET UNITYSDK_OFFSET(0x1A447640)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTBYNAME_OFFSET UNITYSDK_OFFSET(0x1A447140)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTFASTPATH_OFFSET UNITYSDK_OFFSET(0x1A447130)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_1_OFFSET UNITYSDK_OFFSET(0x1A447160)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_OFFSET UNITYSDK_OFFSET(0x1A432060)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINPARENT_OFFSET UNITYSDK_OFFSET(0x1A432250)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSCOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A447190)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_1_OFFSET UNITYSDK_OFFSET(0x1A432130)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_OFFSET UNITYSDK_OFFSET(0x1A447250)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_1_OFFSET UNITYSDK_OFFSET(0x1A4322E0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_OFFSET UNITYSDK_OFFSET(0x1A4472C0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A447170)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSWITHARRAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A447180)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_1_OFFSET UNITYSDK_OFFSET(0x1A4471A0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_2_OFFSET UNITYSDK_OFFSET(0x1A4471D0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1A432450)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x1A447150)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A431F70)
#define UNITYENGINE_GAMEOBJECT_GET_ACTIVEINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1A447480)
#define UNITYENGINE_GAMEOBJECT_GET_ACTIVESELF_OFFSET UNITYSDK_OFFSET(0x1A447470)
#define UNITYENGINE_GAMEOBJECT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1A447440)
#define UNITYENGINE_GAMEOBJECT_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A447690)
#define UNITYENGINE_GAMEOBJECT_GET_ISSTATICBATCHABLE_OFFSET UNITYSDK_OFFSET(0x1A447520)
#define UNITYENGINE_GAMEOBJECT_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1A447500)
#define UNITYENGINE_GAMEOBJECT_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1A447410)
#define UNITYENGINE_GAMEOBJECT_GET_LAZYLAYOUTREBUILDINTREE_OFFSET UNITYSDK_OFFSET(0x1A4474F0)
#define UNITYENGINE_GAMEOBJECT_GET_LAZYLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x1A4474D0)
#define UNITYENGINE_GAMEOBJECT_GET_LIGHTWEIGHTDEACTIVATEINTREE_OFFSET UNITYSDK_OFFSET(0x1A4474C0)
#define UNITYENGINE_GAMEOBJECT_GET_LIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A4474A0)
#define UNITYENGINE_GAMEOBJECT_GET_SCENECULLINGMASK_OFFSET UNITYSDK_OFFSET(0x1A447680)
#define UNITYENGINE_GAMEOBJECT_GET_SCENE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A447670)
#define UNITYENGINE_GAMEOBJECT_GET_SCENE_OFFSET UNITYSDK_OFFSET(0x1A447650)
#define UNITYENGINE_GAMEOBJECT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1A432590)
#define UNITYENGINE_GAMEOBJECT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A447400)
#define UNITYENGINE_GAMEOBJECT_INTERNAL_ADDCOMPONENTWITHTYPE_OFFSET UNITYSDK_OFFSET(0x1A4473E0)
#define UNITYENGINE_GAMEOBJECT_INTERNAL_CREATEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A4475B0)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_1_OFFSET UNITYSDK_OFFSET(0x1A447380)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_2_OFFSET UNITYSDK_OFFSET(0x1A447540)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_3_OFFSET UNITYSDK_OFFSET(0x1A447550)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_OFFSET UNITYSDK_OFFSET(0x1A447370)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE__1_OFFSET UNITYSDK_OFFSET(0x1A4473A0)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE__2_OFFSET UNITYSDK_OFFSET(0x1A447560)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE__3_OFFSET UNITYSDK_OFFSET(0x1A447570)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0x1A447390)
#define UNITYENGINE_GAMEOBJECT_SETACTIVERECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1A447490)
#define UNITYENGINE_GAMEOBJECT_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1A447460)
#define UNITYENGINE_GAMEOBJECT_SETLAYERRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1A447430)
#define UNITYENGINE_GAMEOBJECT_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1A447450)
#define UNITYENGINE_GAMEOBJECT_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1A447510)
#define UNITYENGINE_GAMEOBJECT_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x1A447420)
#define UNITYENGINE_GAMEOBJECT_SET_LAZYLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x1A4474E0)
#define UNITYENGINE_GAMEOBJECT_SET_LIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A4474B0)
#define UNITYENGINE_GAMEOBJECT_SET_TAG_OFFSET UNITYSDK_OFFSET(0x1A4325D0)
#define UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTFASTPATH_OFFSET UNITYSDK_OFFSET(0x1A447340)
#define UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A447330)
#define UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A431FE0)
#define UNITYENGINE_GAMEOBJECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4475C0)
#define UNITYENGINE_GAMEOBJECT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A4475D0)
#define UNITYENGINE_GAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4475A0)

namespace UnityEngine
{
	inline static constexpr unsigned int GameObject_TypeDefinitionIndex = 4136;

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

		::System::Int32 GetComponentsWithArrayInternal(::System::Type* type, ::System::Array* array, ::System::Boolean useSearchTypeAsArrayReturnType, ::System::Boolean recursive, ::System::Boolean includeInactive, ::System::Boolean reverse)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Type*, ::System::Array*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSWITHARRAYINTERNAL_OFFSET))(this, type, array, useSearchTypeAsArrayReturnType, recursive, includeInactive, reverse);
		}

		::System::Int32 GetComponentsCountInternal(::System::Type* type, ::System::Boolean useSearchTypeAsArrayReturnType, ::System::Boolean recursive, ::System::Boolean includeInactive, ::System::Boolean reverse)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Type*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSCOUNTINTERNAL_OFFSET))(this, type, useSearchTypeAsArrayReturnType, recursive, includeInactive, reverse);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponents(::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_OFFSET))(this, type);
		}

		::System::Void GetComponents_1(::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::Component*>* results)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_1_OFFSET))(this, type, results);
		}

		::System::Boolean GetComponents_2(::System::Type* type, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>* results)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_2_OFFSET))(this, type, results);
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

		::System::Void SetLayerRecursively(::System::Int32 layer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SETLAYERRECURSIVELY_OFFSET))(this, layer);
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

		::System::Boolean get_lightWeightDeactivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void set_lightWeightDeactivate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_LIGHTWEIGHTDEACTIVATE_OFFSET))(this, value);
		}

		::System::Boolean get_lightWeightDeactivateInTree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LIGHTWEIGHTDEACTIVATEINTREE_OFFSET))(this);
		}

		::System::Boolean get_lazyLayoutRebuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LAZYLAYOUTREBUILD_OFFSET))(this);
		}

		::System::Void set_lazyLayoutRebuild(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_LAZYLAYOUTREBUILD_OFFSET))(this, value);
		}

		::System::Boolean get_lazyLayoutRebuildInTree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LAZYLAYOUTREBUILDINTREE_OFFSET))(this);
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
