#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::Net { class WebRequest; }

#define SYSTEM_NET_FILEWEBREQUESTCREATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x186D1EB0)
#define SYSTEM_NET_FILEWEBREQUESTCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x186D1EA0)

namespace System::Net
{
	inline static constexpr unsigned int FileWebRequestCreator_TypeDefinitionIndex = 2797;

	class FileWebRequestCreator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUESTCREATOR__CTOR_OFFSET))(this);
		}

		::System::Net::WebRequest* Create(::System::Uri* uri)
		{
			return ((::System::Net::WebRequest*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FILEWEBREQUESTCREATOR_CREATE_OFFSET))(this, uri);
		}
	};
}
