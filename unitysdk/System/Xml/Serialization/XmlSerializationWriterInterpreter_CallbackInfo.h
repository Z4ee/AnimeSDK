#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml::Serialization { class XmlSerializationWriterInterpreter; }
namespace System::Xml::Serialization { class XmlTypeMapping; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_CALLBACKINFO_WRITEENUM_OFFSET UNITYSDK_OFFSET(0x1B2B2F50)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_CALLBACKINFO_WRITEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B2B2EF0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_CALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2AE1D0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationWriterInterpreter_CallbackInfo_TypeDefinitionIndex = 1916;

	class XmlSerializationWriterInterpreter_CallbackInfo : public ::System::Object
	{
	public:
		::System::Xml::Serialization::XmlTypeMapping* _typeMap; // 0x10
		::System::Xml::Serialization::XmlSerializationWriterInterpreter* _swi; // 0x18

		::System::Void _ctor(::System::Xml::Serialization::XmlSerializationWriterInterpreter* swi, ::System::Xml::Serialization::XmlTypeMapping* typeMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlSerializationWriterInterpreter*, ::System::Xml::Serialization::XmlTypeMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_CALLBACKINFO__CTOR_OFFSET))(this, swi, typeMap);
		}

		::System::Void WriteObject(::System::Object* ob)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_CALLBACKINFO_WRITEOBJECT_OFFSET))(this, ob);
		}

		::System::Void WriteEnum(::System::Object* ob)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_CALLBACKINFO_WRITEENUM_OFFSET))(this, ob);
		}
	};
}
