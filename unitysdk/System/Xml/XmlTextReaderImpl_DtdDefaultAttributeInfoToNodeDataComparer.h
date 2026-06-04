#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define SYSTEM_XML_XMLTEXTREADERIMPL_DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1AEEBFB0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1AEEBF50)
#define SYSTEM_XML_XMLTEXTREADERIMPL_DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEEC1B0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEEC1A0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer_TypeDefinitionIndex = 1848;

	class XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IComparer_1<::System::Object*>** StaticGet_s_instance()
		{
			return (::System::Collections::Generic::IComparer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer_TypeDefinitionIndex)->GetStaticField(0x198E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::IComparer_1<::System::Object*>* get_Instance()
		{
			return ((::System::Collections::Generic::IComparer_1<::System::Object*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER_GET_INSTANCE_OFFSET))();
		}

		::System::Int32 Compare(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
