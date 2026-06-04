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

#define UNITYENGINE_OBJECT_CHECKNULLARGUMENT_OFFSET UNITYSDK_OFFSET(0x1B2B3700)
#define UNITYENGINE_OBJECT_COMPAREBASEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1B2B3440)
#define UNITYENGINE_OBJECT_CURRENTTHREADISMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1B2B34F0)
#define UNITYENGINE_OBJECT_DESTROYIMMEDIATE_1_OFFSET UNITYSDK_OFFSET(0x1B2B3A10)
#define UNITYENGINE_OBJECT_DESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1B2B3A00)
#define UNITYENGINE_OBJECT_DESTROYOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1B2B3A80)
#define UNITYENGINE_OBJECT_DESTROYOBJECT_OFFSET UNITYSDK_OFFSET(0x1B2B3A70)
#define UNITYENGINE_OBJECT_DESTROY_1_OFFSET UNITYSDK_OFFSET(0x1B2B39F0)
#define UNITYENGINE_OBJECT_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B2B39E0)
#define UNITYENGINE_OBJECT_DOESOBJECTWITHINSTANCEIDEXIST_OFFSET UNITYSDK_OFFSET(0x1B2B3BD0)
#define UNITYENGINE_OBJECT_DONTDESTROYONLOAD_OFFSET UNITYSDK_OFFSET(0x1B2B3A50)
#define UNITYENGINE_OBJECT_ENSURERUNNINGONMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1B2B3480)
#define UNITYENGINE_OBJECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B2B3360)
#define UNITYENGINE_OBJECT_FINDOBJECTFROMINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1B2B3BE0)
#define UNITYENGINE_OBJECT_FINDOBJECTOFTYPE_OFFSET UNITYSDK_OFFSET(0x1B2B3AC0)
#define UNITYENGINE_OBJECT_FINDOBJECTSBYTYPE_1_OFFSET UNITYSDK_OFFSET(0x1B2B3A30)
#define UNITYENGINE_OBJECT_FINDOBJECTSBYTYPE_OFFSET UNITYSDK_OFFSET(0x1B2B3A20)
#define UNITYENGINE_OBJECT_FINDOBJECTSOFTYPEALL_OFFSET UNITYSDK_OFFSET(0x1B2B3AB0)
#define UNITYENGINE_OBJECT_FINDOBJECTSOFTYPEINCLUDINGASSETS_OFFSET UNITYSDK_OFFSET(0x1B2B3AA0)
#define UNITYENGINE_OBJECT_FINDOBJECTSOFTYPE_OFFSET UNITYSDK_OFFSET(0x1B2B3A40)
#define UNITYENGINE_OBJECT_FINDSCENEOBJECTSOFTYPE_OFFSET UNITYSDK_OFFSET(0x1B2B3A90)
#define UNITYENGINE_OBJECT_FORCELOADFROMINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1B2B3BF0)
#define UNITYENGINE_OBJECT_GETCACHEDPTR_OFFSET UNITYSDK_OFFSET(0x1B2B3520)
#define UNITYENGINE_OBJECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B2B3350)
#define UNITYENGINE_OBJECT_GETINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1B2B3300)
#define UNITYENGINE_OBJECT_GETNAME_OFFSET UNITYSDK_OFFSET(0x1B2B3530)
#define UNITYENGINE_OBJECT_GETNATIVENAME_OFFSET UNITYSDK_OFFSET(0x1B2B3560)
#define UNITYENGINE_OBJECT_GETOFFSETOFINSTANCEIDINCPLUSPLUSOBJECT_OFFSET UNITYSDK_OFFSET(0x1B2B3340)
#define UNITYENGINE_OBJECT_GETTYPENAMEWITHNATIVESTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B3BB0)
#define UNITYENGINE_OBJECT_GETTYPENAMEWITHNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x1B2B3590)
#define UNITYENGINE_OBJECT_GET_HIDEFLAGS_OFFSET UNITYSDK_OFFSET(0x1B2B3A60)
#define UNITYENGINE_OBJECT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B2AC970)
#define UNITYENGINE_OBJECT_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x1B2B3C00)
#define UNITYENGINE_OBJECT_INSTANTIATE_1_OFFSET UNITYSDK_OFFSET(0x1B2B3750)
#define UNITYENGINE_OBJECT_INSTANTIATE_2_OFFSET UNITYSDK_OFFSET(0x1B2B3850)
#define UNITYENGINE_OBJECT_INSTANTIATE_3_OFFSET UNITYSDK_OFFSET(0x1B2B38F0)
#define UNITYENGINE_OBJECT_INSTANTIATE_4_OFFSET UNITYSDK_OFFSET(0x1B2B3900)
#define UNITYENGINE_OBJECT_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1B2B35C0)
#define UNITYENGINE_OBJECT_INTERNAL_CLONESINGLEWITHPARENT_OFFSET UNITYSDK_OFFSET(0x1B2B39D0)
#define UNITYENGINE_OBJECT_INTERNAL_CLONESINGLE_OFFSET UNITYSDK_OFFSET(0x1B2B38E0)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x1B2B3C60)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLEWITHPARENT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B3BA0)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLEWITHPARENT_OFFSET UNITYSDK_OFFSET(0x1B2B3840)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B3B90)
#define UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLE_OFFSET UNITYSDK_OFFSET(0x1B2B3740)
#define UNITYENGINE_OBJECT_INTERNAL_SETSHADERASYNCCOMPILECONTEXT_OFFSET UNITYSDK_OFFSET(0x1B2B3C70)
#define UNITYENGINE_OBJECT_ISNATIVEOBJECTALIVE_OFFSET UNITYSDK_OFFSET(0x1B2B3500)
#define UNITYENGINE_OBJECT_ISPERSISTENT_OFFSET UNITYSDK_OFFSET(0x1B2B3BC0)
#define UNITYENGINE_OBJECT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2B3B10)
#define UNITYENGINE_OBJECT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B2B3420)
#define UNITYENGINE_OBJECT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2B3B50)
#define UNITYENGINE_OBJECT_SETNAME_OFFSET UNITYSDK_OFFSET(0x1B2B3550)
#define UNITYENGINE_OBJECT_SETSHADERASYNCCOMPILECONTEXT_OFFSET UNITYSDK_OFFSET(0x1B2B3C80)
#define UNITYENGINE_OBJECT_SET_HIDEFLAGS_OFFSET UNITYSDK_OFFSET(0x1B2B11B0)
#define UNITYENGINE_OBJECT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B2B3540)
#define UNITYENGINE_OBJECT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1B2B3B00)
#define UNITYENGINE_OBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B2B3AF0)
#define UNITYENGINE_OBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2B3E10)
#define UNITYENGINE_OBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B3E00)

namespace UnityEngine
{
	inline static constexpr unsigned int Object_TypeDefinitionIndex = 4345;

	class Object : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_OffsetOfInstanceIDInCPlusPlusObject()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Object_TypeDefinitionIndex)->GetStaticField(0xA1F0);
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

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_EQUALS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Implicit(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean CompareBaseObjects(::UnityEngine::Object* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_COMPAREBASEOBJECTS_OFFSET))(a1, a2);
		}

		::System::Void EnsureRunningOnMainThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_ENSURERUNNINGONMAINTHREAD_OFFSET))(this);
		}

		static ::System::Boolean IsNativeObjectAlive(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_ISNATIVEOBJECTALIVE_OFFSET))(a1);
		}

		::System::IntPtr GetCachedPtr()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETCACHEDPTR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_SET_NAME_OFFSET))(this, a1);
		}

		::UnityEngine::NativeString GetNativeName()
		{
			return ((::UnityEngine::NativeString(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETNATIVENAME_OFFSET))(this);
		}

		static ::UnityEngine::Object* Instantiate(::UnityEngine::Object* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Object* Instantiate_1(::UnityEngine::Object* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Transform* a4)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Object* Instantiate_2(::UnityEngine::Object* a1)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_2_OFFSET))(a1);
		}

		static ::UnityEngine::Object* Instantiate_3(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_3_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Object* Instantiate_4(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATE_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Destroy(::UnityEngine::Object* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROY_OFFSET))(a1, a2);
		}

		static ::System::Void Destroy_1(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROY_1_OFFSET))(a1);
		}

		static ::System::Void DestroyImmediate(::UnityEngine::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROYIMMEDIATE_OFFSET))(a1, a2);
		}

		static ::System::Void DestroyImmediate_1(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROYIMMEDIATE_1_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* FindObjectsByType(::System::Type* a1, ::UnityEngine::FindObjectsSortMode a2)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*, ::UnityEngine::FindObjectsSortMode))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSBYTYPE_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* FindObjectsByType_1(::System::Type* a1, ::UnityEngine::FindObjectsInactive a2, ::UnityEngine::FindObjectsSortMode a3)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*, ::UnityEngine::FindObjectsInactive, ::UnityEngine::FindObjectsSortMode))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSBYTYPE_1_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* FindObjectsOfType(::System::Type* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSOFTYPE_OFFSET))(a1);
		}

		static ::System::Void DontDestroyOnLoad(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DONTDESTROYONLOAD_OFFSET))(a1);
		}

		::UnityEngine::HideFlags get_hideFlags()
		{
			return ((::UnityEngine::HideFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GET_HIDEFLAGS_OFFSET))(this);
		}

		::System::Void set_hideFlags(::UnityEngine::HideFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::HideFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_SET_HIDEFLAGS_OFFSET))(this, a1);
		}

		static ::System::Void DestroyObject(::UnityEngine::Object* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROYOBJECT_OFFSET))(a1, a2);
		}

		static ::System::Void DestroyObject_1(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DESTROYOBJECT_1_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* FindSceneObjectsOfType(::System::Type* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDSCENEOBJECTSOFTYPE_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* FindObjectsOfTypeIncludingAssets(::System::Type* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSOFTYPEINCLUDINGASSETS_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* FindObjectsOfTypeAll(::System::Type* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTSOFTYPEALL_OFFSET))(a1);
		}

		static ::System::Void CheckNullArgument(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_CHECKNULLARGUMENT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Object* FindObjectOfType(::System::Type* a1)
		{
			return ((::UnityEngine::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTOFTYPE_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Object* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Object* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetOffsetOfInstanceIDInCPlusPlusObject()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETOFFSETOFINSTANCEIDINCPLUSPLUSOBJECT_OFFSET))();
		}

		static ::System::Boolean CurrentThreadIsMainThread()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_CURRENTTHREADISMAINTHREAD_OFFSET))();
		}

		static ::UnityEngine::Object* Internal_CloneSingle(::UnityEngine::Object* a1)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_CLONESINGLE_OFFSET))(a1);
		}

		static ::UnityEngine::Object* Internal_CloneSingleWithParent(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_CLONESINGLEWITHPARENT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Object* Internal_InstantiateSingle(::UnityEngine::Object* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Object* Internal_InstantiateSingleWithParent(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLEWITHPARENT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* ToString_1(::UnityEngine::Object* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_TOSTRING_1_OFFSET))(a1);
		}

		static ::System::String* GetName(::UnityEngine::Object* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETNAME_OFFSET))(a1);
		}

		static ::UnityEngine::NativeString GetTypeNameWithNativeString(::UnityEngine::Object* a1)
		{
			return ((::UnityEngine::NativeString(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETTYPENAMEWITHNATIVESTRING_OFFSET))(a1);
		}

		static ::System::Boolean IsPersistent(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_ISPERSISTENT_OFFSET))(a1);
		}

		static ::System::Void SetName(::UnityEngine::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_SETNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean DoesObjectWithInstanceIDExist(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_DOESOBJECTWITHINSTANCEIDEXIST_OFFSET))(a1);
		}

		static ::UnityEngine::Object* FindObjectFromInstanceID(::System::Int32 a1)
		{
			return ((::UnityEngine::Object*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FINDOBJECTFROMINSTANCEID_OFFSET))(a1);
		}

		static ::UnityEngine::Object* ForceLoadFromInstanceID(::System::Int32 a1)
		{
			return ((::UnityEngine::Object*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_FORCELOADFROMINSTANCEID_OFFSET))(a1);
		}

		static ::UnityEngine::ObjectInstantiateRequest* InstantiateAsync(::UnityEngine::Object* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::ObjectInstantiateRequest*(*)(::UnityEngine::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INSTANTIATEASYNC_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ObjectInstantiateRequest* Internal_InstantiateAsync(::UnityEngine::Object* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::ObjectInstantiateRequest*(*)(::UnityEngine::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_INSTANTIATEASYNC_OFFSET))(a1, a2);
		}

		static ::System::Void Internal_SetShaderAsyncCompileContext(::System::Array* a1, ::System::Int32 a2, ::System::Array* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_SETSHADERASYNCCOMPILECONTEXT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetShaderAsyncCompileContext(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderKeyword>* a1, ::Il2CppArray<::UnityEngine::Rendering::ShaderTagId>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderKeyword>*, ::Il2CppArray<::UnityEngine::Rendering::ShaderTagId>*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_SETSHADERASYNCCOMPILECONTEXT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Object* Internal_InstantiateSingle_Injected(::UnityEngine::Object* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLE_INJECTED_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Object* Internal_InstantiateSingleWithParent_Injected(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_INTERNAL_INSTANTIATESINGLEWITHPARENT_INJECTED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GetTypeNameWithNativeString_Injected(::UnityEngine::Object* a1, ::UnityEngine::NativeString& a2)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::NativeString&))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECT_GETTYPENAMEWITHNATIVESTRING_INJECTED_OFFSET))(a1, a2);
		}
	};
}
