#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml::Serialization { class XmlSerializationWriterInterpreter; }
namespace System::Xml::Serialization { class XmlTypeMapping; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_CALLBACKINFO_WRITEENUM_OFFSET UNITYSDK_OFFSET(0x17C6BFB0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_CALLBACKINFO_WRITEOBJECT_OFFSET UNITYSDK_OFFSET(0x17C6BED0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_CALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17C64BB0)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationWriterInterpreter_CallbackInfo_TypeDefinitionIndex = 2039;

	class XmlSerializationWriterInterpreter_CallbackInfo : public ::System::Object
	{
	public:
		::System::Xml::Serialization::XmlSerializationWriterInterpreter* _swi; // 0x10
		::System::Xml::Serialization::XmlTypeMapping* _typeMap; // 0x18

		::System::Void _ctor(::System::Xml::Serialization::XmlSerializationWriterInterpreter* a1, ::System::Xml::Serialization::XmlTypeMapping* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Serialization::XmlSerializationWriterInterpreter*, ::System::Xml::Serialization::XmlTypeMapping*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_CALLBACKINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void WriteObject(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_CALLBACKINFO_WRITEOBJECT_OFFSET))(this, a1);
		}

		::System::Void WriteEnum(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONWRITERINTERPRETER_CALLBACKINFO_WRITEENUM_OFFSET))(this, a1);
		}
	};
}
