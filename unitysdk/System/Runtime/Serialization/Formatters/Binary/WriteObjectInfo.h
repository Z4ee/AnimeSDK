#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }
namespace System::Runtime::Serialization { class IFormatterConverter; }
namespace System::Runtime::Serialization { class ISerializationSurrogate; }
namespace System::Runtime::Serialization { class ISurrogateSelector; }
namespace System::Runtime::Serialization { class SerializationBinder; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class ObjectWriter; }
namespace System::Runtime::Serialization::Formatters::Binary { class SerObjectInfoCache; }
namespace System::Runtime::Serialization::Formatters::Binary { class SerObjectInfoInit; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_CHECKTYPEFORWARDEDFROM_OFFSET UNITYSDK_OFFSET(0x1CD51490)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETASSEMBLYSTRING_OFFSET UNITYSDK_OFFSET(0x1CD52090)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1CD520C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETMEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1CD51F40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x1CD50770)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETTYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x1CD52060)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x1CD51620)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITNOMEMBERS_OFFSET UNITYSDK_OFFSET(0x1CD50E90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITSERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1CD51AC0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD50890)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITSIWRITE_OFFSET UNITYSDK_OFFSET(0x1CD51060)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INTERNALINIT_OFFSET UNITYSDK_OFFSET(0x1CD506C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INVOKESERIALIZATIONBINDER_OFFSET UNITYSDK_OFFSET(0x1CD51020)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_OBJECTEND_OFFSET UNITYSDK_OFFSET(0x1CD50660)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_PUTOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x1CD50690)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1CD51A50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD506F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD50650)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int WriteObjectInfo_TypeDefinitionIndex = 1218;

	class WriteObjectInfo : public ::System::Object
	{
	public:
		::System::Object* obj; // 0x10
		::Il2CppArray<::System::Object*>* memberData; // 0x18
		::System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate; // 0x20
		::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache; // 0x28
		::System::Runtime::Serialization::StreamingContext context; // 0x30
		::System::String* binderTypeName; // 0x40
		::System::Type* objectType; // 0x48
		::System::Runtime::Serialization::SerializationInfo* si; // 0x50
		::System::String* binderAssemblyString; // 0x58
		::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit; // 0x60
		::System::Int64 objectId; // 0x68
		::System::Boolean isTyped; // 0x70
		::System::Boolean isSi; // 0x71
		::System::Boolean isArray; // 0x72
		::System::Boolean isNamed; // 0x73
		::System::Int32 objectInfoId; // 0x74
		::System::Int64 assemId; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO__CTOR_OFFSET))(this);
		}

		::System::Void ObjectEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_OBJECTEND_OFFSET))(this);
		}

		::System::Void InternalInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INTERNALINIT_OFFSET))(this);
		}

		static ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* Serialize(::System::Object* obj, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, ::System::Runtime::Serialization::SerializationBinder* binder)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*(*)(::System::Object*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ::System::Runtime::Serialization::SerializationBinder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_SERIALIZE_OFFSET))(obj, surrogateSelector, context, serObjectInfoInit, converter, objectWriter, binder);
		}

		::System::Void InitSerialize(::System::Object* obj, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, ::System::Runtime::Serialization::SerializationBinder* binder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ::System::Runtime::Serialization::SerializationBinder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITSERIALIZE_OFFSET))(this, obj, surrogateSelector, context, serObjectInfoInit, converter, objectWriter, binder);
		}

		static ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* Serialize_1(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, ::System::Runtime::Serialization::SerializationBinder* binder)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*(*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Runtime::Serialization::SerializationBinder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_SERIALIZE_1_OFFSET))(objectType, surrogateSelector, context, serObjectInfoInit, converter, binder);
		}

		::System::Void InitSerialize_1(::System::Type* objectType, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter* converter, ::System::Runtime::Serialization::SerializationBinder* binder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::IFormatterConverter*, ::System::Runtime::Serialization::SerializationBinder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITSERIALIZE_1_OFFSET))(this, objectType, surrogateSelector, context, serObjectInfoInit, converter, binder);
		}

		::System::Void InitSiWrite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITSIWRITE_OFFSET))(this);
		}

		static ::System::Void CheckTypeForwardedFrom(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache, ::System::Type* objectType, ::System::String* binderAssemblyString)
		{
			return ((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_CHECKTYPEFORWARDEDFROM_OFFSET))(cache, objectType, binderAssemblyString);
		}

		::System::Void InitNoMembers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITNOMEMBERS_OFFSET))(this);
		}

		::System::Void InitMemberInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INITMEMBERINFO_OFFSET))(this);
		}

		::System::String* GetTypeFullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETTYPEFULLNAME_OFFSET))(this);
		}

		::System::String* GetAssemblyString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETASSEMBLYSTRING_OFFSET))(this);
		}

		::System::Void InvokeSerializationBinder(::System::Runtime::Serialization::SerializationBinder* binder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationBinder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_INVOKESERIALIZATIONBINDER_OFFSET))(this, binder);
		}

		::System::Type* GetMemberType(::System::Reflection::MemberInfo* objMember)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETMEMBERTYPE_OFFSET))(this, objMember);
		}

		::System::Void GetMemberInfo(::Il2CppArray<::System::String*>*& outMemberNames, ::Il2CppArray<::System::Type*>*& outMemberTypes, ::Il2CppArray<::System::Object*>*& outMemberData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*&, ::Il2CppArray<::System::Type*>*&, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETMEMBERINFO_OFFSET))(this, outMemberNames, outMemberTypes, outMemberData);
		}

		static ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* GetObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*(*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_GETOBJECTINFO_OFFSET))(serObjectInfoInit);
		}

		static ::System::Void PutObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo)
		{
			return ((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_WRITEOBJECTINFO_PUTOBJECTINFO_OFFSET))(serObjectInfoInit, objectInfo);
		}
	};
}
