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

#define UNITYENGINE_GAMEOBJECT_ADDCOMPONENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B298690)
#define UNITYENGINE_GAMEOBJECT_ADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B2986B0)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_1_OFFSET UNITYSDK_OFFSET(0x1B298680)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_2_OFFSET UNITYSDK_OFFSET(0x1B298840)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_3_OFFSET UNITYSDK_OFFSET(0x1B298850)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B298670)
#define UNITYENGINE_GAMEOBJECT_COMPARETAG_OFFSET UNITYSDK_OFFSET(0x1B284250)
#define UNITYENGINE_GAMEOBJECT_CREATEPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1B298400)
#define UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTSWITHTAG_OFFSET UNITYSDK_OFFSET(0x1B2987F0)
#define UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTWITHTAG_OFFSET UNITYSDK_OFFSET(0x1B298620)
#define UNITYENGINE_GAMEOBJECT_FINDWITHTAG_OFFSET UNITYSDK_OFFSET(0x1B298610)
#define UNITYENGINE_GAMEOBJECT_FIND_OFFSET UNITYSDK_OFFSET(0x1B298900)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTBYNAME_OFFSET UNITYSDK_OFFSET(0x1B298420)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTFASTPATH_OFFSET UNITYSDK_OFFSET(0x1B298410)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_1_OFFSET UNITYSDK_OFFSET(0x1B298440)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_OFFSET UNITYSDK_OFFSET(0x1B283CD0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINPARENT_OFFSET UNITYSDK_OFFSET(0x1B283EB0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSCOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B298470)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_1_OFFSET UNITYSDK_OFFSET(0x1B283DA0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_OFFSET UNITYSDK_OFFSET(0x1B298530)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_1_OFFSET UNITYSDK_OFFSET(0x1B283F40)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_OFFSET UNITYSDK_OFFSET(0x1B298590)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B298450)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSWITHARRAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B298460)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_1_OFFSET UNITYSDK_OFFSET(0x1B298480)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_2_OFFSET UNITYSDK_OFFSET(0x1B2984B0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1B2840A0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x1B298430)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B283BE0)
#define UNITYENGINE_GAMEOBJECT_GET_ACTIVEINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1B298740)
#define UNITYENGINE_GAMEOBJECT_GET_ACTIVESELF_OFFSET UNITYSDK_OFFSET(0x1B298730)
#define UNITYENGINE_GAMEOBJECT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1B298700)
#define UNITYENGINE_GAMEOBJECT_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B298950)
#define UNITYENGINE_GAMEOBJECT_GET_ISSTATICBATCHABLE_OFFSET UNITYSDK_OFFSET(0x1B2987E0)
#define UNITYENGINE_GAMEOBJECT_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1B2987C0)
#define UNITYENGINE_GAMEOBJECT_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1B2986D0)
#define UNITYENGINE_GAMEOBJECT_GET_LAZYLAYOUTREBUILDINTREE_OFFSET UNITYSDK_OFFSET(0x1B2987B0)
#define UNITYENGINE_GAMEOBJECT_GET_LAZYLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x1B298790)
#define UNITYENGINE_GAMEOBJECT_GET_LIGHTWEIGHTDEACTIVATEINTREE_OFFSET UNITYSDK_OFFSET(0x1B298780)
#define UNITYENGINE_GAMEOBJECT_GET_LIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1B298760)
#define UNITYENGINE_GAMEOBJECT_GET_SCENECULLINGMASK_OFFSET UNITYSDK_OFFSET(0x1B298940)
#define UNITYENGINE_GAMEOBJECT_GET_SCENE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B298930)
#define UNITYENGINE_GAMEOBJECT_GET_SCENE_OFFSET UNITYSDK_OFFSET(0x1B298910)
#define UNITYENGINE_GAMEOBJECT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1B2841D0)
#define UNITYENGINE_GAMEOBJECT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B2986C0)
#define UNITYENGINE_GAMEOBJECT_INTERNAL_ADDCOMPONENTWITHTYPE_OFFSET UNITYSDK_OFFSET(0x1B2986A0)
#define UNITYENGINE_GAMEOBJECT_INTERNAL_CREATEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B298870)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_1_OFFSET UNITYSDK_OFFSET(0x1B298640)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_2_OFFSET UNITYSDK_OFFSET(0x1B298800)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_3_OFFSET UNITYSDK_OFFSET(0x1B298810)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_OFFSET UNITYSDK_OFFSET(0x1B298630)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE__1_OFFSET UNITYSDK_OFFSET(0x1B298660)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE__2_OFFSET UNITYSDK_OFFSET(0x1B298820)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE__3_OFFSET UNITYSDK_OFFSET(0x1B298830)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0x1B298650)
#define UNITYENGINE_GAMEOBJECT_SETACTIVERECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1B298750)
#define UNITYENGINE_GAMEOBJECT_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1B298720)
#define UNITYENGINE_GAMEOBJECT_SETLAYERRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1B2986F0)
#define UNITYENGINE_GAMEOBJECT_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1B298710)
#define UNITYENGINE_GAMEOBJECT_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1B2987D0)
#define UNITYENGINE_GAMEOBJECT_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x1B2986E0)
#define UNITYENGINE_GAMEOBJECT_SET_LAZYLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x1B2987A0)
#define UNITYENGINE_GAMEOBJECT_SET_LIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1B298770)
#define UNITYENGINE_GAMEOBJECT_SET_TAG_OFFSET UNITYSDK_OFFSET(0x1B284210)
#define UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTFASTPATH_OFFSET UNITYSDK_OFFSET(0x1B298600)
#define UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2985F0)
#define UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B283C50)
#define UNITYENGINE_GAMEOBJECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B298880)
#define UNITYENGINE_GAMEOBJECT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B298890)
#define UNITYENGINE_GAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B298860)

namespace UnityEngine
{
	inline static constexpr unsigned int GameObject_TypeDefinitionIndex = 4310;

	class GameObject : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* a1, ::Il2CppArray<::System::Type*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT__CTOR_2_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::GameObject* CreatePrimitive(::UnityEngine::PrimitiveType a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::PrimitiveType))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_CREATEPRIMITIVE_OFFSET))(a1);
		}

		::UnityEngine::Component* GetComponent(::System::Type* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void GetComponentFastPath(::System::Type* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTFASTPATH_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Component* GetComponentByName(::System::String* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTBYNAME_OFFSET))(this, a1);
		}

		::UnityEngine::Component* GetComponent_1(::System::String* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENT_1_OFFSET))(this, a1);
		}

		::UnityEngine::Component* GetComponentInChildren(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Component* GetComponentInChildren_1(::System::Type* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_1_OFFSET))(this, a1);
		}

		::UnityEngine::Component* GetComponentInParent(::System::Type* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTINPARENT_OFFSET))(this, a1);
		}

		::System::Array* GetComponentsInternal(::System::Type* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Object* a6)
		{
			return ((::System::Array*(*)(::PVOID, ::System::Type*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINTERNAL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 GetComponentsWithArrayInternal(::System::Type* a1, ::System::Array* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Type*, ::System::Array*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSWITHARRAYINTERNAL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 GetComponentsCountInternal(::System::Type* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Type*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSCOUNTINTERNAL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponents(::System::Type* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_OFFSET))(this, a1);
		}

		::System::Void GetComponents_1(::System::Type* a1, ::System::Collections::Generic::List_1<::UnityEngine::Component*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetComponents_2(::System::Type* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_2_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInChildren(::System::Type* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInChildren_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_1_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInParent(::System::Type* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInParent_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetComponent(::System::Type* a1, ::UnityEngine::Component*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::UnityEngine::Component*&))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Component* TryGetComponentInternal(::System::Type* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTINTERNAL_OFFSET))(this, a1);
		}

		::System::Void TryGetComponentFastPath(::System::Type* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTFASTPATH_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::GameObject* FindWithTag(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_FINDWITHTAG_OFFSET))(a1);
		}

		::System::Void SendMessageUpwards(::System::String* a1, ::UnityEngine::SendMessageOptions a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_OFFSET))(this, a1, a2);
		}

		::System::Void SendMessage_(::System::String* a1, ::UnityEngine::SendMessageOptions a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGE__OFFSET))(this, a1, a2);
		}

		::System::Void BroadcastMessage(::System::String* a1, ::UnityEngine::SendMessageOptions a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Component* AddComponentInternal(::System::String* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_ADDCOMPONENTINTERNAL_OFFSET))(this, a1);
		}

		::UnityEngine::Component* Internal_AddComponentWithType(::System::Type* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_INTERNAL_ADDCOMPONENTWITHTYPE_OFFSET))(this, a1);
		}

		::UnityEngine::Component* AddComponent(::System::Type* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_ADDCOMPONENT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Int32 get_layer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_layer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_LAYER_OFFSET))(this, a1);
		}

		::System::Void SetLayerRecursively(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SETLAYERRECURSIVELY_OFFSET))(this, a1);
		}

		::System::Boolean get_active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ACTIVE_OFFSET))(this);
		}

		::System::Void set_active(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_ACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SETACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_activeSelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ACTIVESELF_OFFSET))(this);
		}

		::System::Boolean get_activeInHierarchy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ACTIVEINHIERARCHY_OFFSET))(this);
		}

		::System::Void SetActiveRecursively(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SETACTIVERECURSIVELY_OFFSET))(this, a1);
		}

		::System::Boolean get_lightWeightDeactivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void set_lightWeightDeactivate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_LIGHTWEIGHTDEACTIVATE_OFFSET))(this, a1);
		}

		::System::Boolean get_lightWeightDeactivateInTree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LIGHTWEIGHTDEACTIVATEINTREE_OFFSET))(this);
		}

		::System::Boolean get_lazyLayoutRebuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LAZYLAYOUTREBUILD_OFFSET))(this);
		}

		::System::Void set_lazyLayoutRebuild(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_LAZYLAYOUTREBUILD_OFFSET))(this, a1);
		}

		::System::Boolean get_lazyLayoutRebuildInTree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LAZYLAYOUTREBUILDINTREE_OFFSET))(this);
		}

		::System::Boolean get_isStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ISSTATIC_OFFSET))(this);
		}

		::System::Void set_isStatic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_ISSTATIC_OFFSET))(this, a1);
		}

		::System::Boolean get_isStaticBatchable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ISSTATICBATCHABLE_OFFSET))(this);
		}

		::System::String* get_tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_TAG_OFFSET))(this);
		}

		::System::Void set_tag(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_TAG_OFFSET))(this, a1);
		}

		::System::Boolean CompareTag(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_COMPARETAG_OFFSET))(this, a1);
		}

		static ::UnityEngine::GameObject* FindGameObjectWithTag(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTWITHTAG_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* FindGameObjectsWithTag(::System::String* a1)
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTSWITHTAG_OFFSET))(a1);
		}

		::System::Void SendMessageUpwards_1(::System::String* a1, ::System::Object* a2, ::UnityEngine::SendMessageOptions a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendMessageUpwards_2(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_2_OFFSET))(this, a1, a2);
		}

		::System::Void SendMessageUpwards_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_3_OFFSET))(this, a1);
		}

		::System::Void SendMessage__1(::System::String* a1, ::System::Object* a2, ::UnityEngine::SendMessageOptions a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGE__1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendMessage__2(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGE__2_OFFSET))(this, a1, a2);
		}

		::System::Void SendMessage__3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGE__3_OFFSET))(this, a1);
		}

		::System::Void BroadcastMessage_1(::System::String* a1, ::System::Object* a2, ::UnityEngine::SendMessageOptions a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BroadcastMessage_2(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_2_OFFSET))(this, a1, a2);
		}

		::System::Void BroadcastMessage_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_3_OFFSET))(this, a1);
		}

		static ::System::Void Internal_CreateGameObject(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_INTERNAL_CREATEGAMEOBJECT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* Find(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_FIND_OFFSET))(a1);
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

		::System::Void get_scene_Injected(::UnityEngine::SceneManagement::Scene& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene&))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_SCENE_INJECTED_OFFSET))(this, a1);
		}
	};
}
