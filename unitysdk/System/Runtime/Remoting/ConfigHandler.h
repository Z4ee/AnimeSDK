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

#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_CHECKPATH_OFFSET UNITYSDK_OFFSET(0x1C4655B0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_EXTRACTASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1C468C90)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_GETNOTNULL_OFFSET UNITYSDK_OFFSET(0x1C468BD0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONCHARS_OFFSET UNITYSDK_OFFSET(0x1C468D40)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1C4686D0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONENDPARSING_OFFSET UNITYSDK_OFFSET(0x1C468D50)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONIGNORABLEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1C4657E0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1C4657D0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1C4657F0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONSTARTPARSING_OFFSET UNITYSDK_OFFSET(0x1C4657C0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_PARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x1C465950)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_PARSETIME_OFFSET UNITYSDK_OFFSET(0x1C468820)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCHANNEL_OFFSET UNITYSDK_OFFSET(0x1C4672C0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCLIENTACTIVATED_OFFSET UNITYSDK_OFFSET(0x1C4680F0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCLIENTWELLKNOWN_OFFSET UNITYSDK_OFFSET(0x1C467DE0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCUSTOMPROVIDERDATA_OFFSET UNITYSDK_OFFSET(0x1C466730)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READINTEROPXML_OFFSET UNITYSDK_OFFSET(0x1C468370)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READLIFETINE_OFFSET UNITYSDK_OFFSET(0x1C466CF0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READPRELOAD_OFFSET UNITYSDK_OFFSET(0x1C468510)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C467880)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READSERVICEACTIVATED_OFFSET UNITYSDK_OFFSET(0x1C468270)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READSERVICEWELLKNOWN_OFFSET UNITYSDK_OFFSET(0x1C467F00)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_VALIDATEPATH_OFFSET UNITYSDK_OFFSET(0x1C4654D0)
#define SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C465430)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ConfigHandler_TypeDefinitionIndex = 1213;

	class ConfigHandler : public ::System::Object
	{
	public:
		::System::Collections::Stack* currentProviderData; // 0x10
		::System::String* currentXmlPath; // 0x18
		::System::String* currentClientUrl; // 0x20
		::System::Collections::ArrayList* typeEntries; // 0x28
		::System::Runtime::Remoting::ChannelData* currentChannel; // 0x30
		::System::Collections::ArrayList* channelInstances; // 0x38
		::System::String* appName; // 0x40
		::System::Boolean onlyDelayedChannels; // 0x48

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER__CTOR_OFFSET))(this, a1);
		}

		::System::Void ValidatePath(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_VALIDATEPATH_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckPath(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_CHECKPATH_OFFSET))(this, a1);
		}

		::System::Void OnStartParsing(::Mono::Xml::SmallXmlParser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONSTARTPARSING_OFFSET))(this, a1);
		}

		::System::Void OnProcessingInstruction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONPROCESSINGINSTRUCTION_OFFSET))(this, a1, a2);
		}

		::System::Void OnIgnorableWhitespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONIGNORABLEWHITESPACE_OFFSET))(this, a1);
		}

		::System::Void OnStartElement(::System::String* a1, ::Mono::Xml::SmallXmlParser_IAttrList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONSTARTELEMENT_OFFSET))(this, a1, a2);
		}

		::System::Void ParseElement(::System::String* a1, ::Mono::Xml::SmallXmlParser_IAttrList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_PARSEELEMENT_OFFSET))(this, a1, a2);
		}

		::System::Void OnEndElement(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONENDELEMENT_OFFSET))(this, a1);
		}

		::System::Void ReadCustomProviderData(::System::String* a1, ::Mono::Xml::SmallXmlParser_IAttrList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCUSTOMPROVIDERDATA_OFFSET))(this, a1, a2);
		}

		::System::Void ReadLifetine(::Mono::Xml::SmallXmlParser_IAttrList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READLIFETINE_OFFSET))(this, a1);
		}

		::System::TimeSpan ParseTime(::System::String* a1)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_PARSETIME_OFFSET))(this, a1);
		}

		::System::Void ReadChannel(::Mono::Xml::SmallXmlParser_IAttrList* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCHANNEL_OFFSET))(this, a1, a2);
		}

		::System::Runtime::Remoting::ProviderData* ReadProvider(::System::String* a1, ::Mono::Xml::SmallXmlParser_IAttrList* a2, ::System::Boolean a3)
		{
			return ((::System::Runtime::Remoting::ProviderData*(*)(::PVOID, ::System::String*, ::Mono::Xml::SmallXmlParser_IAttrList*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READPROVIDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReadClientActivated(::Mono::Xml::SmallXmlParser_IAttrList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCLIENTACTIVATED_OFFSET))(this, a1);
		}

		::System::Void ReadServiceActivated(::Mono::Xml::SmallXmlParser_IAttrList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READSERVICEACTIVATED_OFFSET))(this, a1);
		}

		::System::Void ReadClientWellKnown(::Mono::Xml::SmallXmlParser_IAttrList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READCLIENTWELLKNOWN_OFFSET))(this, a1);
		}

		::System::Void ReadServiceWellKnown(::Mono::Xml::SmallXmlParser_IAttrList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READSERVICEWELLKNOWN_OFFSET))(this, a1);
		}

		::System::Void ReadInteropXml(::Mono::Xml::SmallXmlParser_IAttrList* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READINTEROPXML_OFFSET))(this, a1, a2);
		}

		::System::Void ReadPreload(::Mono::Xml::SmallXmlParser_IAttrList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_READPRELOAD_OFFSET))(this, a1);
		}

		::System::String* GetNotNull(::Mono::Xml::SmallXmlParser_IAttrList* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::Mono::Xml::SmallXmlParser_IAttrList*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_GETNOTNULL_OFFSET))(this, a1, a2);
		}

		::System::String* ExtractAssembly(::System::String*& a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_EXTRACTASSEMBLY_OFFSET))(this, a1);
		}

		::System::Void OnChars(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONCHARS_OFFSET))(this, a1);
		}

		::System::Void OnEndParsing(::Mono::Xml::SmallXmlParser* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Xml::SmallXmlParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CONFIGHANDLER_ONENDPARSING_OFFSET))(this, a1);
		}
	};
}
