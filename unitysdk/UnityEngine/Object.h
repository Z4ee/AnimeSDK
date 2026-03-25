#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FindObjectsInactive.h"
#include "unitysdk/UnityEngine/FindObjectsSortMode.h"
#include "unitysdk/UnityEngine/HideFlags.h"
#include "unitysdk/UnityEngine/NativeString.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rendering/ShaderKeyword.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Array; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ObjectInstantiateRequest; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_OBJECT_CHECKNULLARGUMENT_OFFSET UNITYSDK_OFFSET(0x18A29580)
#define UNITYENGINE_OBJECT_COMPAREBASEOBJECTS_OFFSET UNITYSDK_OFFSET(0x18A292D0)
#define UNITYENGINE_OBJECT_CURRENTTHREADISMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x18A29380)
#define UNITYENGINE_OBJECT_DESTROYIMMEDIATE_1_OFFSET UNITYSDK_OFFSET(0x18A29860)
#define UNITYENGINE_OBJECT_DESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x18A29850)
#define UNITYENGINE_OBJECT_DESTROYOBJECT_1_OFFSET UNITYSDK_OFFSET(0x18A298D0)
#define UNITYENGINE_OBJECT_DESTROYOBJECT_OFFSET UNITYSDK_OFFSET(0x18A298C0)
#define UNITYENGINE_OBJECT_DESTROY_1_OFFSET UNITYSDK_OFFSET(0x18A29840)
#define UNITYENGINE_OBJECT_DESTROY_OFFSET UNITYSDK_OFFSET(0x18A29830)
#define UNITYENGINE_OBJECT_DOESOBJECTWITHINSTANCEIDEXIST_OFFSET UNITYSDK_OFFSET(0x18A29A20)
#define UNITYENGINE_OBJECT_DONTDESTROYONLOAD_OFFSET UNITYSDK_OFFSET(0x18A298A0)
#define UNITYENGINE_OBJECT_ENSURERUNNINGONMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x18A29310)
#define UNITYENGINE_OBJECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x18A29240)
#define UNITYENGINE_OBJECT_FINDOBJECTFROMINSTANCEID_OFFSET UNITYSDK_OFFSET(0x18A29A30)
#define UNITYENGINE_OBJECT_FINDOBJECTOFTYPE_OFFSET UNITYSDK_OFFSET(0x18A29910)
#define UNITYENGINE_OBJECT_FINDOBJECTSBYTYPE_1_OFFSET UNITYSDK_OFFSET(0x18A29880)
#define UNITYENGINE_OBJECT_FINDOBJECTSBYTYPE_OFFSET UNITYSDK_OFFSET(0x18A29870)
#define UNITYENGINE_OBJECT_FINDOBJECTSOFTYPEALL_OFFSET UNITYSDK_OFFSET(0x18A29900)
#define UNITYENGINE_OBJECT_FINDOBJECTSOFTYPEINCLUDINGASSETS_OFFSET UNITYSDK_OFFSET(0x18A298F0)
#define UNITYENGINE_OBJECT_FINDOBJECTSOFTYPE_OFFSET UNITYSDK_OFFSET(0x18A29890)
#define UNITYENGINE_OBJECT_FINDSCENEOBJECTSOFTYPE_OFFSET UNITYSDK_OFFSET(0x18A298E0)
#define UNITYENGINE_OBJECT_FORCELOADFROMINSTANCEID_OFFSET UNITYSDK_OFFSET(0x18A29A40)
#define UNITYENGINE_OBJECT_GETCACHEDPTR_OFFSET UNITYSDK_OFFSET(0x18A293B0)
#define UNITYENGINE_OBJECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18A29230)
#define UNITYENGINE_OBJECT_GETINSTANCEID_OFFSET UNITYSDK_OFFSET(0x18A291E0)
#define UNITYENGINE_OBJECT_GETNAME_OFFSET UNITYSDK_OFFSET(0x18A293C0)
#define UNITYENGINE_OBJECT_GETNATIVENAME_OFFSET UNITYSDK_OFFSET(0x18A293F0)
#define UNITYENGINE_OBJECT_GETOFFSETOFINSTANCEIDINCPLUSPLUSOBJECT_OFFSET UNITYSDK_OFFSET(0x18A29220)
#define UNITYENGINE_OBJECT_GETTYPENAMEWITHNATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A29A00)
#define UNITYENGINE_OBJECT_GETTYPENAMEWITHNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x18A29420)
#define UNITYENGINE_OBJECT_GET_HIDEFLAGS_OFFSET UNITYSDK_OFFSET(0x18A298B0)
#define UNITYENGINE_OBJECT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18A22610)
#define UNITYENGINE_OBJECT_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x18A29A50)
#define UNITYENGINE_OBJECT_INSTANTIATE_1_OFFSET UNITYSDK_OFFSET(0x18A295D0)
#define UNITYENGINE_OBJECT_INSTANTIATE_2_OFFSET UNITYSDK_OFFSET(0x18A296D0)
#define UNITYENGINE_OBJECT_INSTANTIATE_3_OFFSET UNITYSDK_OFFSET(0x18A29770)
#define UNITYENGINE_OBJECT_INSTANTIATE_4_OFFSET UNITYSDK_OFFSET(0x18A29780)
#define UNITYENGINE_OBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x18A29450)
#define UNITYENGINE_OBJECT_INTERNAL_CLONESINGLEWITHPARENT_OFFSET UNITYSDK_OFFSET(0x18A29820)
#define UNITYENGINE_OBJECT_INTERNAL_CLONESINGLE_OFFSET UNITYSDK_OFFSET(0x18A29760)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x18A29AB0)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLEWITHPARENT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A299F0)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLEWITHPARENT_OFFSET UNITYSDK_OFFSET(0x18A296C0)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A299E0)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLE_OFFSET UNITYSDK_OFFSET(0x18A295C0)
#define UNITYENGINE_OBJECT_INTERNAL_SETSHADERASYNCCOMPILECONTEXT_OFFSET UNITYSDK_OFFSET(0x18A29AC0)
#define UNITYENGINE_OBJECT_ISNATIVEOBJECTALIVE_OFFSET UNITYSDK_OFFSET(0x18A29390)
#define UNITYENGINE_OBJECT_ISPERSISTENT_OFFSET UNITYSDK_OFFSET(0x18A29A10)
#define UNITYENGINE_OBJECT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18A29960)
#define UNITYENGINE_OBJECT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x18A292B0)
#define UNITYENGINE_OBJECT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18A299A0)
#define UNITYENGINE_OBJECT_SETNAME_OFFSET UNITYSDK_OFFSET(0x18A293E0)
#define UNITYENGINE_OBJECT_SETSHADERASYNCCOMPILECONTEXT_OFFSET UNITYSDK_OFFSET(0x18A29AD0)
#define UNITYENGINE_OBJECT_SET_HIDEFLAGS_OFFSET UNITYSDK_OFFSET(0x18A26FD0)
#define UNITYENGINE_OBJECT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x18A293D0)
#define UNITYENGINE_OBJECT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x18A29950)
#define UNITYENGINE_OBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18A29940)
#define UNITYENGINE_OBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A29C60)
#define UNITYENGINE_OBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18A29C50)

namespace UnityEngine
{
	inline static constexpr unsigned int Object_TypeDefinitionIndex = 4169;

	class Object : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_OffsetOfInstanceIDInCPlusPlusObject()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Object_TypeDefinitionIndex)->GetStaticField(0x5830);
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

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_SET_NAME_OFFSET))(this, value);
		}

		::UnityEngine::NativeString GetNativeName()
		{
			return ((::UnityEngine::NativeString(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETNATIVENAME_OFFSET))(this);
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

		static ::Il2CppArray<::UnityEngine::Object*>* FindObjectsByType(::System::Type* type, ::UnityEngine::FindObjectsSortMode sortMode)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*, ::UnityEngine::FindObjectsSortMode))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSBYTYPE_OFFSET))(type, sortMode);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* FindObjectsByType_1(::System::Type* type, ::UnityEngine::FindObjectsInactive findObjectsInactive, ::UnityEngine::FindObjectsSortMode sortMode)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*, ::UnityEngine::FindObjectsInactive, ::UnityEngine::FindObjectsSortMode))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSBYTYPE_1_OFFSET))(type, findObjectsInactive, sortMode);
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

		static ::UnityEngine::NativeString GetTypeNameWithNativeString(::UnityEngine::Object* obj)
		{
			return ((::UnityEngine::NativeString(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETTYPENAMEWITHNATIVESTRING_OFFSET))(obj);
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

		static ::UnityEngine::ObjectInstantiateRequest* InstantiateAsync(::UnityEngine::Object* original, ::System::Boolean asyncshadercompile)
		{
			return ((::UnityEngine::ObjectInstantiateRequest*(*)(::UnityEngine::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATEASYNC_OFFSET))(original, asyncshadercompile);
		}

		static ::UnityEngine::ObjectInstantiateRequest* Internal_InstantiateAsync(::UnityEngine::Object* original, ::System::Boolean asyncshadercompile)
		{
			return ((::UnityEngine::ObjectInstantiateRequest*(*)(::UnityEngine::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_INSTANTIATEASYNC_OFFSET))(original, asyncshadercompile);
		}

		static ::System::Void Internal_SetShaderAsyncCompileContext(::System::Array* keywords, ::System::Int32 numKey, ::System::Array* tags, ::System::Int32 numTag)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_SETSHADERASYNCCOMPILECONTEXT_OFFSET))(keywords, numKey, tags, numTag);
		}

		static ::System::Void SetShaderAsyncCompileContext(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderKeyword>* keywords, ::Il2CppArray<::UnityEngine::Rendering::ShaderTagId>* tagids)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderKeyword>*, ::Il2CppArray<::UnityEngine::Rendering::ShaderTagId>*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_SETSHADERASYNCCOMPILECONTEXT_OFFSET))(keywords, tagids);
		}

		static ::UnityEngine::Object* Internal_InstantiateSingle_Injected(::UnityEngine::Object* data, ::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion& rot)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLE_INJECTED_OFFSET))(data, pos, rot);
		}

		static ::UnityEngine::Object* Internal_InstantiateSingleWithParent_Injected(::UnityEngine::Object* data, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion& rot)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLEWITHPARENT_INJECTED_OFFSET))(data, parent, pos, rot);
		}

		static ::System::Void GetTypeNameWithNativeString_Injected(::UnityEngine::Object* obj, ::UnityEngine::NativeString& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETTYPENAMEWITHNATIVESTRING_INJECTED_OFFSET))(obj, ret);
		}
	};
}
