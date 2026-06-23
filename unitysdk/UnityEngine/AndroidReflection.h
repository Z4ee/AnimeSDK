#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GlobalJavaObjectRef; }

#define UNITYENGINE_ANDROIDREFLECTION_GETCONSTRUCTORMEMBER_OFFSET UNITYSDK_OFFSET(0x1DEBD120)
#define UNITYENGINE_ANDROIDREFLECTION_GETFIELDCLASS_OFFSET UNITYSDK_OFFSET(0x1DEBDB50)
#define UNITYENGINE_ANDROIDREFLECTION_GETFIELDMEMBER_OFFSET UNITYSDK_OFFSET(0x1DEBD780)
#define UNITYENGINE_ANDROIDREFLECTION_GETFIELDSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1DEBDC20)
#define UNITYENGINE_ANDROIDREFLECTION_GETMETHODID_OFFSET UNITYSDK_OFFSET(0x1DEBCFD0)
#define UNITYENGINE_ANDROIDREFLECTION_GETMETHODMEMBER_OFFSET UNITYSDK_OFFSET(0x1DEBD3B0)
#define UNITYENGINE_ANDROIDREFLECTION_GETSTATICMETHODID_OFFSET UNITYSDK_OFFSET(0x1DEBCE80)
#define UNITYENGINE_ANDROIDREFLECTION_ISASSIGNABLEFROM_OFFSET UNITYSDK_OFFSET(0x1DEBCE50)
#define UNITYENGINE_ANDROIDREFLECTION_ISPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1DEBCE20)
#define UNITYENGINE_ANDROIDREFLECTION_NEWPROXYINSTANCE_OFFSET UNITYSDK_OFFSET(0x1DEBDD40)
#define UNITYENGINE_ANDROIDREFLECTION_SETNATIVEEXCEPTIONONPROXY_OFFSET UNITYSDK_OFFSET(0x1DEBBDA0)
#define UNITYENGINE_ANDROIDREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEBDE90)
#define UNITYENGINE_ANDROIDREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBDE80)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidReflection_TypeDefinitionIndex = 39272;

	class AndroidReflection : public ::System::Object
	{
	public:
		static ::UnityEngine::GlobalJavaObjectRef** StaticGet_s_ReflectionHelperClass()
		{
			return (::UnityEngine::GlobalJavaObjectRef**)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x2AEB0);
		}
		static ::System::IntPtr* StaticGet_s_FieldGetDeclaringClass()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x9860);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperGetMethodID()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x9868);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperGetConstructorID()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x9870);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperGetFieldID()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x9878);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperNewProxyInstance()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x9880);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperGetFieldSignature()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x9888);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperSetNativeExceptionOnProxy()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x9890);
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
