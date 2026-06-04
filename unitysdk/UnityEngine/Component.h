#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/SendMessageOptions.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define UNITYENGINE_COMPONENT_BROADCASTMESSAGE_1_OFFSET UNITYSDK_OFFSET(0x1B2842F0)
#define UNITYENGINE_COMPONENT_BROADCASTMESSAGE_2_OFFSET UNITYSDK_OFFSET(0x1B284300)
#define UNITYENGINE_COMPONENT_BROADCASTMESSAGE_3_OFFSET UNITYSDK_OFFSET(0x1B284310)
#define UNITYENGINE_COMPONENT_BROADCASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B2842E0)
#define UNITYENGINE_COMPONENT_COMPARETAG_OFFSET UNITYSDK_OFFSET(0x1B284220)
#define UNITYENGINE_COMPONENT_GETCOMPONENTFASTPATH_OFFSET UNITYSDK_OFFSET(0x1B283BF0)
#define UNITYENGINE_COMPONENT_GETCOMPONENTINCHILDREN_1_OFFSET UNITYSDK_OFFSET(0x1B283CE0)
#define UNITYENGINE_COMPONENT_GETCOMPONENTINCHILDREN_OFFSET UNITYSDK_OFFSET(0x1B283C90)
#define UNITYENGINE_COMPONENT_GETCOMPONENTINPARENT_OFFSET UNITYSDK_OFFSET(0x1B283E80)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSCOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B284120)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSFORLISTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B284100)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_1_OFFSET UNITYSDK_OFFSET(0x1B283E00)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_OFFSET UNITYSDK_OFFSET(0x1B283D20)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSINPARENT_1_OFFSET UNITYSDK_OFFSET(0x1B283FA0)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSINPARENT_OFFSET UNITYSDK_OFFSET(0x1B283EC0)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSWITHARRAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B284110)
#define UNITYENGINE_COMPONENT_GETCOMPONENTS_1_OFFSET UNITYSDK_OFFSET(0x1B284130)
#define UNITYENGINE_COMPONENT_GETCOMPONENTS_2_OFFSET UNITYSDK_OFFSET(0x1B284140)
#define UNITYENGINE_COMPONENT_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1B284020)
#define UNITYENGINE_COMPONENT_GETCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x1B283C80)
#define UNITYENGINE_COMPONENT_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B283BB0)
#define UNITYENGINE_COMPONENT_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B283BA0)
#define UNITYENGINE_COMPONENT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1B2841A0)
#define UNITYENGINE_COMPONENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B283B90)
#define UNITYENGINE_COMPONENT_SENDMESSAGEUPWARDS_1_OFFSET UNITYSDK_OFFSET(0x1B284270)
#define UNITYENGINE_COMPONENT_SENDMESSAGEUPWARDS_2_OFFSET UNITYSDK_OFFSET(0x1B284280)
#define UNITYENGINE_COMPONENT_SENDMESSAGEUPWARDS_3_OFFSET UNITYSDK_OFFSET(0x1B284290)
#define UNITYENGINE_COMPONENT_SENDMESSAGEUPWARDS_OFFSET UNITYSDK_OFFSET(0x1B284260)
#define UNITYENGINE_COMPONENT_SENDMESSAGE__1_OFFSET UNITYSDK_OFFSET(0x1B2842C0)
#define UNITYENGINE_COMPONENT_SENDMESSAGE__2_OFFSET UNITYSDK_OFFSET(0x1B2842B0)
#define UNITYENGINE_COMPONENT_SENDMESSAGE__3_OFFSET UNITYSDK_OFFSET(0x1B2842D0)
#define UNITYENGINE_COMPONENT_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0x1B2842A0)
#define UNITYENGINE_COMPONENT_SET_TAG_OFFSET UNITYSDK_OFFSET(0x1B2841E0)
#define UNITYENGINE_COMPONENT_TRYGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B283C00)
#define UNITYENGINE_COMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B284320)

namespace UnityEngine
{
	inline static constexpr unsigned int Component_TypeDefinitionIndex = 4302;

	class Component : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GET_TRANSFORM_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GET_GAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::Component* GetComponent(::System::Type* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void GetComponentFastPath(::System::Type* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTFASTPATH_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetComponent(::System::Type* a1, ::UnityEngine::Component*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::UnityEngine::Component*&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_TRYGETCOMPONENT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Component* GetComponent_1(::System::String* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENT_1_OFFSET))(this, a1);
		}

		::UnityEngine::Component* GetComponentInChildren(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTINCHILDREN_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Component* GetComponentInChildren_1(::System::Type* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTINCHILDREN_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInChildren(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInChildren_1(::System::Type* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_1_OFFSET))(this, a1);
		}

		::UnityEngine::Component* GetComponentInParent(::System::Type* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTINPARENT_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInParent(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSINPARENT_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInParent_1(::System::Type* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSINPARENT_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponents(::System::Type* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTS_OFFSET))(this, a1);
		}

		::System::Void GetComponentsForListInternal(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSFORLISTINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetComponentsWithArrayInternal(::System::Type* a1, ::System::Array* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Type*, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSWITHARRAYINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetComponentsCountInternal(::System::Type* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSCOUNTINTERNAL_OFFSET))(this, a1);
		}

		::System::Void GetComponents_1(::System::Type* a1, ::System::Collections::Generic::List_1<::UnityEngine::Component*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTS_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetComponents_2(::System::Type* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTS_2_OFFSET))(this, a1, a2);
		}

		::System::String* get_tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GET_TAG_OFFSET))(this);
		}

		::System::Void set_tag(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SET_TAG_OFFSET))(this, a1);
		}

		::System::Boolean CompareTag(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_COMPARETAG_OFFSET))(this, a1);
		}

		::System::Void SendMessageUpwards(::System::String* a1, ::System::Object* a2, ::UnityEngine::SendMessageOptions a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGEUPWARDS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendMessageUpwards_1(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGEUPWARDS_1_OFFSET))(this, a1, a2);
		}

		::System::Void SendMessageUpwards_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGEUPWARDS_2_OFFSET))(this, a1);
		}

		::System::Void SendMessageUpwards_3(::System::String* a1, ::UnityEngine::SendMessageOptions a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGEUPWARDS_3_OFFSET))(this, a1, a2);
		}

		::System::Void SendMessage_(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGE__OFFSET))(this, a1, a2);
		}

		::System::Void SendMessage__1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGE__1_OFFSET))(this, a1);
		}

		::System::Void SendMessage__2(::System::String* a1, ::System::Object* a2, ::UnityEngine::SendMessageOptions a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGE__2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendMessage__3(::System::String* a1, ::UnityEngine::SendMessageOptions a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGE__3_OFFSET))(this, a1, a2);
		}

		::System::Void BroadcastMessage(::System::String* a1, ::System::Object* a2, ::UnityEngine::SendMessageOptions a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_BROADCASTMESSAGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BroadcastMessage_1(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_BROADCASTMESSAGE_1_OFFSET))(this, a1, a2);
		}

		::System::Void BroadcastMessage_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_BROADCASTMESSAGE_2_OFFSET))(this, a1);
		}

		::System::Void BroadcastMessage_3(::System::String* a1, ::UnityEngine::SendMessageOptions a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_BROADCASTMESSAGE_3_OFFSET))(this, a1, a2);
		}
	};
}
