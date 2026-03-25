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

#define UNITYENGINE_COMPONENT_BROADCASTMESSAGE_1_OFFSET UNITYSDK_OFFSET(0x189F8E00)
#define UNITYENGINE_COMPONENT_BROADCASTMESSAGE_2_OFFSET UNITYSDK_OFFSET(0x189F8E10)
#define UNITYENGINE_COMPONENT_BROADCASTMESSAGE_3_OFFSET UNITYSDK_OFFSET(0x189F8E20)
#define UNITYENGINE_COMPONENT_BROADCASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x189F8DF0)
#define UNITYENGINE_COMPONENT_COMPARETAG_OFFSET UNITYSDK_OFFSET(0x189F8D30)
#define UNITYENGINE_COMPONENT_GETCOMPONENTFASTPATH_OFFSET UNITYSDK_OFFSET(0x189F86D0)
#define UNITYENGINE_COMPONENT_GETCOMPONENTINCHILDREN_1_OFFSET UNITYSDK_OFFSET(0x189F87C0)
#define UNITYENGINE_COMPONENT_GETCOMPONENTINCHILDREN_OFFSET UNITYSDK_OFFSET(0x189F8770)
#define UNITYENGINE_COMPONENT_GETCOMPONENTINPARENT_OFFSET UNITYSDK_OFFSET(0x189F8970)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSCOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0x189F8C30)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSFORLISTINTERNAL_OFFSET UNITYSDK_OFFSET(0x189F8C10)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_1_OFFSET UNITYSDK_OFFSET(0x189F88F0)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_OFFSET UNITYSDK_OFFSET(0x189F8800)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSINPARENT_1_OFFSET UNITYSDK_OFFSET(0x189F8AA0)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSINPARENT_OFFSET UNITYSDK_OFFSET(0x189F89B0)
#define UNITYENGINE_COMPONENT_GETCOMPONENTSWITHARRAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x189F8C20)
#define UNITYENGINE_COMPONENT_GETCOMPONENTS_1_OFFSET UNITYSDK_OFFSET(0x189F8C40)
#define UNITYENGINE_COMPONENT_GETCOMPONENTS_2_OFFSET UNITYSDK_OFFSET(0x189F8C50)
#define UNITYENGINE_COMPONENT_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x189F8B20)
#define UNITYENGINE_COMPONENT_GETCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x189F8760)
#define UNITYENGINE_COMPONENT_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x189F8690)
#define UNITYENGINE_COMPONENT_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x189F8680)
#define UNITYENGINE_COMPONENT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x189F8CB0)
#define UNITYENGINE_COMPONENT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x189F8670)
#define UNITYENGINE_COMPONENT_SENDMESSAGEUPWARDS_1_OFFSET UNITYSDK_OFFSET(0x189F8D80)
#define UNITYENGINE_COMPONENT_SENDMESSAGEUPWARDS_2_OFFSET UNITYSDK_OFFSET(0x189F8D90)
#define UNITYENGINE_COMPONENT_SENDMESSAGEUPWARDS_3_OFFSET UNITYSDK_OFFSET(0x189F8DA0)
#define UNITYENGINE_COMPONENT_SENDMESSAGEUPWARDS_OFFSET UNITYSDK_OFFSET(0x189F8D70)
#define UNITYENGINE_COMPONENT_SENDMESSAGE__1_OFFSET UNITYSDK_OFFSET(0x189F8DD0)
#define UNITYENGINE_COMPONENT_SENDMESSAGE__2_OFFSET UNITYSDK_OFFSET(0x189F8DC0)
#define UNITYENGINE_COMPONENT_SENDMESSAGE__3_OFFSET UNITYSDK_OFFSET(0x189F8DE0)
#define UNITYENGINE_COMPONENT_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0x189F8DB0)
#define UNITYENGINE_COMPONENT_SET_TAG_OFFSET UNITYSDK_OFFSET(0x189F8CF0)
#define UNITYENGINE_COMPONENT_TRYGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x189F86E0)
#define UNITYENGINE_COMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x189F8E30)

namespace UnityEngine
{
	inline static constexpr unsigned int Component_TypeDefinitionIndex = 4126;

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

		::UnityEngine::Component* GetComponent(::System::Type* type)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENT_OFFSET))(this, type);
		}

		::System::Void GetComponentFastPath(::System::Type* type, ::System::IntPtr oneFurtherThanResultValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTFASTPATH_OFFSET))(this, type, oneFurtherThanResultValue);
		}

		::System::Boolean TryGetComponent(::System::Type* type, ::UnityEngine::Component*& component)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::UnityEngine::Component*&))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_TRYGETCOMPONENT_OFFSET))(this, type, component);
		}

		::UnityEngine::Component* GetComponent_1(::System::String* type)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENT_1_OFFSET))(this, type);
		}

		::UnityEngine::Component* GetComponentInChildren(::System::Type* t, ::System::Boolean includeInactive)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTINCHILDREN_OFFSET))(this, t, includeInactive);
		}

		::UnityEngine::Component* GetComponentInChildren_1(::System::Type* t)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTINCHILDREN_1_OFFSET))(this, t);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInChildren(::System::Type* t, ::System::Boolean includeInactive)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_OFFSET))(this, t, includeInactive);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInChildren_1(::System::Type* t)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSINCHILDREN_1_OFFSET))(this, t);
		}

		::UnityEngine::Component* GetComponentInParent(::System::Type* t)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTINPARENT_OFFSET))(this, t);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInParent(::System::Type* t, ::System::Boolean includeInactive)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSINPARENT_OFFSET))(this, t, includeInactive);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInParent_1(::System::Type* t)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSINPARENT_1_OFFSET))(this, t);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponents(::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTS_OFFSET))(this, type);
		}

		::System::Void GetComponentsForListInternal(::System::Type* searchType, ::System::Object* resultList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSFORLISTINTERNAL_OFFSET))(this, searchType, resultList);
		}

		::System::Int32 GetComponentsWithArrayInternal(::System::Type* searchType, ::System::Array* array)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Type*, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSWITHARRAYINTERNAL_OFFSET))(this, searchType, array);
		}

		::System::Int32 GetComponentsCountInternal(::System::Type* searchType)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTSCOUNTINTERNAL_OFFSET))(this, searchType);
		}

		::System::Void GetComponents_1(::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::Component*>* results)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTS_1_OFFSET))(this, type, results);
		}

		::System::Boolean GetComponents_2(::System::Type* type, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>* results)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GETCOMPONENTS_2_OFFSET))(this, type, results);
		}

		::System::String* get_tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_GET_TAG_OFFSET))(this);
		}

		::System::Void set_tag(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SET_TAG_OFFSET))(this, value);
		}

		::System::Boolean CompareTag(::System::String* tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_COMPARETAG_OFFSET))(this, tag);
		}

		::System::Void SendMessageUpwards(::System::String* methodName, ::System::Object* value, ::UnityEngine::SendMessageOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGEUPWARDS_OFFSET))(this, methodName, value, options);
		}

		::System::Void SendMessageUpwards_1(::System::String* methodName, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGEUPWARDS_1_OFFSET))(this, methodName, value);
		}

		::System::Void SendMessageUpwards_2(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGEUPWARDS_2_OFFSET))(this, methodName);
		}

		::System::Void SendMessageUpwards_3(::System::String* methodName, ::UnityEngine::SendMessageOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGEUPWARDS_3_OFFSET))(this, methodName, options);
		}

		::System::Void SendMessage_(::System::String* methodName, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGE__OFFSET))(this, methodName, value);
		}

		::System::Void SendMessage__1(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGE__1_OFFSET))(this, methodName);
		}

		::System::Void SendMessage__2(::System::String* methodName, ::System::Object* value, ::UnityEngine::SendMessageOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGE__2_OFFSET))(this, methodName, value, options);
		}

		::System::Void SendMessage__3(::System::String* methodName, ::UnityEngine::SendMessageOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_SENDMESSAGE__3_OFFSET))(this, methodName, options);
		}

		::System::Void BroadcastMessage(::System::String* methodName, ::System::Object* parameter, ::UnityEngine::SendMessageOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_BROADCASTMESSAGE_OFFSET))(this, methodName, parameter, options);
		}

		::System::Void BroadcastMessage_1(::System::String* methodName, ::System::Object* parameter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_BROADCASTMESSAGE_1_OFFSET))(this, methodName, parameter);
		}

		::System::Void BroadcastMessage_2(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_BROADCASTMESSAGE_2_OFFSET))(this, methodName);
		}

		::System::Void BroadcastMessage_3(::System::String* methodName, ::UnityEngine::SendMessageOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPONENT_BROADCASTMESSAGE_3_OFFSET))(this, methodName, options);
		}
	};
}
