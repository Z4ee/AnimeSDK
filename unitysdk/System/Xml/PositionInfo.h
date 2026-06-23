#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_POSITIONINFO_GETPOSITIONINFO_OFFSET UNITYSDK_OFFSET(0x1DE3F530)
#define SYSTEM_XML_POSITIONINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1DE3F510)
#define SYSTEM_XML_POSITIONINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1DE3F520)
#define SYSTEM_XML_POSITIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE3F5A0)

namespace System::Xml
{
	inline static constexpr unsigned int PositionInfo_TypeDefinitionIndex = 1793;

	class PositionInfo : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_POSITIONINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_POSITIONINFO_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_POSITIONINFO_GET_LINEPOSITION_OFFSET))(this);
		}

		static ::System::Xml::PositionInfo* GetPositionInfo(::System::Object* o)
		{
			return ((::System::Xml::PositionInfo*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_POSITIONINFO_GETPOSITIONINFO_OFFSET))(o);
		}
	};
}
