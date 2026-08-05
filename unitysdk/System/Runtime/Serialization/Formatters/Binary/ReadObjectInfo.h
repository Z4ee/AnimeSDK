#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MemberInfo; }
namespace System::Runtime::Serialization { class IFormatterConverter; }
namespace System::Runtime::Serialization { class ISerializationSurrogate; }
namespace System::Runtime::Serialization { class ISurrogateSelector; }
namespace System::Runtime::Serialization { class ObjectManager; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class SerObjectInfoCache; }
namespace System::Runtime::Serialization::Formatters::Binary { class SerObjectInfoInit; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x1E44A870)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1E449B60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1E449700)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1E44A2B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERTYPES_OFFSET UNITYSDK_OFFSET(0x1E44AB70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1E44A190)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x1E4497E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1E44A730)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITDATASTORE_OFFSET UNITYSDK_OFFSET(0x1E44A980)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1E449E70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITNOMEMBERS_OFFSET UNITYSDK_OFFSET(0x1E449D00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITREADCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1E449880)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITSIREAD_OFFSET UNITYSDK_OFFSET(0x1E449DC0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INIT_1_OFFSET UNITYSDK_OFFSET(0x1E449C70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1E449830)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_POPULATEOBJECTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1E44AAF0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_POSITION_OFFSET UNITYSDK_OFFSET(0x1E44A470)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_PREPAREFORREUSE_OFFSET UNITYSDK_OFFSET(0x1E4496F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_RECORDFIXUP_OFFSET UNITYSDK_OFFSET(0x1E44AA30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4496E0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ReadObjectInfo_TypeDefinitionIndex = 1219;

	class ReadObjectInfo : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_readObjectInfoCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ReadObjectInfo_TypeDefinitionIndex)->GetStaticField(0x500);
		}
		::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate; // 0x10
		::Il2CppArray<::System::String*>* wireMemberNames; // 0x18
		::System::Runtime::Serialization::ObjectManager* objectManager; // 0x20
		::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit; // 0x28
		::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache; // 0x30
		::System::Runtime::Serialization::StreamingContext context; // 0x38
		::System::Collections::Generic::List_1<::System::Type*>* memberTypesList; // 0x48
		::System::Type* objectType; // 0x50
		::Il2CppArray<::System::Type*>* wireMemberTypes; // 0x58
		::System::Runtime::Serialization::IFormatterConverter* formatterConverter; // 0x60
		::System::Boolean isSi; // 0x68
		::System::Boolean isNamed; // 0x69
		::System::Boolean bSimpleAssembly; // 0x6A
		::System::Boolean isTyped; // 0x6B
		::System::Int32 objectInfoId; // 0x6C
		::System::Int32 lastPosition; // 0x70
		::System::Int32 count; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO__CTOR_OFFSET))(this);
		}

		::System::Void PrepareForReuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_PREPAREFORREUSE_OFFSET))(this);
		}

		static ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* Create(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ObjectManager* objectManager, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, ::System::Boolean bSimpleAssembly)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_CREATE_OFFSET))(objectType, surrogateSelector, context, objectManager, serObjectInfoInit, converter, bSimpleAssembly);
		}

		::System::Void Init(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ObjectManager* objectManager, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, ::System::Boolean bSimpleAssembly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INIT_OFFSET))(this, objectType, surrogateSelector, context, objectManager, serObjectInfoInit, converter, bSimpleAssembly);
		}

		static ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* Create_1(::System::Type* objectType, ::Il2CppArray<::System::String*>* memberNames, ::Il2CppArray<::System::Type*>* memberTypes, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ObjectManager* objectManager, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, ::System::Boolean bSimpleAssembly)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::System::Type*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_CREATE_1_OFFSET))(objectType, memberNames, memberTypes, surrogateSelector, context, objectManager, serObjectInfoInit, converter, bSimpleAssembly);
		}

		::System::Void Init_1(::System::Type* objectType, ::Il2CppArray<::System::String*>* memberNames, ::Il2CppArray<::System::Type*>* memberTypes, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::ObjectManager* objectManager, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, ::System::Boolean bSimpleAssembly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INIT_1_OFFSET))(this, objectType, memberNames, memberTypes, surrogateSelector, context, objectManager, serObjectInfoInit, converter, bSimpleAssembly);
		}

		::System::Void InitReadConstructor(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITREADCONSTRUCTOR_OFFSET))(this, objectType, surrogateSelector, context);
		}

		::System::Void InitSiRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITSIREAD_OFFSET))(this);
		}

		::System::Void InitNoMembers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITNOMEMBERS_OFFSET))(this);
		}

		::System::Void InitMemberInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITMEMBERINFO_OFFSET))(this);
		}

		::System::Reflection::MemberInfo* GetMemberInfo(::System::String* name)
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERINFO_OFFSET))(this, name);
		}

		::System::Type* GetType(::System::String* name)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETTYPE_OFFSET))(this, name);
		}

		::System::Void AddValue(::System::String* name, ::System::Object* value, ::System::Runtime::Serialization::SerializationInfo*& si, ::Il2CppArray<::System::Object*>*& memberData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*&, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_ADDVALUE_OFFSET))(this, name, value, si, memberData);
		}

		::System::Void InitDataStore(::System::Runtime::Serialization::SerializationInfo*& si, ::Il2CppArray<::System::Object*>*& memberData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*&, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITDATASTORE_OFFSET))(this, si, memberData);
		}

		::System::Void RecordFixup(::System::Int64 objectId, ::System::String* name, ::System::Int64 idRef)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_RECORDFIXUP_OFFSET))(this, objectId, name, idRef);
		}

		::System::Void PopulateObjectMembers(::System::Object* obj, ::Il2CppArray<::System::Object*>* memberData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_POPULATEOBJECTMEMBERS_OFFSET))(this, obj, memberData);
		}

		::System::Int32 Position(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_POSITION_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Type*>* GetMemberTypes(::Il2CppArray<::System::String*>* inMemberNames, ::System::Type* objectType)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERTYPES_OFFSET))(this, inMemberNames, objectType);
		}

		::System::Type* GetMemberType(::System::Reflection::MemberInfo* objMember)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERTYPE_OFFSET))(this, objMember);
		}

		static ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* GetObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETOBJECTINFO_OFFSET))(serObjectInfoInit);
		}
	};
}
