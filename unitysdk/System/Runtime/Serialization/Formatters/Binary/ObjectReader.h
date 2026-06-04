#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::IO { class Stream; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class AssemblyName; }
namespace System::Runtime::Remoting::Messaging { class Header; }
namespace System::Runtime::Remoting::Messaging { class HeaderHandler; }
namespace System::Runtime::Serialization { class IFormatterConverter; }
namespace System::Runtime::Serialization { class ISurrogateSelector; }
namespace System::Runtime::Serialization { class ObjectManager; }
namespace System::Runtime::Serialization { class SerializationBinder; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryAssemblyInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class IntSizedArray; }
namespace System::Runtime::Serialization::Formatters::Binary { class InternalFE; }
namespace System::Runtime::Serialization::Formatters::Binary { class NameCache; }
namespace System::Runtime::Serialization::Formatters::Binary { class ParseRecord; }
namespace System::Runtime::Serialization::Formatters::Binary { class ReadObjectInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class SerObjectInfoInit; }
namespace System::Runtime::Serialization::Formatters::Binary { class SerStack; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_BIND_OFFSET UNITYSDK_OFFSET(0x187B59D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CHECKSERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x187B16E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CHECKTYPEFORWARDEDTO_OFFSET UNITYSDK_OFFSET(0x187B6150)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CREATEREADOBJECTINFO_1_OFFSET UNITYSDK_OFFSET(0x187AFFB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CREATEREADOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x187AF390)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CROSSAPPDOMAINARRAY_OFFSET UNITYSDK_OFFSET(0x187B18E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x187AAA90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_FASTBINDTOTYPE_OFFSET UNITYSDK_OFFSET(0x187B5A60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETID_OFFSET UNITYSDK_OFFSET(0x187B58A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETSIMPLYNAMEDTYPEFROMASSEMBLY_OFFSET UNITYSDK_OFFSET(0x187B5EC0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETTYPE_OFFSET UNITYSDK_OFFSET(0x187AA2B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GET_TOPOBJECT_OFFSET UNITYSDK_OFFSET(0x187B09A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GET_VALUEFIXUPSTACK_OFFSET UNITYSDK_OFFSET(0x187B08D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_HASSURROGATE_OFFSET UNITYSDK_OFFSET(0x187B15D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_INITFULLDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x187B17E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_NEXTRECTANGLEMAP_OFFSET UNITYSDK_OFFSET(0x187B4160)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAYMEMBEREND_OFFSET UNITYSDK_OFFSET(0x187B5270)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAYMEMBER_OFFSET UNITYSDK_OFFSET(0x187B4250)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAY_OFFSET UNITYSDK_OFFSET(0x187B32B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEERROR_OFFSET UNITYSDK_OFFSET(0x187B2F60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEMEMBEREND_OFFSET UNITYSDK_OFFSET(0x187B2E90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEMEMBER_OFFSET UNITYSDK_OFFSET(0x187B26A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEOBJECTEND_OFFSET UNITYSDK_OFFSET(0x187B21C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x187B1D30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESERIALIZEDSTREAMHEADEREND_OFFSET UNITYSDK_OFFSET(0x187B1CE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESERIALIZEDSTREAMHEADER_OFFSET UNITYSDK_OFFSET(0x187B1CC0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESTRING_OFFSET UNITYSDK_OFFSET(0x187B4D90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSE_OFFSET UNITYSDK_OFFSET(0x187B1B00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_REGISTEROBJECT_1_OFFSET UNITYSDK_OFFSET(0x187B55B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_REGISTEROBJECT_OFFSET UNITYSDK_OFFSET(0x187B3D20)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_RESOLVESIMPLEASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x187B5E70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_SET_TOPOBJECT_OFFSET UNITYSDK_OFFSET(0x187B09B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x187AA900)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectReader_TypeDefinitionIndex = 1178;

	class ObjectReader : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::Formatters::Binary::NameCache* typeCache; // 0x10
		::System::Object* m_topObject; // 0x18
		::System::String* previousName; // 0x20
		::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* headers; // 0x28
		::System::Runtime::Remoting::Messaging::HeaderHandler* handler; // 0x30
		::System::Runtime::Serialization::ObjectManager* m_objectManager; // 0x38
		::System::Runtime::Serialization::Formatters::Binary::SerStack* stack; // 0x40
		::System::Type* previousType; // 0x48
		::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums; // 0x50
		::Il2CppArray<::System::Object*>* crossAppDomainArray; // 0x58
		::System::Object* handlerObject; // 0x60
		::System::Runtime::Serialization::ISurrogateSelector* m_surrogates; // 0x68
		::System::Runtime::Serialization::SerializationBinder* m_binder; // 0x70
		::System::IO::Stream* m_stream; // 0x78
		::System::String* previousAssemblyString; // 0x80
		::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* valTypeObjectIdTable; // 0x88
		::System::Runtime::Serialization::IFormatterConverter* m_formatterConverter; // 0x90
		::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit; // 0x98
		::System::Runtime::Serialization::StreamingContext m_context; // 0xA0
		::System::Runtime::Serialization::Formatters::Binary::SerStack* valueFixupStack; // 0xB0
		::System::Int64 topId; // 0xB8
		::System::Boolean bFullDeserialization; // 0xC0
		::System::Boolean bOldFormatDetected; // 0xC1
		::System::Boolean bSimpleAssembly; // 0xC2

		::System::Void _ctor(::System::IO::Stream* a1, ::System::Runtime::Serialization::ISurrogateSelector* a2, ::System::Runtime::Serialization::StreamingContext a3, ::System::Runtime::Serialization::Formatters::Binary::InternalFE* a4, ::System::Runtime::Serialization::SerializationBinder* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::Formatters::Binary::InternalFE*, ::System::Runtime::Serialization::SerializationBinder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Runtime::Serialization::Formatters::Binary::SerStack* get_ValueFixupStack()
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::SerStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GET_VALUEFIXUPSTACK_OFFSET))(this);
		}

		::System::Object* get_TopObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GET_TOPOBJECT_OFFSET))(this);
		}

		::System::Void set_TopObject(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_SET_TOPOBJECT_OFFSET))(this, a1);
		}

		::System::Object* Deserialize(::System::Runtime::Remoting::Messaging::HeaderHandler* a1, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* a2, ::System::Boolean a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::HeaderHandler*, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_DESERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HasSurrogate(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_HASSURROGATE_OFFSET))(this, a1);
		}

		::System::Void CheckSerializable(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CHECKSERIALIZABLE_OFFSET))(this, a1);
		}

		::System::Void InitFullDeserialization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_INITFULLDESERIALIZATION_OFFSET))(this);
		}

		::System::Object* CrossAppDomainArray(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CROSSAPPDOMAINARRAY_OFFSET))(this, a1);
		}

		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateReadObjectInfo(::System::Type* a1)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CREATEREADOBJECTINFO_OFFSET))(this, a1);
		}

		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateReadObjectInfo_1(::System::Type* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::PVOID, ::System::Type*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CREATEREADOBJECTINFO_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Parse(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSE_OFFSET))(this, a1);
		}

		::System::Void ParseError(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a1, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEERROR_OFFSET))(this, a1, a2);
		}

		::System::Void ParseSerializedStreamHeader(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESERIALIZEDSTREAMHEADER_OFFSET))(this, a1);
		}

		::System::Void ParseSerializedStreamHeaderEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESERIALIZEDSTREAMHEADEREND_OFFSET))(this, a1);
		}

		::System::Void ParseObject(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEOBJECT_OFFSET))(this, a1);
		}

		::System::Void ParseObjectEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEOBJECTEND_OFFSET))(this, a1);
		}

		::System::Void ParseArray(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAY_OFFSET))(this, a1);
		}

		::System::Void NextRectangleMap(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_NEXTRECTANGLEMAP_OFFSET))(this, a1);
		}

		::System::Void ParseArrayMember(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAYMEMBER_OFFSET))(this, a1);
		}

		::System::Void ParseArrayMemberEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAYMEMBEREND_OFFSET))(this, a1);
		}

		::System::Void ParseMember(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEMEMBER_OFFSET))(this, a1);
		}

		::System::Void ParseMemberEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEMEMBEREND_OFFSET))(this, a1);
		}

		::System::Void ParseString(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a1, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESTRING_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterObject(::System::Object* a1, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a2, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_REGISTEROBJECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterObject_1(::System::Object* a1, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a2, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_REGISTEROBJECT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int64 GetId(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETID_OFFSET))(this, a1);
		}

		::System::Type* Bind(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_BIND_OFFSET))(this, a1, a2);
		}

		::System::Type* FastBindToType(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_FASTBINDTOTYPE_OFFSET))(this, a1, a2);
		}

		static ::System::Reflection::Assembly* ResolveSimpleAssemblyName(::System::Reflection::AssemblyName* a1)
		{
			return ((::System::Reflection::Assembly*(*)(::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_RESOLVESIMPLEASSEMBLYNAME_OFFSET))(a1);
		}

		static ::System::Void GetSimplyNamedTypeFromAssembly(::System::Reflection::Assembly* a1, ::System::String* a2, ::System::Type*& a3)
		{
			return ((::System::Void(*)(::System::Reflection::Assembly*, ::System::String*, ::System::Type*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETSIMPLYNAMEDTYPEFROMASSEMBLY_OFFSET))(a1, a2, a3);
		}

		::System::Type* GetType(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* a1, ::System::String* a2)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETTYPE_OFFSET))(this, a1, a2);
		}

		static ::System::Void CheckTypeForwardedTo(::System::Reflection::Assembly* a1, ::System::Reflection::Assembly* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CHECKTYPEFORWARDEDTO_OFFSET))(a1, a2, a3);
		}
	};
}
