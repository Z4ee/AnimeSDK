#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GlobalJavaObjectRef; }

#define UNITYENGINE_ANDROIDREFLECTION_GETCONSTRUCTORMEMBER_OFFSET UNITYSDK_OFFSET(0x1B25DD70)
#define UNITYENGINE_ANDROIDREFLECTION_GETFIELDCLASS_OFFSET UNITYSDK_OFFSET(0x1B25E5A0)
#define UNITYENGINE_ANDROIDREFLECTION_GETFIELDMEMBER_OFFSET UNITYSDK_OFFSET(0x1B25E2A0)
#define UNITYENGINE_ANDROIDREFLECTION_GETFIELDSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1B25E670)
#define UNITYENGINE_ANDROIDREFLECTION_GETMETHODID_OFFSET UNITYSDK_OFFSET(0x1B25DC20)
#define UNITYENGINE_ANDROIDREFLECTION_GETMETHODMEMBER_OFFSET UNITYSDK_OFFSET(0x1B25DFA0)
#define UNITYENGINE_ANDROIDREFLECTION_GETSTATICMETHODID_OFFSET UNITYSDK_OFFSET(0x1B25DAD0)
#define UNITYENGINE_ANDROIDREFLECTION_ISASSIGNABLEFROM_OFFSET UNITYSDK_OFFSET(0x1B25DAA0)
#define UNITYENGINE_ANDROIDREFLECTION_ISPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1B25DA70)
#define UNITYENGINE_ANDROIDREFLECTION_NEWPROXYINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B25E790)
#define UNITYENGINE_ANDROIDREFLECTION_SETNATIVEEXCEPTIONONPROXY_OFFSET UNITYSDK_OFFSET(0x1B25CE60)
#define UNITYENGINE_ANDROIDREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B25E8C0)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidReflection_TypeDefinitionIndex = 5681;

	class AndroidReflection : public ::System::Object
	{
	public:
		static ::UnityEngine::GlobalJavaObjectRef** StaticGet_s_ReflectionHelperClass()
		{
			return (::UnityEngine::GlobalJavaObjectRef**)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x410);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperGetConstructorID()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x380);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperGetFieldID()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x388);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperGetMethodID()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x390);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperGetFieldSignature()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x398);
		}
		static ::System::IntPtr* StaticGet_s_FieldGetDeclaringClass()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x3A0);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperNewProxyInstance()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x3A8);
		}
		static ::System::IntPtr* StaticGet_s_ReflectionHelperSetNativeExceptionOnProxy()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidReflection_TypeDefinitionIndex)->GetStaticField(0x3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsPrimitive(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_ISPRIMITIVE_OFFSET))(a1);
		}

		static ::System::Boolean IsAssignableFrom(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_ISASSIGNABLEFROM_OFFSET))(a1, a2);
		}

		static ::System::IntPtr GetStaticMethodID(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETSTATICMETHODID_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr GetMethodID(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETMETHODID_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr GetConstructorMember(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETCONSTRUCTORMEMBER_OFFSET))(a1, a2);
		}

		static ::System::IntPtr GetMethodMember(::System::IntPtr a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETMETHODMEMBER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IntPtr GetFieldMember(::System::IntPtr a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETFIELDMEMBER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IntPtr GetFieldClass(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETFIELDCLASS_OFFSET))(a1);
		}

		static ::System::String* GetFieldSignature(::System::IntPtr a1)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_GETFIELDSIGNATURE_OFFSET))(a1);
		}

		static ::System::IntPtr NewProxyInstance(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_NEWPROXYINSTANCE_OFFSET))(a1, a2);
		}

		static ::System::Void SetNativeExceptionOnProxy(::System::IntPtr a1, ::System::Exception* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Exception*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDREFLECTION_SETNATIVEEXCEPTIONONPROXY_OFFSET))(a1, a2, a3);
		}
	};
}
