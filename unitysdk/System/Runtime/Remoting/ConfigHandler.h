#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace Mono::Xml { class SmallXmlParser; }
namespace Mono::Xml { class SmallXmlParser_IAttrList; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Stack; }
namespace System::Runtime::Remoting { class ChannelData; }
namespace System::Runtime::Remoting { class ProviderData; }

#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_CHECKPATH_OFFSET UNITYSDK_OFFSET(0x1C6D9AD0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_EXTRACTASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1C6DC890)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_GETNOTNULL_OFFSET UNITYSDK_OFFSET(0x1C6DC7D0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONCHARS_OFFSET UNITYSDK_OFFSET(0x1C6DC970)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1C6DC3E0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONENDPARSING_OFFSET UNITYSDK_OFFSET(0x1C6DC980)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONIGNORABLEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1C6D9BE0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1C6D9BD0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1C6D9BF0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONSTARTPARSING_OFFSET UNITYSDK_OFFSET(0x1C6D9BC0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_PARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1C6D9D20)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_PARSETIME_OFFSET UNITYSDK_OFFSET(0x1C6DC460)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCHANNEL_OFFSET UNITYSDK_OFFSET(0x1C6DB310)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCLIENTACTIVATED_OFFSET UNITYSDK_OFFSET(0x1C6DBDD0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCLIENTWELLKNOWN_OFFSET UNITYSDK_OFFSET(0x1C6DBB90)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCUSTOMPROVIDERDATA_OFFSET UNITYSDK_OFFSET(0x1C6DAB10)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READINTEROPXML_OFFSET UNITYSDK_OFFSET(0x1C6DBF90)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READLIFETINE_OFFSET UNITYSDK_OFFSET(0x1C6DAE70)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READPRELOAD_OFFSET UNITYSDK_OFFSET(0x1C6DC1C0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C6DB7C0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READSERVICEACTIVATED_OFFSET UNITYSDK_OFFSET(0x1C6DBEF0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READSERVICEWELLKNOWN_OFFSET UNITYSDK_OFFSET(0x1C6DBC50)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_VALIDATEPATH_OFFSET UNITYSDK_OFFSET(0x1C6D99E0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D98B0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ConfigHandler_TypeDefinitionIndex = 1249;

	class ConfigHandler : public ::System::Object
	{
	public:
		::System::String* currentClientUrl; // 0x10
		::System::String* currentXmlPath; // 0x18
		::System::Collections::ArrayList* typeEntries; // 0x20
		::System::Runtime::Remoting::ChannelData* currentChannel; // 0x28
		::System::Collections::ArrayList* channelInstances; // 0x30
		::System::String* appName; // 0x38
		::System::Collections::Stack* currentProviderData; // 0x40
		::System::Boolean onlyDelayedChannels; // 0x48

		::System::Void _ctor(::System::Boolean onlyDelayedChannels)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER__CTOR_OFFSET))(this, onlyDelayedChannels);
		}

		::System::Void ValidatePath(::System::String* element, ::Il2CppArray<::System::String*>* paths)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_VALIDATEPATH_OFFSET))(this, element, paths);
		}

		::System::Boolean CheckPath(::System::String* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_CHECKPATH_OFFSET))(this, path);
		}

		::System::Void OnStartParsing(::Mono::Xml::SmallXmlParser* parser)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONSTARTPARSING_OFFSET))(this, parser);
		}

		::System::Void OnProcessingInstruction(::System::String* name, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONPROCESSINGINSTRUCTION_OFFSET))(this, name, text);
		}

		::System::Void OnIgnorableWhitespace(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONIGNORABLEWHITESPACE_OFFSET))(this, s);
		}

		::System::Void OnStartElement(::System::String* name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONSTARTELEMENT_OFFSET))(this, name, attrs);
		}

		::System::Void ParseElement(::System::String* name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_PARSEELEMENT_OFFSET))(this, name, attrs);
		}

		::System::Void OnEndElement(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONENDELEMENT_OFFSET))(this, name);
		}

		::System::Void ReadCustomProviderData(::System::String* name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCUSTOMPROVIDERDATA_OFFSET))(this, name, attrs);
		}

		::System::Void ReadLifetine(::Mono::Xml::SmallXmlParser_IAttrList* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READLIFETINE_OFFSET))(this, attrs);
		}

		::System::TimeSpan ParseTime(::System::String* s)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_PARSETIME_OFFSET))(this, s);
		}

		::System::Void ReadChannel(::Mono::Xml::SmallXmlParser_IAttrList* attrs, ::System::Boolean isTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCHANNEL_OFFSET))(this, attrs, isTemplate);
		}

		::System::Runtime::Remoting::ProviderData* ReadProvider(::System::String* name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs, ::System::Boolean isTemplate)
		{
			return ((::System::Runtime::Remoting::ProviderData*(*)(::PVOID, ::System::String*, ::Mono::Xml::SmallXmlParser_IAttrList*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READPROVIDER_OFFSET))(this, name, attrs, isTemplate);
		}

		::System::Void ReadClientActivated(::Mono::Xml::SmallXmlParser_IAttrList* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCLIENTACTIVATED_OFFSET))(this, attrs);
		}

		::System::Void ReadServiceActivated(::Mono::Xml::SmallXmlParser_IAttrList* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READSERVICEACTIVATED_OFFSET))(this, attrs);
		}

		::System::Void ReadClientWellKnown(::Mono::Xml::SmallXmlParser_IAttrList* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCLIENTWELLKNOWN_OFFSET))(this, attrs);
		}

		::System::Void ReadServiceWellKnown(::Mono::Xml::SmallXmlParser_IAttrList* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READSERVICEWELLKNOWN_OFFSET))(this, attrs);
		}

		::System::Void ReadInteropXml(::Mono::Xml::SmallXmlParser_IAttrList* attrs, ::System::Boolean isElement)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READINTEROPXML_OFFSET))(this, attrs, isElement);
		}

		::System::Void ReadPreload(::Mono::Xml::SmallXmlParser_IAttrList* attrs)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READPRELOAD_OFFSET))(this, attrs);
		}

		::System::String* GetNotNull(::Mono::Xml::SmallXmlParser_IAttrList* attrs, ::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_GETNOTNULL_OFFSET))(this, attrs, name);
		}

		::System::String* ExtractAssembly(::System::String*& type)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_EXTRACTASSEMBLY_OFFSET))(this, type);
		}

		::System::Void OnChars(::System::String* ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONCHARS_OFFSET))(this, ch);
		}

		::System::Void OnEndParsing(::Mono::Xml::SmallXmlParser* parser)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONENDPARSING_OFFSET))(this, parser);
		}
	};
}
