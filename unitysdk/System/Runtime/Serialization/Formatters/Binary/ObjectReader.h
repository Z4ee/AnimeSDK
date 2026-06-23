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

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_BIND_OFFSET UNITYSDK_OFFSET(0x1C4FBF70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CHECKSERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x1C4F8700)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CHECKTYPEFORWARDEDTO_OFFSET UNITYSDK_OFFSET(0x1C4FC6C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CREATEREADOBJECTINFO_1_OFFSET UNITYSDK_OFFSET(0x1C4F8A40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CREATEREADOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x1C4F8970)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CROSSAPPDOMAINARRAY_OFFSET UNITYSDK_OFFSET(0x1C4F8930)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C4F79D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_FASTBINDTOTYPE_OFFSET UNITYSDK_OFFSET(0x1C4FC010)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETID_OFFSET UNITYSDK_OFFSET(0x1C4FBE40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETSIMPLYNAMEDTYPEFROMASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1C4FC470)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1C4FC970)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GET_VALUEFIXUPSTACK_OFFSET UNITYSDK_OFFSET(0x1C4F7850)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_HASSURROGATE_OFFSET UNITYSDK_OFFSET(0x1C4F86C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_INITFULLDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1C4F8810)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_NEXTRECTANGLEMAP_OFFSET UNITYSDK_OFFSET(0x1C4FAFB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAYMEMBEREND_OFFSET UNITYSDK_OFFSET(0x1C4FBCB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAYMEMBER_OFFSET UNITYSDK_OFFSET(0x1C4FB0D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAY_OFFSET UNITYSDK_OFFSET(0x1C4FA130)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEERROR_OFFSET UNITYSDK_OFFSET(0x1C4F9F20)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEMEMBEREND_OFFSET UNITYSDK_OFFSET(0x1C4F9E70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C4F9760)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEOBJECTEND_OFFSET UNITYSDK_OFFSET(0x1C4F9230)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C4F8D90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESERIALIZEDSTREAMHEADEREND_OFFSET UNITYSDK_OFFSET(0x1C4F8D30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESERIALIZEDSTREAMHEADER_OFFSET UNITYSDK_OFFSET(0x1C4F8D10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESTRING_OFFSET UNITYSDK_OFFSET(0x1C4FBC60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSE_OFFSET UNITYSDK_OFFSET(0x1C4F8B50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_REGISTEROBJECT_1_OFFSET UNITYSDK_OFFSET(0x1C4FBD00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_REGISTEROBJECT_OFFSET UNITYSDK_OFFSET(0x1C4FAC10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_RESOLVESIMPLEASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x1C4FC420)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_SET_TOPOBJECT_OFFSET UNITYSDK_OFFSET(0x1C4F7900)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F7920)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectReader_TypeDefinitionIndex = 1223;

	class ObjectReader : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Runtime::Remoting::Messaging::Header*>* headers; // 0x10
		::System::Runtime::Remoting::Messaging::HeaderHandler* handler; // 0x18
		::System::Runtime::Serialization::Formatters::Binary::NameCache* typeCache; // 0x20
		::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums; // 0x28
		::System::Runtime::Serialization::ISurrogateSelector* m_surrogates; // 0x30
		::System::IO::Stream* m_stream; // 0x38
		::System::Type* previousType; // 0x40
		::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit; // 0x48
		::System::Runtime::Serialization::ObjectManager* m_objectManager; // 0x50
		::System::Object* m_topObject; // 0x58
		::System::String* previousName; // 0x60
		::System::String* previousAssemblyString; // 0x68
		::Il2CppArray<::System::Object*>* crossAppDomainArray; // 0x70
		::System::Runtime::Serialization::Formatters::Binary::SerStack* stack; // 0x78
		::System::Runtime::Serialization::SerializationBinder* m_binder; // 0x80
		::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* valTypeObjectIdTable; // 0x88
		::System::Runtime::Serialization::IFormatterConverter* m_formatterConverter; // 0x90
		::System::Object* handlerObject; // 0x98
		::System::Runtime::Serialization::StreamingContext m_context; // 0xA0
		::System::Runtime::Serialization::Formatters::Binary::SerStack* valueFixupStack; // 0xB0
		::System::Boolean bSimpleAssembly; // 0xB8
		::System::Boolean bOldFormatDetected; // 0xB9
		::System::Boolean bFullDeserialization; // 0xBA
		::System::Int64 topId; // 0xC0

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Runtime::Serialization::ISurrogateSelector* selector, ::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::Formatters::Binary::InternalFE* formatterEnums, ::System::Runtime::Serialization::SerializationBinder* binder)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::Formatters::Binary::InternalFE*, ::System::Runtime::Serialization::SerializationBinder*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER__CTOR_OFFSET))(this, stream, selector, context, formatterEnums, binder);
		}

		::System::Runtime::Serialization::Formatters::Binary::SerStack* get_ValueFixupStack()
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::SerStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GET_VALUEFIXUPSTACK_OFFSET))(this);
		}

		::System::Void set_TopObject(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_SET_TOPOBJECT_OFFSET))(this, value);
		}

		::System::Object* Deserialize(::System::Runtime::Remoting::Messaging::HeaderHandler* handler, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* serParser, ::System::Boolean fCheck)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Remoting::Messaging::HeaderHandler*, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_DESERIALIZE_OFFSET))(this, handler, serParser, fCheck);
		}

		::System::Boolean HasSurrogate(::System::Type* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_HASSURROGATE_OFFSET))(this, t);
		}

		::System::Void CheckSerializable(::System::Type* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CHECKSERIALIZABLE_OFFSET))(this, t);
		}

		::System::Void InitFullDeserialization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_INITFULLDESERIALIZATION_OFFSET))(this);
		}

		::System::Object* CrossAppDomainArray(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CROSSAPPDOMAINARRAY_OFFSET))(this, index);
		}

		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateReadObjectInfo(::System::Type* objectType)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CREATEREADOBJECTINFO_OFFSET))(this, objectType);
		}

		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateReadObjectInfo_1(::System::Type* objectType, ::Il2CppArray<::System::String*>* memberNames, ::Il2CppArray<::System::Type*>* memberTypes)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::PVOID, ::System::Type*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CREATEREADOBJECTINFO_1_OFFSET))(this, objectType, memberNames, memberTypes);
		}

		::System::Void Parse(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSE_OFFSET))(this, pr);
		}

		::System::Void ParseError(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* processing, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* onStack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEERROR_OFFSET))(this, processing, onStack);
		}

		::System::Void ParseSerializedStreamHeader(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESERIALIZEDSTREAMHEADER_OFFSET))(this, pr);
		}

		::System::Void ParseSerializedStreamHeaderEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESERIALIZEDSTREAMHEADEREND_OFFSET))(this, pr);
		}

		::System::Void ParseObject(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEOBJECT_OFFSET))(this, pr);
		}

		::System::Void ParseObjectEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEOBJECTEND_OFFSET))(this, pr);
		}

		::System::Void ParseArray(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAY_OFFSET))(this, pr);
		}

		::System::Void NextRectangleMap(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_NEXTRECTANGLEMAP_OFFSET))(this, pr);
		}

		::System::Void ParseArrayMember(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAYMEMBER_OFFSET))(this, pr);
		}

		::System::Void ParseArrayMemberEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEARRAYMEMBEREND_OFFSET))(this, pr);
		}

		::System::Void ParseMember(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEMEMBER_OFFSET))(this, pr);
		}

		::System::Void ParseMemberEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSEMEMBEREND_OFFSET))(this, pr);
		}

		::System::Void ParseString(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* parentPr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_PARSESTRING_OFFSET))(this, pr, parentPr);
		}

		::System::Void RegisterObject(::System::Object* obj, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* objectPr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_REGISTEROBJECT_OFFSET))(this, obj, pr, objectPr);
		}

		::System::Void RegisterObject_1(::System::Object* obj, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* objectPr, ::System::Boolean bIsString)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_REGISTEROBJECT_1_OFFSET))(this, obj, pr, objectPr, bIsString);
		}

		::System::Int64 GetId(::System::Int64 objectId)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETID_OFFSET))(this, objectId);
		}

		::System::Type* Bind(::System::String* assemblyString, ::System::String* typeString)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_BIND_OFFSET))(this, assemblyString, typeString);
		}

		::System::Type* FastBindToType(::System::String* assemblyName, ::System::String* typeName)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_FASTBINDTOTYPE_OFFSET))(this, assemblyName, typeName);
		}

		static ::System::Reflection::Assembly* ResolveSimpleAssemblyName(::System::Reflection::AssemblyName* assemblyName)
		{
			return ((::System::Reflection::Assembly*(*)(::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_RESOLVESIMPLEASSEMBLYNAME_OFFSET))(assemblyName);
		}

		static ::System::Void GetSimplyNamedTypeFromAssembly(::System::Reflection::Assembly* assm, ::System::String* typeName, ::System::Type*& type)
		{
			return ((::System::Void(*)(::System::Reflection::Assembly*, ::System::String*, ::System::Type*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETSIMPLYNAMEDTYPEFROMASSEMBLY_OFFSET))(assm, typeName, type);
		}

		::System::Type* GetType(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, ::System::String* name)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_GETTYPE_OFFSET))(this, assemblyInfo, name);
		}

		static ::System::Void CheckTypeForwardedTo(::System::Reflection::Assembly* sourceAssembly, ::System::Reflection::Assembly* destAssembly, ::System::Type* resolvedType)
		{
			return ((::System::Void(*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_CHECKTYPEFORWARDEDTO_OFFSET))(sourceAssembly, destAssembly, resolvedType);
		}
	};
}
