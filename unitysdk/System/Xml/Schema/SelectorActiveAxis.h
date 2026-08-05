#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/ActiveAxis.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Xml::Schema { class Asttree; }
namespace System::Xml::Schema { class ConstraintStruct; }
namespace System::Xml::Schema { class KeySequence; }

#define SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_ENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1F06AAE0)
#define SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_GET_LASTDEPTH_OFFSET UNITYSDK_OFFSET(0x1F06A990)
#define SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_POPKS_OFFSET UNITYSDK_OFFSET(0x1F06AF10)
#define SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_PUSHKS_OFFSET UNITYSDK_OFFSET(0x1F06AB10)
#define SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F06AA30)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SelectorActiveAxis_TypeDefinitionIndex = 1954;

	class SelectorActiveAxis : public ::System::Xml::Schema::ActiveAxis
	{
	public:
		::System::Collections::ArrayList* KSs; // 0x28
		::System::Xml::Schema::ConstraintStruct* cs; // 0x30
		::System::Int32 KSpointer; // 0x38

		::System::Void _ctor(::System::Xml::Schema::Asttree* axisTree, ::System::Xml::Schema::ConstraintStruct* cs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::Asttree*, ::System::Xml::Schema::ConstraintStruct*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS__CTOR_OFFSET))(this, axisTree, cs);
		}

		::System::Int32 get_lastDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_GET_LASTDEPTH_OFFSET))(this);
		}

		::System::Boolean EndElement(::System::String* localname, ::System::String* URN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_ENDELEMENT_OFFSET))(this, localname, URN);
		}

		::System::Int32 PushKS(::System::Int32 errline, ::System::Int32 errcol)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_PUSHKS_OFFSET))(this, errline, errcol);
		}

		::System::Xml::Schema::KeySequence* PopKS()
		{
			return ((::System::Xml::Schema::KeySequence*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SELECTORACTIVEAXIS_POPKS_OFFSET))(this);
		}
	};
}
