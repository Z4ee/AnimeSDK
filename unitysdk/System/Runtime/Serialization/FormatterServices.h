#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class MemberInfo; }
namespace System::Runtime::Serialization { class MemberHolder; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_CHECKSERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x1A6C21C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x1A6C4070)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAMEFORARRAY_OFFSET UNITYSDK_OFFSET(0x1A6C4240)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAMEFORNONARRAYTYPES_OFFSET UNITYSDK_OFFSET(0x1A6C4410)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x1A6C41B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1A6C3AB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETPARENTTYPES_OFFSET UNITYSDK_OFFSET(0x1A6C2B80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETSAFEUNINITIALIZEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1A6C3350)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETSERIALIZABLEMEMBERS_1_OFFSET UNITYSDK_OFFSET(0x1A6C2FD0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETSERIALIZABLEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1A6C1F40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETTYPEFROMASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1A6C3E50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETUNINITIALIZEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1A6C31C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_INTERNALGETSERIALIZABLEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1A6C2290)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_LOADASSEMBLYFROMSTRINGNOTHROW_OFFSET UNITYSDK_OFFSET(0x1A6C3F60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_LOADASSEMBLYFROMSTRING_OFFSET UNITYSDK_OFFSET(0x1A6C3EE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_NATIVEGETSAFEUNINITIALIZEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1A6C35D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_NATIVEGETUNINITIALIZEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1A6C3340)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_POPULATEOBJECTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1A6C37E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_SERIALIZATIONSETVALUE_OFFSET UNITYSDK_OFFSET(0x1A6C36A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_UNSAFETYPEFORWARDERSISENABLED_OFFSET UNITYSDK_OFFSET(0x1A6C35E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6C1D90)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int FormatterServices_TypeDefinitionIndex = 1137;

	class FormatterServices : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_advancedTypes()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(FormatterServices_TypeDefinitionIndex)->GetStaticField(0xA00);
		}
		static ::System::Reflection::Binder** StaticGet_s_binder()
		{
			return (::System::Reflection::Binder**)Il2CppClass::FromTypeDefinitionIndex(FormatterServices_TypeDefinitionIndex)->GetStaticField(0xA08);
		}
		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*, ::Il2CppArray<::System::Reflection::MemberInfo*>*>** StaticGet_m_MemberInfoTable()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*, ::Il2CppArray<::System::Reflection::MemberInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(FormatterServices_TypeDefinitionIndex)->GetStaticField(0xA10);
		}
		static ::System::Boolean* StaticGet_unsafeTypeForwardersIsEnabledInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FormatterServices_TypeDefinitionIndex)->GetStaticField(0x230);
		}
		static ::System::Boolean* StaticGet_unsafeTypeForwardersIsEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FormatterServices_TypeDefinitionIndex)->GetStaticField(0x231);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Reflection::MemberInfo*>* GetSerializableMembers(::System::RuntimeType* type)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETSERIALIZABLEMEMBERS_OFFSET))(type);
		}

		static ::System::Boolean CheckSerializable(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_CHECKSERIALIZABLE_OFFSET))(type);
		}

		static ::Il2CppArray<::System::Reflection::MemberInfo*>* InternalGetSerializableMembers(::System::RuntimeType* type)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_INTERNALGETSERIALIZABLEMEMBERS_OFFSET))(type);
		}

		static ::System::Boolean GetParentTypes(::System::RuntimeType* parentType, ::Il2CppArray<::System::RuntimeType*>*& parentTypes, ::System::Int32& parentTypeCount)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::Il2CppArray<::System::RuntimeType*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETPARENTTYPES_OFFSET))(parentType, parentTypes, parentTypeCount);
		}

		static ::Il2CppArray<::System::Reflection::MemberInfo*>* GetSerializableMembers_1(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::System::Type*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETSERIALIZABLEMEMBERS_1_OFFSET))(type, context);
		}

		static ::System::Object* GetUninitializedObject(::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETUNINITIALIZEDOBJECT_OFFSET))(type);
		}

		static ::System::Object* GetSafeUninitializedObject(::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETSAFEUNINITIALIZEDOBJECT_OFFSET))(type);
		}

		static ::System::Object* nativeGetUninitializedObject(::System::RuntimeType* type)
		{
			return ((::System::Object*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_NATIVEGETUNINITIALIZEDOBJECT_OFFSET))(type);
		}

		static ::System::Object* nativeGetSafeUninitializedObject(::System::RuntimeType* type)
		{
			return ((::System::Object*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_NATIVEGETSAFEUNINITIALIZEDOBJECT_OFFSET))(type);
		}

		static ::System::Boolean UnsafeTypeForwardersIsEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_UNSAFETYPEFORWARDERSISENABLED_OFFSET))();
		}

		static ::System::Void SerializationSetValue(::System::Reflection::MemberInfo* fi, ::System::Object* target, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_SERIALIZATIONSETVALUE_OFFSET))(fi, target, value);
		}

		static ::System::Object* PopulateObjectMembers(::System::Object* obj, ::Il2CppArray<::System::Reflection::MemberInfo*>* members, ::Il2CppArray<::System::Object*>* data)
		{
			return ((::System::Object*(*)(::System::Object*, ::Il2CppArray<::System::Reflection::MemberInfo*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_POPULATEOBJECTMEMBERS_OFFSET))(obj, members, data);
		}

		static ::Il2CppArray<::System::Object*>* GetObjectData(::System::Object* obj, ::Il2CppArray<::System::Reflection::MemberInfo*>* members)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Object*, ::Il2CppArray<::System::Reflection::MemberInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETOBJECTDATA_OFFSET))(obj, members);
		}

		static ::System::Type* GetTypeFromAssembly(::System::Reflection::Assembly* assem, ::System::String* name)
		{
			return ((::System::Type*(*)(::System::Reflection::Assembly*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETTYPEFROMASSEMBLY_OFFSET))(assem, name);
		}

		static ::System::Reflection::Assembly* LoadAssemblyFromString(::System::String* assemblyName)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_LOADASSEMBLYFROMSTRING_OFFSET))(assemblyName);
		}

		static ::System::Reflection::Assembly* LoadAssemblyFromStringNoThrow(::System::String* assemblyName)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_LOADASSEMBLYFROMSTRINGNOTHROW_OFFSET))(assemblyName);
		}

		static ::System::String* GetClrAssemblyName(::System::Type* type, ::System::Boolean& hasTypeForwardedFrom)
		{
			return ((::System::String*(*)(::System::Type*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRASSEMBLYNAME_OFFSET))(type, hasTypeForwardedFrom);
		}

		static ::System::String* GetClrTypeFullName(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAME_OFFSET))(type);
		}

		static ::System::String* GetClrTypeFullNameForArray(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAMEFORARRAY_OFFSET))(type);
		}

		static ::System::String* GetClrTypeFullNameForNonArrayTypes(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_GETCLRTYPEFULLNAMEFORNONARRAYTYPES_OFFSET))(type);
		}
	};
}
