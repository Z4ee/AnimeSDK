#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/ConformanceLevel.h"
#include "unitysdk/System/Xml/NamespaceHandling.h"
#include "unitysdk/System/Xml/NewLineHandling.h"
#include "unitysdk/System/Xml/TriState.h"
#include "unitysdk/System/Xml/XmlOutputMethod.h"
#include "unitysdk/System/Xml/XmlStandalone.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }
namespace System::Text { class Encoding; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLWRITERSETTINGS_CHECKREADONLY_OFFSET UNITYSDK_OFFSET(0x1E3DC5A0)
#define SYSTEM_XML_XMLWRITERSETTINGS_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3DC850)
#define SYSTEM_XML_XMLWRITERSETTINGS_CREATEWRITER_1_OFFSET UNITYSDK_OFFSET(0x1E3DC0B0)
#define SYSTEM_XML_XMLWRITERSETTINGS_CREATEWRITER_OFFSET UNITYSDK_OFFSET(0x1E3DBAB0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_ASYNC_OFFSET UNITYSDK_OFFSET(0x1E3DC530)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_AUTOXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x1E3DC9E0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_CDATASECTIONELEMENTS_OFFSET UNITYSDK_OFFSET(0x1E3DC970)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_CHECKCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1E3DC780)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_CLOSEOUTPUT_OFFSET UNITYSDK_OFFSET(0x1E3DC6E0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_CONFORMANCELEVEL_OFFSET UNITYSDK_OFFSET(0x1E3DC6F0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_DOCTYPEPUBLIC_OFFSET UNITYSDK_OFFSET(0x1E3DC9C0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_DOCTYPESYSTEM_OFFSET UNITYSDK_OFFSET(0x1E3DC9B0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_DONOTESCAPEURIATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E3DC980)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1E3DC540)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_INDENTCHARS_OFFSET UNITYSDK_OFFSET(0x1E3DC6C0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_INDENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E3DC9F0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_INDENT_OFFSET UNITYSDK_OFFSET(0x1E3DC660)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_ISQUERYSPECIFIC_OFFSET UNITYSDK_OFFSET(0x1E3DCA00)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_MEDIATYPE_OFFSET UNITYSDK_OFFSET(0x1E3DC9A0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_MERGECDATASECTIONS_OFFSET UNITYSDK_OFFSET(0x1E3DC990)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_NAMESPACEHANDLING_OFFSET UNITYSDK_OFFSET(0x1E3DC790)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_NEWLINECHARS_OFFSET UNITYSDK_OFFSET(0x1E3DC650)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_NEWLINEHANDLING_OFFSET UNITYSDK_OFFSET(0x1E3DC640)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_NEWLINEONATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E3DC6D0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_OMITXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x1E3DC550)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_OUTPUTMETHOD_OFFSET UNITYSDK_OFFSET(0x1E3DC830)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x1E3DC9D0)
#define SYSTEM_XML_XMLWRITERSETTINGS_GET_WRITEENDDOCUMENTONCLOSE_OFFSET UNITYSDK_OFFSET(0x1E3DC820)
#define SYSTEM_XML_XMLWRITERSETTINGS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E3DC400)
#define SYSTEM_XML_XMLWRITERSETTINGS_SET_CONFORMANCELEVEL_OFFSET UNITYSDK_OFFSET(0x1E3DC700)
#define SYSTEM_XML_XMLWRITERSETTINGS_SET_INDENT_OFFSET UNITYSDK_OFFSET(0x1E3DC670)
#define SYSTEM_XML_XMLWRITERSETTINGS_SET_NAMESPACEHANDLING_OFFSET UNITYSDK_OFFSET(0x1E3DC7A0)
#define SYSTEM_XML_XMLWRITERSETTINGS_SET_OMITXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x1E3DC560)
#define SYSTEM_XML_XMLWRITERSETTINGS_SET_OUTPUTMETHOD_OFFSET UNITYSDK_OFFSET(0x1E3DC840)
#define SYSTEM_XML_XMLWRITERSETTINGS_SET_READONLY_OFFSET UNITYSDK_OFFSET(0x1E3DCA40)
#define SYSTEM_XML_XMLWRITERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DBA50)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWriterSettings_TypeDefinitionIndex = 1889;

	class XmlWriterSettings : public ::System::Object
	{
	public:
		::System::String* mediaType; // 0x10
		::System::String* indentChars; // 0x18
		::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>* cdataSections; // 0x20
		::System::String* docTypeSystem; // 0x28
		::System::Text::Encoding* encoding; // 0x30
		::System::String* newLineChars; // 0x38
		::System::String* docTypePublic; // 0x40
		::System::Xml::ConformanceLevel conformanceLevel; // 0x48
		::System::Xml::NewLineHandling newLineHandling; // 0x4C
		::System::Boolean omitXmlDecl; // 0x50
		::System::Boolean doNotEscapeUriAttributes; // 0x51
		::System::Boolean closeOutput; // 0x52
		::System::Boolean mergeCDataSections; // 0x53
		::System::Xml::NamespaceHandling namespaceHandling; // 0x54
		::System::Xml::TriState indent; // 0x58
		::System::Boolean isReadOnly; // 0x5C
		::System::Boolean checkCharacters; // 0x5D
		::System::Boolean useAsync; // 0x5E
		::System::Boolean autoXmlDecl; // 0x5F
		::System::Xml::XmlOutputMethod outputMethod; // 0x60
		::System::Boolean newLineOnAttributes; // 0x64
		::System::Boolean writeEndDocumentOnClose; // 0x65
		::System::Xml::XmlStandalone standalone; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Async()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_ASYNC_OFFSET))(this);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_ENCODING_OFFSET))(this);
		}

		::System::Boolean get_OmitXmlDeclaration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_OMITXMLDECLARATION_OFFSET))(this);
		}

		::System::Void set_OmitXmlDeclaration(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_SET_OMITXMLDECLARATION_OFFSET))(this, a1);
		}

		::System::Xml::NewLineHandling get_NewLineHandling()
		{
			return ((::System::Xml::NewLineHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_NEWLINEHANDLING_OFFSET))(this);
		}

		::System::String* get_NewLineChars()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_NEWLINECHARS_OFFSET))(this);
		}

		::System::Boolean get_Indent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_INDENT_OFFSET))(this);
		}

		::System::Void set_Indent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_SET_INDENT_OFFSET))(this, a1);
		}

		::System::String* get_IndentChars()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_INDENTCHARS_OFFSET))(this);
		}

		::System::Boolean get_NewLineOnAttributes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_NEWLINEONATTRIBUTES_OFFSET))(this);
		}

		::System::Boolean get_CloseOutput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_CLOSEOUTPUT_OFFSET))(this);
		}

		::System::Xml::ConformanceLevel get_ConformanceLevel()
		{
			return ((::System::Xml::ConformanceLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_CONFORMANCELEVEL_OFFSET))(this);
		}

		::System::Void set_ConformanceLevel(::System::Xml::ConformanceLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::ConformanceLevel))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_SET_CONFORMANCELEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_CheckCharacters()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_CHECKCHARACTERS_OFFSET))(this);
		}

		::System::Xml::NamespaceHandling get_NamespaceHandling()
		{
			return ((::System::Xml::NamespaceHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_NAMESPACEHANDLING_OFFSET))(this);
		}

		::System::Void set_NamespaceHandling(::System::Xml::NamespaceHandling a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::NamespaceHandling))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_SET_NAMESPACEHANDLING_OFFSET))(this, a1);
		}

		::System::Boolean get_WriteEndDocumentOnClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_WRITEENDDOCUMENTONCLOSE_OFFSET))(this);
		}

		::System::Xml::XmlOutputMethod get_OutputMethod()
		{
			return ((::System::Xml::XmlOutputMethod(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_OUTPUTMETHOD_OFFSET))(this);
		}

		::System::Void set_OutputMethod(::System::Xml::XmlOutputMethod a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlOutputMethod))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_SET_OUTPUTMETHOD_OFFSET))(this, a1);
		}

		::System::Xml::XmlWriterSettings* Clone()
		{
			return ((::System::Xml::XmlWriterSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_CLONE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>* get_CDataSectionElements()
		{
			return ((::System::Collections::Generic::List_1<::System::Xml::XmlQualifiedName*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_CDATASECTIONELEMENTS_OFFSET))(this);
		}

		::System::Boolean get_DoNotEscapeUriAttributes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_DONOTESCAPEURIATTRIBUTES_OFFSET))(this);
		}

		::System::Boolean get_MergeCDataSections()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_MERGECDATASECTIONS_OFFSET))(this);
		}

		::System::String* get_MediaType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_MEDIATYPE_OFFSET))(this);
		}

		::System::String* get_DocTypeSystem()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_DOCTYPESYSTEM_OFFSET))(this);
		}

		::System::String* get_DocTypePublic()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_DOCTYPEPUBLIC_OFFSET))(this);
		}

		::System::Xml::XmlStandalone get_Standalone()
		{
			return ((::System::Xml::XmlStandalone(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_STANDALONE_OFFSET))(this);
		}

		::System::Boolean get_AutoXmlDeclaration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_AUTOXMLDECLARATION_OFFSET))(this);
		}

		::System::Xml::TriState get_IndentInternal()
		{
			return ((::System::Xml::TriState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_INDENTINTERNAL_OFFSET))(this);
		}

		::System::Boolean get_IsQuerySpecific()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_GET_ISQUERYSPECIFIC_OFFSET))(this);
		}

		::System::Xml::XmlWriter* CreateWriter(::System::IO::Stream* a1)
		{
			return ((::System::Xml::XmlWriter*(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_CREATEWRITER_OFFSET))(this, a1);
		}

		::System::Xml::XmlWriter* CreateWriter_1(::System::IO::TextWriter* a1)
		{
			return ((::System::Xml::XmlWriter*(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_CREATEWRITER_1_OFFSET))(this, a1);
		}

		::System::Void set_ReadOnly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_SET_READONLY_OFFSET))(this, a1);
		}

		::System::Void CheckReadOnly(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_CHECKREADONLY_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITERSETTINGS_INITIALIZE_OFFSET))(this);
		}
	};
}
