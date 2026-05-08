#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GlobalJavaObjectRef; }

#define UNITYENGINE_ANDROIDREFLECTION_GETCONSTRUCTORMEMBER_OFFSET UNITYSDK_OFFSET(0x1BB437B0)
#define UNITYENGINE_ANDROIDREFLECTION_GETFIELDCLASS_OFFSET UNITYSDK_OFFSET(0x1BB441E0)
#define UNITYENGINE_ANDROIDREFLECTION_GETFIELDMEMBER_OFFSET UNITYSDK_OFFSET(0x1BB43E10)
#define UNITYENGINE_ANDROIDREFLECTION_GETFIELDSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1BB442B0)
#define UNITYENGINE_ANDROIDREFLECTION_GETMETHODID_OFFSET UNITYSDK_OFFSET(0x1BB43660)
#define UNITYENGINE_ANDROIDREFLECTION_GETMETHODMEMBER_OFFSET UNITYSDK_OFFSET(0x1BB43A40)
#define UNITYENGINE_ANDROIDREFLECTION_GETSTATICMETHODID_OFFSET UNITYSDK_OFFSET(0x1BB43510)
#define UNITYENGINE_ANDROIDREFLECTION_ISASSIGNABLEFROM_OFFSET UNITYSDK_OFFSET(0x1BB434E0)
#define UNITYENGINE_ANDROIDREFLECTION_ISPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1BB434B0)
#define UNITYENGINE_ANDROIDREFLECTION_NEWPROXYINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BB443D0)
#define UNITYENGINE_ANDROIDREFLECTION_SETNATIVEEXCEPTIONONPROXY_OFFSET UNITYSDK_OFFSET(0x1BB42440)
#define UNITYENGINE_ANDROIDREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB44520)
#define UNITYENGINE_ANDROIDREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB44510)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidReflection_TypeDefinitionIndex = 37646;

	class AndroidReflection : public ::System::Object
	{
	public:
		static ::UnityEngine::GlobalJavaObjectRef** StaticGet_s_ReflectionHelperClass()
		{
			return (::UnityEngine::GlobalJavaObjectRef**)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x291F0);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperGetFieldID()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x9350);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperGetFieldSignature()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x9358);
		}
		static ::System::IntPtr* StaticGet_s_FieldGetDeclaringClass()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x9360);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperGetConstructorID()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x9368);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperGetMethodID()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x9370);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperSetNativeExceptionOnProxy()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x9378);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperNewProxyInstance()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x9380);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsPrimitive(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_ISPRIMITIVE_OFFSET))(t);
		}

		static ::System::Boolean IsAssignableFrom(::System::Type* t, ::System::Type* from)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_ISASSIGNABLEFROM_OFFSET))(t, from);
		}

		static ::System::IntPtr GetStaticMethodID(::System::String* clazz, ::System::String* methodName, ::System::String* signature)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETSTATICMETHODID_OFFSET))(clazz, methodName, signature);
		}

		static ::System::IntPtr GetMethodID(::System::String* clazz, ::System::String* methodName, ::System::String* signature)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETMETHODID_OFFSET))(clazz, methodName, signature);
		}

		static ::System::IntPtr GetConstructorMember(::System::IntPtr jclass, ::System::String* signature)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETCONSTRUCTORMEMBER_OFFSET))(jclass, signature);
		}

		static ::System::IntPtr GetMethodMember(::System::IntPtr jclass, ::System::String* methodName, ::System::String* signature, ::System::Boolean isStatic)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETMETHODMEMBER_OFFSET))(jclass, methodName, signature, isStatic);
		}

		static ::System::IntPtr GetFieldMember(::System::IntPtr jclass, ::System::String* fieldName, ::System::String* signature, ::System::Boolean isStatic)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETFIELDMEMBER_OFFSET))(jclass, fieldName, signature, isStatic);
		}

		static ::System::IntPtr GetFieldClass(::System::IntPtr field)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETFIELDCLASS_OFFSET))(field);
		}

		static ::System::String* GetFieldSignature(::System::IntPtr field)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETFIELDSIGNATURE_OFFSET))(field);
		}

		static ::System::IntPtr NewProxyInstance(::System::IntPtr delegateHandle, ::System::IntPtr interfaze)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_NEWPROXYINSTANCE_OFFSET))(delegateHandle, interfaze);
		}

		static ::System::Void SetNativeExceptionOnProxy(::System::IntPtr proxy, ::System::Exception* e, ::System::Boolean methodNotFound)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Exception*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_SETNATIVEEXCEPTIONONPROXY_OFFSET))(proxy, e, methodNotFound);
		}
	};
}
