#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/FormatterTypeStyle.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Array; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class Queue; }
namespace System::Runtime::Remoting::Messaging { class Header; }
namespace System::Runtime::Serialization { class IFormatterConverter; }
namespace System::Runtime::Serialization { class ISurrogateSelector; }
namespace System::Runtime::Serialization { class ObjectIDGenerator; }
namespace System::Runtime::Serialization { class SerializationBinder; }
namespace System::Runtime::Serialization { class SerializationObjectManager; }
namespace System::Runtime::Serialization::Formatters::Binary { class InternalFE; }
namespace System::Runtime::Serialization::Formatters::Binary { class NameInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class SerObjectInfoInit; }
namespace System::Runtime::Serialization::Formatters::Binary { class SerStack; }
namespace System::Runtime::Serialization::Formatters::Binary { class WriteObjectInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_CHECKFORNULL_OFFSET UNITYSDK_OFFSET(0x163DD6F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_CHECKTYPEFORMAT_OFFSET UNITYSDK_OFFSET(0x163DC9D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETASSEMBLYID_OFFSET UNITYSDK_OFFSET(0x163DAF30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETNAMEINFO_OFFSET UNITYSDK_OFFSET(0x163DEBB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETNEXT_OFFSET UNITYSDK_OFFSET(0x163DB980)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETTYPE_OFFSET UNITYSDK_OFFSET(0x163DC9E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GET_OBJECTMANAGER_OFFSET UNITYSDK_OFFSET(0x163DBAE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_INTERNALGETID_OFFSET UNITYSDK_OFFSET(0x163DADF0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_MEMBERTONAMEINFO_OFFSET UNITYSDK_OFFSET(0x163DCDE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_PUTNAMEINFO_OFFSET UNITYSDK_OFFSET(0x163DB930)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SCHEDULE_1_OFFSET UNITYSDK_OFFSET(0x163DDA60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x163DE9D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x163CEA50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TOCODE_OFFSET UNITYSDK_OFFSET(0x163CCF60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_1_OFFSET UNITYSDK_OFFSET(0x163DCFF0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_2_OFFSET UNITYSDK_OFFSET(0x163DB220)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_3_OFFSET UNITYSDK_OFFSET(0x163DD930)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_4_OFFSET UNITYSDK_OFFSET(0x163DD850)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_OFFSET UNITYSDK_OFFSET(0x163DEB10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEARRAYMEMBER_OFFSET UNITYSDK_OFFSET(0x163DDD10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEARRAY_OFFSET UNITYSDK_OFFSET(0x163DBAF0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEKNOWNVALUECLASS_OFFSET UNITYSDK_OFFSET(0x163DDB90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEMEMBERSETUP_OFFSET UNITYSDK_OFFSET(0x163DCE10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEMEMBERS_OFFSET UNITYSDK_OFFSET(0x163DD0B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEOBJECTREF_OFFSET UNITYSDK_OFFSET(0x163DDB70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITERECTANGLE_OFFSET UNITYSDK_OFFSET(0x163DE1B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITESERIALIZEDSTREAMHEADER_OFFSET UNITYSDK_OFFSET(0x163DAD70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x163DE9F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x163DCA70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x163DB320)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x163CE8D0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectWriter_TypeDefinitionIndex = 1180;

	class ObjectWriter : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* serWriter; // 0x10
		::System::Collections::Hashtable* assemblyToIdTable; // 0x18
		::System::Collections::Queue* m_objectQueue; // 0x20
		::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums; // 0x28
		::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit; // 0x30
		::System::String* topName; // 0x38
		::Il2CppArray<::System::Object*>* crossAppDomainArray; // 0x40
		::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* headers; // 0x48
		::System::Runtime::Serialization::IFormatterConverter* m_formatterConverter; // 0x50
		::System::Runtime::Serialization::ISurrogateSelector* m_surrogates; // 0x58
		::System::Runtime::Serialization::ObjectIDGenerator* m_idGenerator; // 0x60
		::System::Runtime::Serialization::SerializationObjectManager* m_objectManager; // 0x68
		::System::Object* previousObj; // 0x70
		::System::Runtime::Serialization::StreamingContext m_context; // 0x78
		::System::Runtime::Serialization::Formatters::Binary::SerStack* niPool; // 0x88
		::System::Runtime::Serialization::SerializationBinder* m_binder; // 0x90
		::System::Type* previousType; // 0x98
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE previousCode; // 0xA0
		::System::Int32 m_currentId; // 0xA4
		::System::Int64 previousId; // 0xA8
		::System::Int64 topId; // 0xB0

		::System::Void _ctor(::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums, ::System::Runtime::Serialization::SerializationBinder* binder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::Formatters::Binary::InternalFE*, ::System::Runtime::Serialization::SerializationBinder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER__CTOR_OFFSET))(this, selector, context, formatterEnums, binder);
		}

		::System::Void Serialize(::System::Object* graph, ::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* inHeaders, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* serWriter, ::System::Boolean fCheck)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>*, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SERIALIZE_OFFSET))(this, graph, inHeaders, serWriter, fCheck);
		}

		::System::Runtime::Serialization::SerializationObjectManager* get_ObjectManager()
		{
			return ((::System::Runtime::Serialization::SerializationObjectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GET_OBJECTMANAGER_OFFSET))(this);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITE_OFFSET))(this, objectInfo, memberNameInfo, typeNameInfo);
		}

		::System::Void Write_1(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::Il2CppArray<::System::String*>* memberNames, ::Il2CppArray<::System::Type*>* memberTypes, ::Il2CppArray<::System::Object*>* memberData, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>* memberObjectInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITE_1_OFFSET))(this, objectInfo, memberNameInfo, typeNameInfo, memberNames, memberTypes, memberData, memberObjectInfos);
		}

		::System::Void WriteMemberSetup(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::System::String* memberName, ::System::Type* memberType, ::System::Object* memberData, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::String*, ::System::Type*, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEMEMBERSETUP_OFFSET))(this, objectInfo, memberNameInfo, typeNameInfo, memberName, memberType, memberData, memberObjectInfo);
		}

		::System::Void WriteMembers(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberTypeNameInfo, ::System::Object* memberData, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEMEMBERS_OFFSET))(this, memberNameInfo, memberTypeNameInfo, memberData, objectInfo, typeNameInfo, memberObjectInfo);
		}

		::System::Void WriteArray(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* memberObjectInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEARRAY_OFFSET))(this, objectInfo, memberNameInfo, memberObjectInfo);
		}

		::System::Void WriteArrayMember(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEARRAYMEMBER_OFFSET))(this, objectInfo, arrayElemTypeNameInfo, data);
		}

		::System::Void WriteRectangle(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Int32 rank, ::Il2CppArray<::System::Int32>* maxA, ::System::Array* array, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemNameTypeInfo, ::Il2CppArray<::System::Int32>* lowerBoundA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Array*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITERECTANGLE_OFFSET))(this, objectInfo, rank, maxA, array, arrayElemNameTypeInfo, lowerBoundA);
		}

		::System::Object* GetNext(::System::Int64& objID)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETNEXT_OFFSET))(this, objID);
		}

		::System::Int64 InternalGetId(::System::Object* obj, ::System::Boolean assignUniqueIdToValueType, ::System::Type* type, ::System::Boolean& isNew)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Type*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_INTERNALGETID_OFFSET))(this, obj, assignUniqueIdToValueType, type, isNew);
		}

		::System::Int64 Schedule(::System::Object* obj, ::System::Boolean assignUniqueIdToValueType, ::System::Type* type)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SCHEDULE_OFFSET))(this, obj, assignUniqueIdToValueType, type);
		}

		::System::Int64 Schedule_1(::System::Object* obj, ::System::Boolean assignUniqueIdToValueType, ::System::Type* type, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SCHEDULE_1_OFFSET))(this, obj, assignUniqueIdToValueType, type, objectInfo);
		}

		::System::Boolean WriteKnownValueClass(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::System::Object* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEKNOWNVALUECLASS_OFFSET))(this, memberNameInfo, typeNameInfo, data);
		}

		::System::Void WriteObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, ::System::Int64 objectId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEOBJECTREF_OFFSET))(this, nameInfo, objectId);
		}

		::System::Void WriteString(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::System::Object* stringObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITESTRING_OFFSET))(this, memberNameInfo, typeNameInfo, stringObject);
		}

		::System::Boolean CheckForNull(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::System::Object* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_CHECKFORNULL_OFFSET))(this, objectInfo, memberNameInfo, typeNameInfo, data);
		}

		::System::Void WriteSerializedStreamHeader(::System::Int64 topId, ::System::Int64 headerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITESERIALIZEDSTREAMHEADER_OFFSET))(this, topId, headerId);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(::System::Type* type, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_OFFSET))(this, type, objectInfo, code, nameInfo);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo_1(::System::Type* type)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_1_OFFSET))(this, type);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo_2(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_2_OFFSET))(this, objectInfo);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo_3(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_3_OFFSET))(this, objectInfo, nameInfo);
		}

		::System::Void TypeToNameInfo_4(::System::Type* type, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_4_OFFSET))(this, type, nameInfo);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* MemberToNameInfo(::System::String* name)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_MEMBERTONAMEINFO_OFFSET))(this, name);
		}

		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToCode(::System::Type* type)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TOCODE_OFFSET))(this, type);
		}

		::System::Int64 GetAssemblyId(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETASSEMBLYID_OFFSET))(this, objectInfo);
		}

		::System::Type* GetType(::System::Object* obj)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETTYPE_OFFSET))(this, obj);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* GetNameInfo()
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETNAMEINFO_OFFSET))(this);
		}

		::System::Boolean CheckTypeFormat(::System::Runtime::Serialization::Formatters::FormatterTypeStyle test, ::System::Runtime::Serialization::Formatters::FormatterTypeStyle want)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Runtime::Serialization::Formatters::FormatterTypeStyle, ::System::Runtime::Serialization::Formatters::FormatterTypeStyle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_CHECKTYPEFORMAT_OFFSET))(this, test, want);
		}

		::System::Void PutNameInfo(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_PUTNAMEINFO_OFFSET))(this, nameInfo);
		}
	};
}
