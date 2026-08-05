#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/HideFlags.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncInstantiateOperation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { template <typename T> class AsyncInstantiateOperation_1; }

#define UNITYENGINE_OBJECT_BATCHNULLCHECK_OFFSET UNITYSDK_OFFSET(0x1EA19C00)
#define UNITYENGINE_OBJECT_CHECKNULLARGUMENT_OFFSET UNITYSDK_OFFSET(0x1EA18CF0)
#define UNITYENGINE_OBJECT_COMPAREBASEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1EA187F0)
#define UNITYENGINE_OBJECT_CURRENTTHREADISMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1EA18970)
#define UNITYENGINE_OBJECT_DESTROYIMMEDIATE_1_OFFSET UNITYSDK_OFFSET(0x1EA197B0)
#define UNITYENGINE_OBJECT_DESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1EA197A0)
#define UNITYENGINE_OBJECT_DESTROYOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1EA198B0)
#define UNITYENGINE_OBJECT_DESTROYOBJECT_OFFSET UNITYSDK_OFFSET(0x1EA19840)
#define UNITYENGINE_OBJECT_DESTROY_1_OFFSET UNITYSDK_OFFSET(0x1EA19740)
#define UNITYENGINE_OBJECT_DESTROY_OFFSET UNITYSDK_OFFSET(0x1EA19730)
#define UNITYENGINE_OBJECT_DOESOBJECTWITHINSTANCEIDEXIST_OFFSET UNITYSDK_OFFSET(0x1EA19BC0)
#define UNITYENGINE_OBJECT_DONTDESTROYONLOAD_OFFSET UNITYSDK_OFFSET(0x1EA19820)
#define UNITYENGINE_OBJECT_ENSURERUNNINGONMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1EA188E0)
#define UNITYENGINE_OBJECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA185A0)
#define UNITYENGINE_OBJECT_FINDOBJECTFROMINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1EA19BD0)
#define UNITYENGINE_OBJECT_FINDOBJECTOFTYPE_OFFSET UNITYSDK_OFFSET(0x1EA19940)
#define UNITYENGINE_OBJECT_FINDOBJECTSOFTYPEALL_OFFSET UNITYSDK_OFFSET(0x1EA19930)
#define UNITYENGINE_OBJECT_FINDOBJECTSOFTYPEINCLUDINGASSETS_OFFSET UNITYSDK_OFFSET(0x1EA19920)
#define UNITYENGINE_OBJECT_FINDOBJECTSOFTYPE_OFFSET UNITYSDK_OFFSET(0x1EA19810)
#define UNITYENGINE_OBJECT_FINDSCENEOBJECTSOFTYPE_OFFSET UNITYSDK_OFFSET(0x1EA19910)
#define UNITYENGINE_OBJECT_FORCELOADFROMINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1EA19BE0)
#define UNITYENGINE_OBJECT_GETCACHEDPTR_OFFSET UNITYSDK_OFFSET(0x1EA188B0)
#define UNITYENGINE_OBJECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA16D00)
#define UNITYENGINE_OBJECT_GETINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1EA184D0)
#define UNITYENGINE_OBJECT_GETNAME_OFFSET UNITYSDK_OFFSET(0x1EA189F0)
#define UNITYENGINE_OBJECT_GETOFFSETOFINSTANCEIDINCPLUSPLUSOBJECT_OFFSET UNITYSDK_OFFSET(0x1EA18590)
#define UNITYENGINE_OBJECT_GET_HIDEFLAGS_OFFSET UNITYSDK_OFFSET(0x1EA19830)
#define UNITYENGINE_OBJECT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EA18990)
#define UNITYENGINE_OBJECT_INSTANTIATE_1_OFFSET UNITYSDK_OFFSET(0x1EA18DD0)
#define UNITYENGINE_OBJECT_INSTANTIATE_2_OFFSET UNITYSDK_OFFSET(0x1EA191F0)
#define UNITYENGINE_OBJECT_INSTANTIATE_3_OFFSET UNITYSDK_OFFSET(0x1EA193D0)
#define UNITYENGINE_OBJECT_INSTANTIATE_4_OFFSET UNITYSDK_OFFSET(0x1EA19440)
#define UNITYENGINE_OBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1EA18A10)
#define UNITYENGINE_OBJECT_INTERNAL_CLONESINGLEWITHPARENT_OFFSET UNITYSDK_OFFSET(0x1EA19720)
#define UNITYENGINE_OBJECT_INTERNAL_CLONESINGLE_OFFSET UNITYSDK_OFFSET(0x1EA193C0)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATEASYNCWITHPARENT_OFFSET UNITYSDK_OFFSET(0x1EA19B80)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLEWITHPARENT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA19BA0)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLEWITHPARENT_OFFSET UNITYSDK_OFFSET(0x1EA19170)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA19B90)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLE_OFFSET UNITYSDK_OFFSET(0x1EA18D60)
#define UNITYENGINE_OBJECT_ISCACHEDPTRNULL_OFFSET UNITYSDK_OFFSET(0x1EA18980)
#define UNITYENGINE_OBJECT_ISNATIVEOBJECTALIVE_OFFSET UNITYSDK_OFFSET(0x1EA188C0)
#define UNITYENGINE_OBJECT_ISNULLTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1EA18890)
#define UNITYENGINE_OBJECT_ISPERSISTENT_OFFSET UNITYSDK_OFFSET(0x1EA19BB0)
#define UNITYENGINE_OBJECT_NAMECOMPARE2_OFFSET UNITYSDK_OFFSET(0x1EA199E0)
#define UNITYENGINE_OBJECT_NAMECOMPARE_OFFSET UNITYSDK_OFFSET(0x1EA199D0)
#define UNITYENGINE_OBJECT_NAMECONTAINSINTERNAL2_OFFSET UNITYSDK_OFFSET(0x1EA19B00)
#define UNITYENGINE_OBJECT_NAMECONTAINSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EA19A80)
#define UNITYENGINE_OBJECT_NAMECONTAINS_1_OFFSET UNITYSDK_OFFSET(0x1EA19A90)
#define UNITYENGINE_OBJECT_NAMECONTAINS_OFFSET UNITYSDK_OFFSET(0x1EA19A10)
#define UNITYENGINE_OBJECT_NAMEENDSWITH_OFFSET UNITYSDK_OFFSET(0x1EA19A00)
#define UNITYENGINE_OBJECT_NAMESTARTSWITH_OFFSET UNITYSDK_OFFSET(0x1EA199F0)
#define UNITYENGINE_OBJECT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EA0E8D0)
#define UNITYENGINE_OBJECT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EA12380)
#define UNITYENGINE_OBJECT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EA0E670)
#define UNITYENGINE_OBJECT_SETBASEOBJECTTHREADCHECKLEVEL_OFFSET UNITYSDK_OFFSET(0x1EA19BF0)
#define UNITYENGINE_OBJECT_SETNAME_OFFSET UNITYSDK_OFFSET(0x1EA18A00)
#define UNITYENGINE_OBJECT_SET_HIDEFLAGS_OFFSET UNITYSDK_OFFSET(0x1EA175B0)
#define UNITYENGINE_OBJECT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1EA132C0)
#define UNITYENGINE_OBJECT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1EA19B70)
#define UNITYENGINE_OBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA19B10)
#define UNITYENGINE_OBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA19C10)
#define UNITYENGINE_OBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0EAB0)

namespace UnityEngine
{
	inline static constexpr unsigned int Object_TypeDefinitionIndex = 5369;

	class Object : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_OffsetOfInstanceIDInCPlusPlusObject()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Object_TypeDefinitionIndex)->GetStaticField(0x2EC0);
		}
		// static const ::System::String* objectIsNullMessage; // 0x0
		// static const ::System::String* cloneDestroyedMessage; // 0x0
		::System::IntPtr m_CachedPtr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT__CCTOR_OFFSET))();
		}

		::System::Int32 GetInstanceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETINSTANCEID_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_EQUALS_OFFSET))(this, other);
		}

		static ::System::Boolean op_Implicit(::UnityEngine::Object* exists)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_OP_IMPLICIT_OFFSET))(exists);
		}

		static ::System::Boolean IsNullThreadSafe(::UnityEngine::Object* o, ::System::Int32 instanceId)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_ISNULLTHREADSAFE_OFFSET))(o, instanceId);
		}

		static ::System::Boolean CompareBaseObjects(::UnityEngine::Object* lhs, ::UnityEngine::Object* rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_COMPAREBASEOBJECTS_OFFSET))(lhs, rhs);
		}

		::System::Void EnsureRunningOnMainThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_ENSURERUNNINGONMAINTHREAD_OFFSET))(this);
		}

		static ::System::Boolean IsNativeObjectAlive(::UnityEngine::Object* o)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_ISNATIVEOBJECTALIVE_OFFSET))(o);
		}

		::System::IntPtr GetCachedPtr()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETCACHEDPTR_OFFSET))(this);
		}

		::System::Boolean IsCachedPtrNULL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_ISCACHEDPTRNULL_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_SET_NAME_OFFSET))(this, value);
		}

		static ::UnityEngine::Object* Instantiate(::UnityEngine::Object* original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_OFFSET))(original, position, rotation);
		}

		static ::UnityEngine::Object* Instantiate_1(::UnityEngine::Object* original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_1_OFFSET))(original, position, rotation, parent);
		}

		static ::UnityEngine::Object* Instantiate_2(::UnityEngine::Object* original)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_2_OFFSET))(original);
		}

		static ::UnityEngine::Object* Instantiate_3(::UnityEngine::Object* original, ::UnityEngine::Transform* parent)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_3_OFFSET))(original, parent);
		}

		static ::UnityEngine::Object* Instantiate_4(::UnityEngine::Object* original, ::UnityEngine::Transform* parent, ::System::Boolean instantiateInWorldSpace)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_4_OFFSET))(original, parent, instantiateInWorldSpace);
		}

		static ::System::Void Destroy(::UnityEngine::Object* obj, ::System::Single t)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROY_OFFSET))(obj, t);
		}

		static ::System::Void Destroy_1(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROY_1_OFFSET))(obj);
		}

		static ::System::Void DestroyImmediate(::UnityEngine::Object* obj, ::System::Boolean allowDestroyingAssets)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROYIMMEDIATE_OFFSET))(obj, allowDestroyingAssets);
		}

		static ::System::Void DestroyImmediate_1(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROYIMMEDIATE_1_OFFSET))(obj);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* FindObjectsOfType(::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSOFTYPE_OFFSET))(type);
		}

		static ::System::Void DontDestroyOnLoad(::UnityEngine::Object* target)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DONTDESTROYONLOAD_OFFSET))(target);
		}

		::UnityEngine::HideFlags get_hideFlags()
		{
			return ((::UnityEngine::HideFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GET_HIDEFLAGS_OFFSET))(this);
		}

		::System::Void set_hideFlags(::UnityEngine::HideFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::HideFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_SET_HIDEFLAGS_OFFSET))(this, value);
		}

		static ::System::Void DestroyObject(::UnityEngine::Object* obj, ::System::Single t)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROYOBJECT_OFFSET))(obj, t);
		}

		static ::System::Void DestroyObject_1(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROYOBJECT_1_OFFSET))(obj);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* FindSceneObjectsOfType(::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDSCENEOBJECTSOFTYPE_OFFSET))(type);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* FindObjectsOfTypeIncludingAssets(::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSOFTYPEINCLUDINGASSETS_OFFSET))(type);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* FindObjectsOfTypeAll(::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSOFTYPEALL_OFFSET))(type);
		}

		static ::System::Void CheckNullArgument(::System::Object* arg, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_CHECKNULLARGUMENT_OFFSET))(arg, message);
		}

		static ::UnityEngine::Object* FindObjectOfType(::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTOFTYPE_OFFSET))(type);
		}

		static ::System::Boolean NameCompare(::UnityEngine::Object* obj, ::System::String* name)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_NAMECOMPARE_OFFSET))(obj, name);
		}

		static ::System::Boolean NameCompare2(::UnityEngine::Object* obj, ::UnityEngine::Object* other)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_NAMECOMPARE2_OFFSET))(obj, other);
		}

		static ::System::Boolean NameStartsWith(::UnityEngine::Object* obj, ::UnityEngine::Object* other)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_NAMESTARTSWITH_OFFSET))(obj, other);
		}

		static ::System::Boolean NameEndsWith(::UnityEngine::Object* obj, ::UnityEngine::Object* other)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_NAMEENDSWITH_OFFSET))(obj, other);
		}

		static ::System::Boolean NameContains(::UnityEngine::Object* obj, ::System::String* name)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_NAMECONTAINS_OFFSET))(obj, name);
		}

		static ::System::Boolean NameContains_1(::UnityEngine::Object* obj, ::UnityEngine::Object* other)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_NAMECONTAINS_1_OFFSET))(obj, other);
		}

		static ::System::Boolean NameContainsInternal2(::UnityEngine::Object* obj, ::UnityEngine::Object* other)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_NAMECONTAINSINTERNAL2_OFFSET))(obj, other);
		}

		static ::System::Boolean NameContainsInternal(::UnityEngine::Object* obj, ::System::String* name)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_NAMECONTAINSINTERNAL_OFFSET))(obj, name);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Object* x, ::UnityEngine::Object* y)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_OP_EQUALITY_OFFSET))(x, y);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Object* x, ::UnityEngine::Object* y)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_OP_INEQUALITY_OFFSET))(x, y);
		}

		static ::System::Int32 GetOffsetOfInstanceIDInCPlusPlusObject()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETOFFSETOFINSTANCEIDINCPLUSPLUSOBJECT_OFFSET))();
		}

		static ::System::Boolean CurrentThreadIsMainThread()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_CURRENTTHREADISMAINTHREAD_OFFSET))();
		}

		static ::UnityEngine::Object* Internal_CloneSingle(::UnityEngine::Object* data)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_CLONESINGLE_OFFSET))(data);
		}

		static ::UnityEngine::Object* Internal_CloneSingleWithParent(::UnityEngine::Object* data, ::UnityEngine::Transform* parent, ::System::Boolean worldPositionStays)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_CLONESINGLEWITHPARENT_OFFSET))(data, parent, worldPositionStays);
		}

		static ::UnityEngine::AsyncInstantiateOperation* Internal_InstantiateAsyncWithParent(::UnityEngine::Object* original, ::System::Int32 count, ::UnityEngine::Transform* parent, ::System::IntPtr positions, ::System::Int32 positionsCount, ::System::IntPtr rotations, ::System::Int32 rotationsCount)
		{
			return ((::UnityEngine::AsyncInstantiateOperation*(*)(::UnityEngine::Object*, ::System::Int32, ::UnityEngine::Transform*, ::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_INSTANTIATEASYNCWITHPARENT_OFFSET))(original, count, parent, positions, positionsCount, rotations, rotationsCount);
		}

		static ::UnityEngine::Object* Internal_InstantiateSingle(::UnityEngine::Object* data, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLE_OFFSET))(data, pos, rot);
		}

		static ::UnityEngine::Object* Internal_InstantiateSingleWithParent(::UnityEngine::Object* data, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLEWITHPARENT_OFFSET))(data, parent, pos, rot);
		}

		static ::System::String* ToString_1(::UnityEngine::Object* obj)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_TOSTRING_1_OFFSET))(obj);
		}

		static ::System::String* GetName(::UnityEngine::Object* obj)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETNAME_OFFSET))(obj);
		}

		static ::System::Boolean IsPersistent(::UnityEngine::Object* obj)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_ISPERSISTENT_OFFSET))(obj);
		}

		static ::System::Void SetName(::UnityEngine::Object* obj, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_SETNAME_OFFSET))(obj, name);
		}

		static ::System::Boolean DoesObjectWithInstanceIDExist(::System::Int32 instanceID)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DOESOBJECTWITHINSTANCEIDEXIST_OFFSET))(instanceID);
		}

		static ::UnityEngine::Object* FindObjectFromInstanceID(::System::Int32 instanceID)
		{
			return ((::UnityEngine::Object*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTFROMINSTANCEID_OFFSET))(instanceID);
		}

		static ::UnityEngine::Object* ForceLoadFromInstanceID(::System::Int32 instanceID)
		{
			return ((::UnityEngine::Object*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FORCELOADFROMINSTANCEID_OFFSET))(instanceID);
		}

		static ::System::Void SetBaseObjectThreadCheckLevel(::System::Int32 level)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_SETBASEOBJECTTHREADCHECKLEVEL_OFFSET))(level);
		}

		static ::System::Void BatchNullCheck(::System::Collections::Generic::List_1<::UnityEngine::Object*>* objects, ::System::Void* result)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Object*>*, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_BATCHNULLCHECK_OFFSET))(objects, result);
		}

		static ::UnityEngine::Object* Internal_InstantiateSingle_Injected(::UnityEngine::Object* data, ::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion& rot)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLE_INJECTED_OFFSET))(data, pos, rot);
		}

		static ::UnityEngine::Object* Internal_InstantiateSingleWithParent_Injected(::UnityEngine::Object* data, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion& rot)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLEWITHPARENT_INJECTED_OFFSET))(data, parent, pos, rot);
		}
	};
}
