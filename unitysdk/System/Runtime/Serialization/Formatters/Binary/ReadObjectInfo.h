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

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x17924500)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_CREATE_1_OFFSET UNITYSDK_OFFSET(0x179207D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x179206F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x179248E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERTYPES_OFFSET UNITYSDK_OFFSET(0x1791DC90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1792A570)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x17929B00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETTYPE_OFFSET UNITYSDK_OFFSET(0x179243C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITDATASTORE_OFFSET UNITYSDK_OFFSET(0x1791EAB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1792A180)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITNOMEMBERS_OFFSET UNITYSDK_OFFSET(0x1792A010)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITREADCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x17929BA0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITSIREAD_OFFSET UNITYSDK_OFFSET(0x1792A0D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INIT_1_OFFSET UNITYSDK_OFFSET(0x17929F80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INIT_OFFSET UNITYSDK_OFFSET(0x17929B50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_OBJECTEND_OFFSET UNITYSDK_OFFSET(0x179231C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_POPULATEOBJECTMEMBERS_OFFSET UNITYSDK_OFFSET(0x17922D10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_POSITION_OFFSET UNITYSDK_OFFSET(0x1792A740)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_PREPAREFORREUSE_OFFSET UNITYSDK_OFFSET(0x1791EB60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_RECORDFIXUP_OFFSET UNITYSDK_OFFSET(0x17924620)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17929AF0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ReadObjectInfo_TypeDefinitionIndex = 1176;

	class ReadObjectInfo : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_readObjectInfoCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ReadObjectInfo_TypeDefinitionIndex)->GetStaticField(0x6060);
		}
		::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate; // 0x10
		::System::Runtime::Serialization::StreamingContext context; // 0x18
		::System::Collections::Generic::List_1<::System::Type*>* memberTypesList; // 0x28
		::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit; // 0x30
		::System::Runtime::Serialization::ObjectManager* objectManager; // 0x38
		::Il2CppArray<::System::Type*>* wireMemberTypes; // 0x40
		::Il2CppArray<::System::String*>* wireMemberNames; // 0x48
		::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache; // 0x50
		::System::Type* objectType; // 0x58
		::System::Runtime::Serialization::IFormatterConverter* formatterConverter; // 0x60
		::System::Int32 lastPosition; // 0x68
		::System::Int32 objectInfoId; // 0x6C
		::System::Int32 count; // 0x70
		::System::Boolean isSi; // 0x74
		::System::Boolean bSimpleAssembly; // 0x75
		::System::Boolean isTyped; // 0x76
		::System::Boolean isNamed; // 0x77

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO__CTOR_OFFSET))(this);
		}

		::System::Void ObjectEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_OBJECTEND_OFFSET))(this);
		}

		::System::Void PrepareForReuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_PREPAREFORREUSE_OFFSET))(this);
		}

		static ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* Create(::System::Type* a1, ::System::Runtime::Serialization::ISurrogateSelector* a2, ::System::Runtime::Serialization::StreamingContext a3, ::System::Runtime::Serialization::ObjectManager* a4, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* a5, ::System::Runtime::Serialization::IFormatterConverter* a6, ::System::Boolean a7)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Init(::System::Type* a1, ::System::Runtime::Serialization::ISurrogateSelector* a2, ::System::Runtime::Serialization::StreamingContext a3, ::System::Runtime::Serialization::ObjectManager* a4, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* a5, ::System::Runtime::Serialization::IFormatterConverter* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INIT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* Create_1(::System::Type* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::Type*>* a3, ::System::Runtime::Serialization::ISurrogateSelector* a4, ::System::Runtime::Serialization::StreamingContext a5, ::System::Runtime::Serialization::ObjectManager* a6, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* a7, ::System::Runtime::Serialization::IFormatterConverter* a8, ::System::Boolean a9)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::System::Type*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_CREATE_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void Init_1(::System::Type* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::Type*>* a3, ::System::Runtime::Serialization::ISurrogateSelector* a4, ::System::Runtime::Serialization::StreamingContext a5, ::System::Runtime::Serialization::ObjectManager* a6, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* a7, ::System::Runtime::Serialization::IFormatterConverter* a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ObjectManager*, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INIT_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void InitReadConstructor(::System::Type* a1, ::System::Runtime::Serialization::ISurrogateSelector* a2, ::System::Runtime::Serialization::StreamingContext a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITREADCONSTRUCTOR_OFFSET))(this, a1, a2, a3);
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

		::System::Reflection::MemberInfo* GetMemberInfo(::System::String* a1)
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERINFO_OFFSET))(this, a1);
		}

		::System::Type* GetType(::System::String* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETTYPE_OFFSET))(this, a1);
		}

		::System::Void AddValue(::System::String* a1, ::System::Object* a2, ::System::Runtime::Serialization::SerializationInfo*& a3, ::Il2CppArray<::System::Object*>*& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*&, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_ADDVALUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InitDataStore(::System::Runtime::Serialization::SerializationInfo*& a1, ::Il2CppArray<::System::Object*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*&, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_INITDATASTORE_OFFSET))(this, a1, a2);
		}

		::System::Void RecordFixup(::System::Int64 a1, ::System::String* a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_RECORDFIXUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PopulateObjectMembers(::System::Object* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_POPULATEOBJECTMEMBERS_OFFSET))(this, a1, a2);
		}

		::System::Int32 Position(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_POSITION_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Type*>* GetMemberTypes(::Il2CppArray<::System::String*>* a1, ::System::Type* a2)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERTYPES_OFFSET))(this, a1, a2);
		}

		::System::Type* GetMemberType(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETMEMBERTYPE_OFFSET))(this, a1);
		}

		static ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* GetObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* a1)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_READOBJECTINFO_GETOBJECTINFO_OFFSET))(a1);
		}
	};
}
