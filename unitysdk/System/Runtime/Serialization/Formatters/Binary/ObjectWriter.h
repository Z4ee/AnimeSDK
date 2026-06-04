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

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_CHECKFORNULL_OFFSET UNITYSDK_OFFSET(0x187B8BB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_CHECKTYPEFORMAT_OFFSET UNITYSDK_OFFSET(0x187B7F00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETASSEMBLYID_OFFSET UNITYSDK_OFFSET(0x187B6620)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETNAMEINFO_OFFSET UNITYSDK_OFFSET(0x187BA010)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETNEXT_OFFSET UNITYSDK_OFFSET(0x187B7000)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETTYPE_OFFSET UNITYSDK_OFFSET(0x187B7F10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GET_OBJECTMANAGER_OFFSET UNITYSDK_OFFSET(0x187B7160)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_INTERNALGETID_OFFSET UNITYSDK_OFFSET(0x187B64E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_MEMBERTONAMEINFO_OFFSET UNITYSDK_OFFSET(0x187B82E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_PUTNAMEINFO_OFFSET UNITYSDK_OFFSET(0x187B6FB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SCHEDULE_1_OFFSET UNITYSDK_OFFSET(0x187B8F00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x187B9E30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x187AB130)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TOCODE_OFFSET UNITYSDK_OFFSET(0x187A9630)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_1_OFFSET UNITYSDK_OFFSET(0x187B84D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_2_OFFSET UNITYSDK_OFFSET(0x187B6910)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_3_OFFSET UNITYSDK_OFFSET(0x187B8DE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_4_OFFSET UNITYSDK_OFFSET(0x187B8D10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_OFFSET UNITYSDK_OFFSET(0x187B9F70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEARRAYMEMBER_OFFSET UNITYSDK_OFFSET(0x187B91B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEARRAY_OFFSET UNITYSDK_OFFSET(0x187B7170)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEKNOWNVALUECLASS_OFFSET UNITYSDK_OFFSET(0x187B9030)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEMEMBERSETUP_OFFSET UNITYSDK_OFFSET(0x187B8310)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEMEMBERS_OFFSET UNITYSDK_OFFSET(0x187B8590)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEOBJECTREF_OFFSET UNITYSDK_OFFSET(0x187B9010)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITERECTANGLE_OFFSET UNITYSDK_OFFSET(0x187B9650)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITESERIALIZEDSTREAMHEADER_OFFSET UNITYSDK_OFFSET(0x187B6460)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x187B9E50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x187B7FA0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x187B6A00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x187AAFB0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectWriter_TypeDefinitionIndex = 1181;

	class ObjectWriter : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::ObjectIDGenerator* m_idGenerator; // 0x10
		::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit; // 0x18
		::System::Runtime::Serialization::ISurrogateSelector* m_surrogates; // 0x20
		::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* headers; // 0x28
		::Il2CppArray<::System::Object*>* crossAppDomainArray; // 0x30
		::System::Object* previousObj; // 0x38
		::System::Collections::Hashtable* assemblyToIdTable; // 0x40
		::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums; // 0x48
		::System::Runtime::Serialization::IFormatterConverter* m_formatterConverter; // 0x50
		::System::Runtime::Serialization::Formatters::Binary::SerStack* niPool; // 0x58
		::System::Runtime::Serialization::SerializationObjectManager* m_objectManager; // 0x60
		::System::Type* previousType; // 0x68
		::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* serWriter; // 0x70
		::System::Collections::Queue* m_objectQueue; // 0x78
		::System::String* topName; // 0x80
		::System::Runtime::Serialization::SerializationBinder* m_binder; // 0x88
		::System::Runtime::Serialization::StreamingContext m_context; // 0x90
		::System::Int32 m_currentId; // 0xA0
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE previousCode; // 0xA4
		::System::Int64 previousId; // 0xA8
		::System::Int64 topId; // 0xB0

		::System::Void _ctor(::System::Runtime::Serialization::ISurrogateSelector* a1, ::System::Runtime::Serialization::StreamingContext a2, ::System::Runtime::Serialization::Formatters::Binary::InternalFE* a3, ::System::Runtime::Serialization::SerializationBinder* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::Formatters::Binary::InternalFE*, ::System::Runtime::Serialization::SerializationBinder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Serialize(::System::Object* a1, ::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* a2, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>*, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SERIALIZE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Runtime::Serialization::SerializationObjectManager* get_ObjectManager()
		{
			return ((::System::Runtime::Serialization::SerializationObjectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GET_OBJECTMANAGER_OFFSET))(this);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write_1(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a3, ::Il2CppArray<::System::String*>* a4, ::Il2CppArray<::System::Type*>* a5, ::Il2CppArray<::System::Object*>* a6, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITE_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void WriteMemberSetup(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a3, ::System::String* a4, ::System::Type* a5, ::System::Object* a6, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::String*, ::System::Type*, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEMEMBERSETUP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void WriteMembers(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2, ::System::Object* a3, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a4, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a5, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEMEMBERS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void WriteArray(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEARRAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteArrayMember(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEARRAYMEMBER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRectangle(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a1, ::System::Int32 a2, ::Il2CppArray<::System::Int32>* a3, ::System::Array* a4, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a5, ::Il2CppArray<::System::Int32>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Array*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITERECTANGLE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Object* GetNext(::System::Int64& a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETNEXT_OFFSET))(this, a1);
		}

		::System::Int64 InternalGetId(::System::Object* a1, ::System::Boolean a2, ::System::Type* a3, ::System::Boolean& a4)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Type*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_INTERNALGETID_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int64 Schedule(::System::Object* a1, ::System::Boolean a2, ::System::Type* a3)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SCHEDULE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int64 Schedule_1(::System::Object* a1, ::System::Boolean a2, ::System::Type* a3, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a4)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_SCHEDULE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean WriteKnownValueClass(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEKNOWNVALUECLASS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITEOBJECTREF_OFFSET))(this, a1, a2);
		}

		::System::Void WriteString(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITESTRING_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CheckForNull(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a3, ::System::Object* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_CHECKFORNULL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteSerializedStreamHeader(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_WRITESERIALIZEDSTREAMHEADER_OFFSET))(this, a1, a2);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo(::System::Type* a1, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a2, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE a3, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a4)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo_1(::System::Type* a1)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_1_OFFSET))(this, a1);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo_2(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a1)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_2_OFFSET))(this, a1);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* TypeToNameInfo_3(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_3_OFFSET))(this, a1, a2);
		}

		::System::Void TypeToNameInfo_4(::System::Type* a1, ::System::Runtime::Serialization::Formatters::Binary::NameInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TYPETONAMEINFO_4_OFFSET))(this, a1, a2);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* MemberToNameInfo(::System::String* a1)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_MEMBERTONAMEINFO_OFFSET))(this, a1);
		}

		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToCode(::System::Type* a1)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_TOCODE_OFFSET))(this, a1);
		}

		::System::Int64 GetAssemblyId(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETASSEMBLYID_OFFSET))(this, a1);
		}

		::System::Type* GetType(::System::Object* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETTYPE_OFFSET))(this, a1);
		}

		::System::Runtime::Serialization::Formatters::Binary::NameInfo* GetNameInfo()
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::NameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_GETNAMEINFO_OFFSET))(this);
		}

		::System::Boolean CheckTypeFormat(::System::Runtime::Serialization::Formatters::FormatterTypeStyle a1, ::System::Runtime::Serialization::Formatters::FormatterTypeStyle a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Runtime::Serialization::Formatters::FormatterTypeStyle, ::System::Runtime::Serialization::Formatters::FormatterTypeStyle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_CHECKTYPEFORMAT_OFFSET))(this, a1, a2);
		}

		::System::Void PutNameInfo(::System::Runtime::Serialization::Formatters::Binary::NameInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTWRITER_PUTNAMEINFO_OFFSET))(this, a1);
		}
	};
}
